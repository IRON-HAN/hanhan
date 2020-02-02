//读取多个字符串--失败

#include <iostream>
using namespace std;
int main(){
    const int Size = 20;
    char name[Size];
    char dessert[Size];

    cout << "enter your name: " << endl;
    cin >> name;
    cout << "enter your favorite dessert: " << endl;
    cin >> dessert;
    cout << "i have some delicious " << dessert;
    cout << " for you. " << name << ".\n";
    return 0;
}
// Enter your name:
// Alistair Dreeb
// Enter your favorite dessert:
// I have some delicious Dreeb for you, Alistair.
