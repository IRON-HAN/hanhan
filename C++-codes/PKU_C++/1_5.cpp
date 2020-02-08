// 2020-2-6
// main: 对象成员的访问
#include <iostream>
using namespace std;

class Rectangle{
    public:
        int w, h;
        inline int Area(){
            return w*h;
        }
        inline int Perimeter(){
            return 2*(w+h);
        }
        void Init(int w_, int h_){
            w = w_;
            h = h_;
        }
};

int main(){
    int w, h;
    Rectangle r;
    cout << "Please input the width & the height:" << endl;
    cin >> w >> h;

    r.Init(w, h);
    cout << r.Area() << endl
         << r.Perimeter() << endl;

    cout << "The size of Rectangle is: " << sizeof(Rectangle) << endl;

    return 0;

}
