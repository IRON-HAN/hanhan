#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// chcp 65001
void print() {}
template <class T, class... Types>
void print(const T &firstArg, const Types &... args)
{
    cout << firstArg;
    print(args...);
}
class A
{
public:
    int i;
    A() : i(10) {}
    virtual void f() { print("A::f()", i, '\n'); }
};

class B : public A
{
public:
    int j;
    B() : j(20) {}
    virtual void f() { print("B::f()", j, '\n'); }
};
int main()
{

    // EX1
    print("EX1:--------------------\n");
    A a, b;
    a.f();
    print(sizeof(a), '\n');

    int *p = (int *)&a;
    int *q = (int *)&b;

    print("*p & *q\n", *p, '\n', *q, '\n');
    print("p & q\n", p, '\n', q, '\n');

    print("after p+=2: *p=", *(p += 2), '\n');

    //EX2
    print("EX2:--------------------\n");
    B c;
    A *pc = &c;
    pc->f(); // B::f()

    a = c;
    pc = &a;
    pc->f(); // A::f()

    //EX3
    print("EX3:--------------------\n");
    A *pa = &a;

    int *r = (int *)&a;
    int *t = (int *)&c;

    *r = *t; //把B的对象c的vptr赋值给A的对象a

    pa->f();

    return 0;
}
