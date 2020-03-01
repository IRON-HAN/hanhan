#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>
#include<cmath>
#define ll long long
using namespace std;
struct node
{
    int a[5000];
    int flag[5000];
}r[5000];
int b[5000];
char zimu[5000];
int main()
{
    int n;
    cout<<"请输入变量个数："<<endl;
    cin>>n;
    int sum=pow(2,n);
    char c[5000];
    cout<<"请输入 "<<sum<<" 个字符(用T或F表示)：";
    for(int i=0;i<sum;i++)
    {
        cin>>c[i];
    }
    for(int i=0;i<sum;i++)
    {
        if(c[i]=='F')
            b[i]=0;
        else
            b[i]=1;
    }
    for(int i=0;i<n;i++)
    {
        zimu[i]='P'+i;
    }
    for(int i=0;i<n;i++)
    {
        int k=i;
        for(int j=0;j<n;j++)
        {
            int x=k%2;
            r[i].a[j]=x;
            k/=2;
        }
        r[i].flag[0]=0;
        r[i].flag[1]=1;
    }
    cout<<endl;
    cout<<"请输出公式对应的真值表："<<endl;
    cout<<"------------------------"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<zimu[i]<<"\t";
    }
    cout<<"A"<<endl;
    for(int i=0;i<sum;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            cout<<(r[i].a[j]==0?'F':'T')<<"\t";
        }
        cout<<(b[i]==0?'F':'T')<<"\t";
        cout<<endl;
    }
    int flag1,flag2;
    for(int i=0;i<sum;i++)
    {
        if(b[i]==1)
            flag1=i;
        else
            flag2=i;
    }
    cout<<"请输出主析取范式："<<endl;
    for(int i=0;i<sum;i++)
    {
        if(b[i]==0)
            continue;
        cout<<"<";
        for(int j=n-1;j>=0;j--)
        {
            if(r[i].a[j]==1)
                cout<<zimu[n-j-1];
            else
                cout<<"┐"<<zimu[n-j-1];
            if(j!=0)
                cout<<" ∧";
        }
        cout<<">";
        if(i!=flag1)
            cout<<" ∨";
    }
    cout<<endl<<endl;
    cout<<"请输出主合取范式："<<endl;
    for(int i=0;i<sum;i++)
    {
        if(b[i]==1)
            continue ;
        cout<<"<";
        for(int j=n-1;j>=0;j--)
        {
            if(r[i].a[j]==1)
                cout<<zimu[n-j-1];
            else
                cout<<"┐"<<zimu[n-j-1];
            if(j!=0)
                cout<<" ∨";
        }
        cout<<">";
        if(i!=flag2)
            cout<<" ∧";
    }
    return 0;
}
