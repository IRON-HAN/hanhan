// 读取多个字符串--成功
// 函数 cin.getline
// 调用: cin.getline(string,size)
#include <iostream>
using namespace std;
int main(){
    const int Size = 20;
    char name[Size];
    char dessert[Size];

    cout << "enter your name: " << endl;
    cin.getline(name,Size);
    cout << "enter your favorite dessert: " << endl;
    cin.getline(dessert,Size);
    cout << "i have some delicious " << dessert;
    cout << " for you. " << name << ".\n";
    return 0;
}
// output:
// Enter your name:
// Dirk Hammernose
// Enter your favorite dessert:
// Radish Torte
// I have some delicious Radish Torte for you, Dirk Hammernose.

// explain:
// cin.getline()读取“Jud”以及用户按Enter键而生成的换行符("\n")
// 并将换行符替换为空字符("\0")
