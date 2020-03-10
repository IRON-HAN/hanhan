// Date: 2020-3-1
// 说明:
// using cin.get(char)

#include <iostream>
int main(){
    using namespace std;
    char ch;
    int cnt = 0;

    cout << "Enter characters:\n";
    cout << "Enter # to quit.\n";

    cin.get(ch);
    while (ch != '#') {
        cout << ch;
        ++cnt;
        cin.get(ch);
    }
    cout << cnt << endl;
    return 0;
}
