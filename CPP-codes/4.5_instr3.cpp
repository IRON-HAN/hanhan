//读取多个字符串--成功
//函数 cin.get

#include <iostream>
using namespace std;
int main(){
    const int Size = 20;
    char name[Size];
    char dessert[Size];

    cout << "enter your name: " << endl;
    cin.get(name,Size) .get();
    cout << "enter your favorite dessert: " << endl;
    cin.get(dessert,Size) .get();
    cout << "i have some delicious " << dessert;
    cout << " for you. " << name << ".\n";
    return 0;
}
