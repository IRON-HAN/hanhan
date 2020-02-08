// 2020-1-26
// 例3-15计算长方体的体积
// 有三个形参：length（长）、width（宽）、height（高），
// 其中width和height带有默认值2和3。

#include <iostream>

#include <iomanip>

using namespace std;



int getVolume(int length, int width = 2, int height = 3);



int main() {

    const int X = 10, Y = 12, Z = 15;

    cout << "Some box data is " ;

    cout << getVolume(X, Y, Z) << endl;

    cout << "Some box data is " ;

    cout << getVolume(X, Y) << endl;

    cout << "Some box data is " ;

    cout << getVolume(X) << endl;

    return 0;

}


int getVolume(int length, int width, int height) {

    cout << setw(5) << length << setw(5) << width << setw(5)

    << height << '\t';

    return length * width * height;

}

