#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>

using namespace std;
int n,m,r,ans=0;
int x,y;
double dis;
bool map[1001][1001]={0};
int main()
{
    scanf("%d%d%d",&n,&m,&r);
    for(int k=1;k<=m;k++) {
        scanf("%d%d",&x,&y);
        map[x][y]=1;
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++) {
                dis=sqrt((x-i)*(x-i)+(y-j)*(y-j));//两点之间的距离公式！！初中就学到了，应该都会吧。
                if(dis<=r)//到这里的距离小于扫射的距离
                    map[i][j]=1;//那么就标记
            }
        }
    }
    for(int i=1;i<=n;i++) {//看每一个点
            for(int j=1;j<=n;j++) {
                if(map[i][j]==1)//可以被扫到
                    ans++;//计数器加加
            }
    }
    printf("%d",ans);//完美输出答案
    return 0;//完美の结束
}
