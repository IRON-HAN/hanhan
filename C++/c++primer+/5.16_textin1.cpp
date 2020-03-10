// Date: 2020-3-1
// 说明:
// 1. 哨兵法读取字符
// 2. 缺陷: cin自动忽略空格和换行符 cout无法显示

#include <iostream>
int main(){
    using namespace std;
    char ch;
    int cnt = 0;
    cout << "Enter characters:\n";
    cout << "Enter # to quit.\n";

    cin >> ch;
    while (ch != '#') {
        cout << ch;
        ++cnt;
        cin >> ch;
    }
    cout << cnt << endl;
    return 0;
}
