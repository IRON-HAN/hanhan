//输入数字和字符串

#include <iostream>
using namespace std;
int main(){
    cout << "when was your house built?" << endl;
    int year;
    cin >> year;
    cin.get();

    cout << "what's your address?" << endl;
    char address[80];
    cin.getline(address, 80);

    cout << "year built: " << year << endl;
    cout << "address: " << address << endl;
    cout << "done!\n";
    return 0;
}
