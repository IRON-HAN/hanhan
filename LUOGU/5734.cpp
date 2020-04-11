#include <iostream>
#include <cstdio>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <deque>
#include <vector>
#include <queue>
#include <string>
#include <cstring>
#include <map>
#include <stack>
#include <set>
#include <sstream>
#include <list>
#include <functional>
#include <cstdlib>
using namespace std;
int main(){
    // freopen("E:\\VS-Code-C\\CODES\\test_in.txt", "r", stdin);
    int times;
    cin >> times;
    string input;
    cin >> input;
    int op;
    string str_1, str_3, str_4;
    int a_2, b_2, a_3;


    for (int i = 0; i < times; ++i){


    cin >> op;

    switch (op) {
        case 1:
            cin >> str_1;
            input.append(str_1);
            cout << input << endl;
            break;
        case 2:
            cin >> a_2 >> b_2;
            input.assign(input, a_2, b_2);
            cout << input << endl;
            break;
        case 3:
            cin >> a_3;
            cin >> str_3;
            input.insert(a_3, str_3);
            cout << input << endl;
            break;
        case 4:
            cin >> str_4;
            if (input.find(str_4)<input.size()) {
                cout << input.find(str_4) << endl;
            }
            else {
                cout << "-1" << endl;
            }
            break;
        }
    }
    // fclose(stdin);


    return 0;
}
