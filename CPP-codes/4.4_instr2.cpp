//读取多个字符串--成功
//函数 cin.getline

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
