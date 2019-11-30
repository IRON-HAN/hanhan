#include <stdio.h>
#include <string.h>
#define MAX 100

char m[MAX][MAX];
char input[MAX];
int visited[MAX][MAX] = {0};
int i, n;

void DFS(int a, int b) {
    if(a<0||a>=MAX||b<0||b>=MAX) return;
    if (m[a][b] != '@' || visited[a][b] != 0)
      return;
    visited[a][b] = 1;
    for (int dx=-1; dx<=1; dx++) {
      for (int dy = -1; dy <= 1; dy++)
        if(dx!=0||dy!=0)DFS(a+dx, b+dy);
    }
}
int main() {
  int p=0,q;
  gets(input);
  n = strlen(input);
      for (i = 0; i <= n; i++) {
      if (input[i] == ' '){
        p++;
        q = 0;
        continue;
        }
    m[p][q++]=input[i];
  }
int cnt=0;
    for(int s=0;s<p;s++)
    {
        for(int t=0;t<SIZE;j++)
        {
            if(VISITED[i][j]==0 && m[i][j]=='@'){dfs(i,j);cnt++;}
        }
    }
    printf("%d\n",cnt);
    return 0;
}

