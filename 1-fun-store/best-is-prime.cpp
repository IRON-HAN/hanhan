//筛法求素数--最终版
#include <iostream>
using namespace std;
#define MAX_NUM 100
char isprime[MAX_NUM + 10];
int main(){

    for (int i = 2; i <= MAX_NUM; i++ )//开始假设所有数都为素数
        isprime[i] = 1;
        for (int i = 2; i <= MAX_NUM;i++){
            if(isprime[i])
                for (int j = 2 * i ; j<=MAX_NUM; j += i)
                    isprime[j] = 0;//将素数i的倍数标记为合数
                }
            for (int i=2; i<=MAX_NUM; i++)
                if(isprime[i])
                    cout << i << endl;

    return 0;

}
