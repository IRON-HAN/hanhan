// 折半查找法
// 判定是否存在&输出位置
// 要求：从小到大输入
#include <stdio.h>
#include <process.h>
#define N 15
int main(){
    int num, top, bot, mid;
    int i, loca, sign;
    int flag = 1;

    char c;
    int a[N];

    printf("enter data (from small to big):\n");
    for (i=0; i<N; i++) {
        scanf("%d", &a[i]);
    }

    for (i=0; i<N; i++) {
        printf("%5d", a[i]);
    }
    printf("\n");

    while (flag) {
        printf("input the number you want to search:\n");
        scanf("%d", &num);
        sign = 0;//表示尚未找到
        top = 0;
        bot = N - 1;

        if((num<a[0])||(num>a[N-1]))
            loca = -1;

        while ((!sign)&&(top<=bot)) {
            mid = (top + bot) / 2;
            if (num==a[mid]) {
                loca = mid;
                printf("found & the position is %d\n", loca+1);
                sign = 1;
            }
            else if (num<a[mid]) {
                bot = mid - 1;
            }
            else {
                top = mid + 1;
            }
        }
        if(!sign || loca==-1)
            printf("can't find.\n");

        printf("continue(Y or N)");
        scanf("%c", &c);
        if(c=='n'||c=='N')
            flag = 0;


        }
        system("pause");
        return 0;
}
