#include <stdio.h>
#include <string.h>
#define SIZE 100
char m[SIZE][SIZE];//地图定义
int VISITED[SIZE][SIZE]={0};//判断是否已访问

void dfs(int a,int b)
{
    if(a<0||a>=SIZE||b<0||b>=SIZE) return;//判断边界
    if(m[a][b]!='@'||VISITED[a][b]!=0) return;//判断是否被访问
    VISITED[a][b]=1;
    for(int dx=-1;dx<=1;dx++)
    {
        for(int dy=-1;dy<=1;dy++)
            if(dx!=0||dy!=0) dfs(a+dx,b+dy);
    }
}
int main() {
      int i;
    int p=0,q;
    char sentence[SIZE];
  int cnt = 0;
  int status;
  int a,b;
  printf("input the size:a,b(int):\n");
  status = scanf("%d,%d", &a, &b);
  printf("%d %d",a,b);
  while ((status == 2) && (a < SIZE) && (b < SIZE)) {

    gets(sentence);
    puts(sentence);
    for (i = 0; i <= a; i++) {
        p++;
        q = 0;
        continue;
        }
    m[p][q++]=sentence[i];
  }
    if(VISITED[0][0]==0){dfs(0,0);cnt++;}
  printf("%d\n", cnt);
  system("pause");
    return 0;
}