// 2020-2-7
// Main: 类型转换构造函数
#include <iostream>
using namespace std;

class Complex{
    public:
        double real, imag;
        // 类型转换函数
        Complex (int i){
            real = i;
            imag = 0;
            cout << "Int_Constructor called " << endl;
        }
        Complex(double r, double i ){real = r; imag = i;}
};

int main() {
    Complex c1(7,8);
    Complex c2 = 12;
    c1 = 9; //9被自动转换成一个临时的complex对象
    cout << c1.real << "," << c1.imag << endl;
    return 0;

}
