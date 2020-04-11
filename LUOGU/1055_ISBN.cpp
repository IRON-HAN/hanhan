#include <iostream>
using namespace std;

int main(){
    char str[20];
    char c;

    cin.getline(str, 20);
    int sum = 0;
    int i = 0, k = 0;

    for (i=0; i<12; i++) {
        if(str[i]!='-'){
            k++;
            sum += k * (str[i] - '0');//括号位置错误
        }
    }
    int res = sum % 11;

    //两个if分支 顺序错误

    if(res==10)
        c = 'X';
    else
        c = res + '0';

    if (str[12]==c) {
        cout << "Right";
    }
    else {
        str[12] = c;
        cout << str;
    }

    return 0;
}
