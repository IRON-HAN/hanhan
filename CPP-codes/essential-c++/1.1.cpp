#include <iostream>
#include <cstdlib>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
int main() {
    string user_name;
    cout << "enter your name: ";
    cin >> user_name;
    cout << '\n'
         << "hello, "
         << user_name
         << "... and bye!\n";
    system("pause");
    return 0;
    
}
