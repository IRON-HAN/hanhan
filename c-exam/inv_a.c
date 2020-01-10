#include <stdio.h>
#include <stdlib.h>
#define N 10

typedef struct fraction {
    int numer;
    int deno;
}num;
//输入每一个数
num *get(num *p) {
    scanf("%d/%d", &p->numer, &p->deno);
    return p;
}
//输出每一个数
void output(num p) {
    printf("%-d/%d",p.numer,p.deno);
    printf("\t");
}
//最大公约数
int comdiv(int num1,int num2){
    return num2?comdiv(num2, num1 % num2) : num1;
}
//最小公倍数
int commul(int num1,int num2){
    return num1 / comdiv(num1, num2) * num2;
}
//约分
num rdcfrc(num frac){
    int div = comdiv(frac.numer, frac.deno);
    frac.numer /= div;
    frac.deno /= div;
    return frac;
}
//两个分数相加
num ADD(num frac1,num frac2){
    int mul = commul(frac1.deno, frac2.deno);
    int numer = mul / frac1.deno * frac1.numer + mul / frac2.deno * frac2.numer;
    num sum = {numer, mul};
    return rdcfrc(sum);
}
//两个分数相减
num SUB(num frac1,num frac2){
    int mul = commul(frac1.deno, frac2.deno);
    int numer = mul / frac1.deno * frac1.numer - mul / frac2.deno * frac2.numer;
    num sum = {numer, mul};
    return rdcfrc(sum);
}
//两个分数相乘
num MULTIPLY(num frac1, num frac2) {
    int numer = frac1.numer * frac2.numer;
    int deno = frac1.deno * frac2.deno;
    num mul = {numer, deno};
    return rdcfrc(mul);
}
//两个分数除
num DIV(num frac1, num frac2) {
    int numer = frac1.numer * frac2.deno;
    int deno = frac1.deno * frac2.numer;
    num mul = {numer, deno};
    return rdcfrc(mul);
}
//detA
num getA(num arcs[N][N],int n)
{
	if(n==1)
	{
		return arcs[0][0];
	}
	num ans ={0,1};
	num temp[N][N];
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			for(k=0;k<n-1;k++)
			{
				temp[j][k] = arcs[j+1][(k>=i)?k+1:k];
			}
		}
		num t = getA(temp,n-1);
		if(i%2==0)
		{   num result;
            result = MULTIPLY(arcs[0][i], t);
            ans = ADD(ans, result);
		}
		else
		{
			num result;
            result = MULTIPLY(arcs[0][i], t);
            ans = SUB(ans, result);
		}
	}
	return ans;
}
//计算每一行每一列的每个元素所对应的余子式，组成A*
void getAStart(num arcs[N][N],int n,num ans[N][N])
{
	if(n==1)
	{
		ans[0][0].deno=1;
        ans[0][0].numer=1;
		return;
	}
	int i,j,k,t;
	num temp[N][N];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n-1;k++)
			{
				for(t=0;t<n-1;t++)
				{
					temp[k][t] = arcs[k>=i?k+1:k][t>=j?t+1:t];
				}
			}
			ans[j][i]  =  getA(temp,n-1);
			if((i+j)%2 == 1)
			{
                ans[j][i].numer = -ans[j][i].numer;
                rdcfrc(ans[j][i]);
            }
		}
	}
}

int main()
{
    num arcs[N][N];
	num astar[N][N];
	int i,j;
	int n;
    printf("input n('0'to quit):\n");
    while(scanf("%d",&n)!=EOF && n)
	{
        printf("input a:\n");
        for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
                get(&arcs[i][j]);
            }
		}

		num a = getA(arcs, n);
		printf("|A|=:");
        output(a);
        printf("\n");
        if(a.numer==0)
		{
			printf("can not transform!\n");
		}
		else
		{
			getAStart(arcs,n,astar);
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
                    output(DIV(astar[i][j], a));
                }
				printf("\n");
			}
		}
		printf("\n");
	}

    system("pause");
    return 0;
}
