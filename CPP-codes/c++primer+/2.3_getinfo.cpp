//input & output
//输入与输出
#include <iostream>

using namespace std;

int main(){
    int carrots;

    cout << "how many carrots do you have?" << endl;
    cin >> carrots;
    cout << "here are two more. ";
    carrots += 2;

    cout << "now you have " << carrots << " carrots." << endl;
    return 0;
}
