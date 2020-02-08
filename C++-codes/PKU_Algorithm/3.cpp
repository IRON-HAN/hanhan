// 2020-2-7

#include <iostream>
#include <cstring>
using namespace std;

char Left[3][7];
char Right[3][7];
char Res[3][7];

bool Is_Fake(char c, bool light){
// light 为真表示假设假币是轻的, 否则表示假币为重
    int i;
    char *pLeft, *pRight;
    for (i = 0; i < 3; i++)
    {
        if (light)
        {
            pLeft = Left[i];
            pRight = Right[i];
        }
        else
        {
            pLeft = Right[i];
            pRight = Left[i];
        }
        switch (Res[i][0])
        {
            case 'u':
                if(!strchr(pRight, c))
                    return false;
                break;
            case 'e':
                if(strchr(pRight, c) || strchr(pLeft, c))
                    return false;
                break;
            case 'd':
                if(!strchr(pLeft, c))
                    return false;
                break;
        }
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while (t--) {
        for (int i = 0; i < 3; i++) {
            cin >> Left[i] >> Right[i] >> Res[i];
        }
        for (char c = 'A'; c <= 'L'; c++) {
            if (Is_Fake(c, true)) {
                cout << c << " is the fake coin and it is light" << endl;
                break;
            }
            else if (Is_Fake(c, false)) {
                cout << c << " is the fake coin and it is heavy" << endl;
                break;
            }
        }
    }
    return 0;
}
