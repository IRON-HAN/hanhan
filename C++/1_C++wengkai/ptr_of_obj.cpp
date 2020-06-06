#include <iostream>
using namespace std;

class A
{
    int i;

public:
    A() : i(10) {}
    void get_i() { cout << i << endl; }
};

class B : public A
{
private:
    int j;

public:
    B() : j(30) {}
    void f() { cout << "B.j=" << j << endl; }
};

int main()
{
    A a;
    B b;

    a.get_i();
    b.get_i();
    cout << sizeof(a) << ' ' << sizeof(b) << endl;

    int *p = (int *)&a;
    cout << p << ' ' << *p << endl;

    *p = 20;
    a.get_i();

    p = (int *)&b;
    cout << p << ' ' << *p << endl;
    p++;
    *p = 50;
    b.f();

    return 0;
}
