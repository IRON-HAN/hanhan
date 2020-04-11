#include <iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    A(int _a):a(_a){}
};
class B{
    protected:
    int b;
    public:
    B(int _b):b(_b){}
};
class D: public A,public B {
    int d;
    public:
    D(int _a,int _b,int _d):A(_a), B(_b),d(_d){}
};

int main(){
    A *pa = new A(1);
    B *pb = new B(2);
    D *pd = new D(3, 4, 5);

    pa = pd;
    pb = pd;

    cout << pa << endl;
    cout << pb << endl;
    cout << pd << endl;
    return 0;
}
