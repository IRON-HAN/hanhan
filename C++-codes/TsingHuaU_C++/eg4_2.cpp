#include <iostream>
using namespace std;

class Point {
    public:
        // 构造函数
        Point(int xx=0, int yy=0){
            x = xx;
            y = yy;
        }
        // 复制构造函数
        Point(Point &p);
        int getX(){
            return x;
        }
        int getY(){
            return y;
        }
    private:
        int x, y;
};
// 成员函数的实现
Point::Point(Point &p){
    x = p.x;
    y = p.y;
    cout << "Calling the copy constructor" << endl;
}

// 形参是Point类的对象的函数
void fun1(Point p){
    cout << p.getX() << endl;
}
// 返回值是Point类的对象的函数
Point fun2(){
    Point a;
    return a;
}
int main(){
    Point a;
    // 用a初始化b(1ST调用了复制函数)
    Point b(a);
    cout << b.getX() << endl;
    // b是fun1的实参(2ND调用了复制函数)--虚实结合的时候进行了复制
    fun1(b);
    // 函数的返回值是类对象,函数返回时(3RD调用了复制函数)--返回的时候进行了复制
    b = fun2();
    cout << b.getX() << endl;
    return 0;
}
