//输入数字和字符串

#include <iostream>
using namespace std;
int main(){
    cout << "when was your house built?" << endl;
    int year;
    cin >> year;
    // 用于接收 cin 读取"year"后残留的"\n"
    cin.get(); // or cin.get(ch)

    cout << "what's your address?" << endl;
    char address[80];
    cin.getline(address, 80);

    cout << "year built: " << year << endl;
    cout << "address: " << address << endl;
    cout << "done!\n";
    return 0;
}

// output:
// What year was your house built?
// 1966
// What is its street address?
// 43821 Unsigned Short Street Year built:1966
// Address:43821 Unsigned Short Street Done!
