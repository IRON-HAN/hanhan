//use and display a variable
//使用和展示变量

#include <iostream>
using namespace std;
int main() {
    int carrots;

    carrots = 25;
    cout << "I have ";
    cout << carrots;
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;
    cout << "I have " << carrots << " carrots." << endl;
    return 0;
}
