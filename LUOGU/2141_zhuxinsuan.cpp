#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    int num;// 数据个数
    int cnt = 0; // 计数器

    cin >> num;
    cin.get();
    int *array = new int[num];// 读取并存放
    int *tmp=new int [num]; // array的副本

    // 初始化
    for (int i = 0; i < num ; i++ ) {
        cin >> array[i];
        tmp[i] = array[i];
    }

    for (int i = 0; i < num; i++) {
        for (int j = i + 1; j < num; j++)
        {
            for (int k = 0; k < num; k++)
                if (tmp[k] == array[i] + array[j])
                {
                    cnt++;
                    tmp[k] = 0; // 防止一模一样的两组加数导致重复计数
                }
        }
    }

    cout << cnt;
    return 0;
}
