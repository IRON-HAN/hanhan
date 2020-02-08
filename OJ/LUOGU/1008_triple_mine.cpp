#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    int bai[3], shi[3], ge[3];
    int i, j;

    int is_same = 0;

    for (bai[0] = 1; bai[0] <= 3; bai[0]++)
        for ( shi[0] = 1; shi[0] <= 9; shi[0]++)
            for ( ge[0] = 1; ge[0] <= 9; ge[0]++)
            {
                a = 100 * bai[0] + 10 * shi[0] + ge[0];
                b = 2 * a;
                c = 3 * a;

                bai[1] = b / 100;
                shi[1] = (b % 100) / 10;
                ge[1] = b % 10;

                bai[2] = c / 100;
                shi[2] = (c % 100) / 10;
                ge[2] = c % 10;
                int _num[9] = {bai[0], shi[0], ge[0],
                    bai[1], shi[1], ge[1], bai[2], shi[2], ge[2]};

                for (i = 0; i <= 8; i++)
                    for (j = i + 1; j <= 8; j++){
                        if(_num[i]==_num[j])
                            is_same = 1;
                        cout << i << '\t' << j << endl;
                    }


                if(is_same!=1 && c<=999 && shi[1] && shi[2] && ge[1] && ge[2])
                    cout << a << ' ' << b << ' ' << c << endl;

            }
    return 0;
}
