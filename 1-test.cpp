#include <algorithm>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <functional>
#include <iostream>
#include <map>
#include <ostream>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

namespace my
{
    using std::ostream;
    using std::strcpy;
    using std::strlen;
    class string
    {
    private:
        char *m_data;

    public:
        string(const char *str = 0);
        string(const string &src);
        string &operator=(const string &src);
        ~string();
        char *get_str() const { return m_data; }
    };
    string::string(const char *str)
    {
        if (str)
        {
            int len = std::strlen(str);
            m_data = new char[len + 1];
            std::strcpy(m_data, str);
        }
        else
        {
            m_data = new char[1];
            *m_data = 0;
        }
    }
    string::string(const string &src)
    {
        int len = std::strlen(src.m_data);
        m_data = new char[len + 1];
        strcpy(m_data, src.m_data);
    }
    string::~string()
    {
        delete[] m_data;
    }
    string &string::operator=(const string &src)
    {
        if (this->m_data == src.m_data)
            return *this;
        else
        {
            delete[] m_data;
            int len = std::strlen(src.m_data);
            m_data = new char[len + 1];
            strcpy(m_data, src.m_data);
            return *this;
        }
    }
    ostream &operator<<(ostream &os, const string &str)
    {
        os << str.get_str();
        return os;
    }

} // namespace my

namespace _0521
{
    using std::ostream;
    class fraction
    {
    private:
        int m_numer;
        int m_denom;

    public:
        fraction(int num, int den = 1)
            : m_numer(num), m_denom(den)
        {
            std::cout << "ctor called" << std::endl;
        }

        // operator double() const
        // {
        //     std::cout << "operator double called" << std::endl;
        //     return ((double)m_numer) / ((double)m_denom);
        // }
        fraction operator+(const fraction &f)
        {
            std::cout << "operator + called" << std::endl;
            return fraction(m_numer * f.m_denom + m_denom * f.m_numer, m_denom * f.m_denom);
        }
        friend ostream &operator<<(ostream &os, const fraction &f)
        {
            os << f.m_numer << "/" << f.m_denom << "\n";
            return os;
        }
    };

} // namespace _0521

namespace _0522
{
    using std::cout;
    using std::endl;
    class base
    {
    public:
        int val;
        base() : val(0)
        {
            cout << "base ctor" << endl;
        }
        // void print(int b1)
        // {
        //     cout << "base with 1 para" << endl;
        // }
        void print(int b1, int b2)
        {
            cout << "base with 2 paras" << endl;
        }
        int print()
        {
            cout << "base::print with no para" << endl;
            return 0;
        }
        void test()
        {
            cout << "base::test" << endl;
        }
    };
    class derived : public base
    {
    public:
        int val;
        derived() : base(), val(1)
        {
            cout << "derived ctor" << endl;
            cout << "derived::val: " << val << endl;
            cout << "base::val: " << base::val << endl;
        }
        void print(int b1) const
        {
            cout << "derived print with 1 para" << endl;
        }
    };
} // namespace _0522

namespace _0604_1
{
    using std::cout;
    using std::endl;
    class A
    {
    public:
        A(int i = 0)
        {
            a = i + b;
            cout << "ctor" << endl;
        }
        void print() { cout << a << "," << b << endl; }
        ~A() { cout << "dtor" << endl; }

    private:
        int a;
        static int b;
    };
    int A::b = 5;

    // using _0604_1::A;
    // A array[3];
    // for (int i = 0; i < 3; ++i)
    //     array[i].print();
    // array[0] = A(1);
    // array[1] = A(3);
    // for (int i = 0; i < 3; ++i)
    //     array[i].print();

    // A *p[3];
    // for (int i = 0; i < 3; ++i)
    //     p[i] = &array[i];
    // for (int i = 0; i < 3; ++i)
    //     p[i]->print();
} // namespace _0604_1

namespace _0604_2
{
    using std::cin;
    using std::cout;
    using std::endl;
    class A
    {
    private:
        int a, b;

    public:
        A(int i, int j) : a(i), b(j) {}
        void Move(int x, int y)
        {
            a += x;
            b += y;
        }
        void show() { cout << a << "," << b << endl; }
    };

    class B : public A
    {
    private:
        int x, y;

    public:
        B(int i, int j, int k, int l) : A(i, j), x(k), y(l) {}
        void show() { cout << x << "," << y << endl; }
        void fun() { Move(3, 5); }
        void f1() { A::show(); }
    };
} // namespace _0604_2

namespace _0604_3
{
    using std::cin;
    using std::cout;
    using std::endl;
    class A
    {
    public:
        void f1() { cout << "A::f1()" << endl; }
        A(int num = 0) : j1(num) {}

    protected:
        int j1;
    };
    class B : public A
    {
    public:
        void f2()
        {
            cout << "B::f2()" << endl;
            f1();
            cout << "A::j1= " << j1 << endl;
        }
        B() {}

    protected:
        int j2;
    };
    class C : private B
    {
    public:
        void f3();
        C() {}
    };
} // namespace _0604_3

namespace _0604_4
{
    const double PI = 3.1415;
    class Shape
    {
    public:
        virtual double area() const = 0;
    };
    class Cricle : public Shape
    {
    private:
        double _radius;

    public:
        Cricle(double radius) : _radius(radius) {}
        double area() const override { return PI * _radius * _radius; }
    };
    class Square : public Shape
    {
    private:
        double _side;

    public:
        Square(double side) : _side(side) {}
        double area() const override { return _side * _side; }
    };

} // namespace _0604_4

namespace _0605
{
    class A
    {
    public:
        int a1;

    protected:
        int a2;
    };
    class B : public A
    {
    protected:
        int b;

    public:
        void func()
        {
            a1 = 5;
            a2 = 3;
        }
    };
    class C : public B
    {
    public:
        void fun()
        {
            b = 5;
            a2 = 10;
        }
    };
} // namespace _0605

using _0604_4::Cricle;
using _0604_4::Shape;
using _0604_4::Square;
double total(Shape *s[], int n)
{
    double sum = 0.0;
    for (int i = 0; i < n; ++i)
        sum += s[i]->area();
    return sum;
}
int main()
{
    using namespace std;
    // Shape *ps[2];
    // Cricle c(10);
    // Square s(20);
    // ps[0] = &c;
    // ps[1] = &s;

    // double sum = total(ps, 2);
    // cout << sum << endl;
    int n;
    int a[100];
    fstream file;
    file.open("file1.txt");

    file >> n;

    cout << "number is: " << n << endl;

    for (int i = 1; i <= n; ++i)
        file >> a[i];
    for (int i = 1; i <= n; ++i)
        cout << a[i];

    file.seekp(0, ios::beg);
    file << "aa";

    return 0;
}
