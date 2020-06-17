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

namespace my_string
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
    { // 1. 判空
        if (str)
        { // 2.1 分配长度+1 strcpy
            int len = strlen(str);
            m_data = new char[len + 1];
            strcpy(m_data, str);
        }
        else
        { // 2.2 分配长度1 \0
            m_data = new char[1];
            *m_data = 0;
        }
    }
    string::string(const string &src)
    { // 分配长度+1 strcpy
        int len = strlen(src.m_data);
        m_data = new char[len + 1];
        strcpy(m_data, src.m_data);
    }
    string::~string()
    {
        delete[] m_data;
    }
    string &string::operator=(const string &src)
    { // 1. 判断自我赋值
        if (this == &src)
            return *this;
        else
        { // 2. 释放原来的, 重新分配 , strcpy
            delete[] m_data;
            int len = strlen(src.m_data);
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

} // namespace my_string

namespace my_fraction
{
    using std::ostream;
    class fraction
    {
    private:
        int m_numer;
        int m_denom;

    public:
        fraction(int num, int den = 1)
            : m_numer(num), m_denom(den) {} // ctor

        operator double() const; // conversion(unary) √

        friend ostream &operator<<(ostream &os, const fraction &f); // << --friend √

        friend fraction operator+(const fraction &rhs); // +(unary) --friend

        fraction operator-() const; // -(unary) --member √

        friend fraction operator+(const fraction &l, const fraction &r); // plus(binary) --frined √

        fraction operator-(const fraction &f); // minus(binary)--member
    };

    fraction::operator double() const // conversion(unary) √
    {                                 // 不是友元函数,前加scope:: | 类型转换,无返回类型
        return ((double)m_numer) / ((double)m_denom);
    }

    fraction operator+(const fraction &l, const fraction &r) // plus(binary) √
    {                                                        // 友元函数,不加scope::
        return fraction(l.m_denom * l.m_numer, r.m_denom * r.m_numer);
    }

    ostream &operator<<(ostream &os, const fraction &f) // << √
    {                                                   // 友元函数,不加scope::
        os << f.m_numer << "/" << f.m_denom << "\n";
        return os;
    }

    fraction fraction::operator-() const // -(unary) √
    {                                    // 不是友元函数,前加scope::
        return fraction(-m_numer, m_denom);
    }

    fraction fraction::operator-(const fraction &f) // minus(binary)
    {                                               // 不是友元函数,前加scope::
        return fraction(m_numer * f.m_denom + m_denom * f.m_numer, m_denom * f.m_denom);
    }

    fraction operator+(const fraction &rhs) // +(unary)
    {                                       // 友元函数,不加scope::
        return rhs;
    }

} // namespace my_fraction

namespace 多态
{
    const double PI = 3.1415;
    class Shape
    { // 抽象类
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

    double total(Shape **s, int n)
    {
        double sum = 0.0;
        for (int i = 0; i < n; ++i)
            sum += s[i]->area();
        return sum;
    }

} // namespace 多态

namespace access
{
    class A
    {
    public:
        int a1;

    protected:
        int a2;
    };
    class B : protected A
    {
    protected:
        int b1;

    public:
        int b2;
        void fun()
        {
            a1 = 5;
            a2 = 3;
        }
    };
    class C : private B
    {
    public:
        void fun()
        {
            b1 = 1;
            b2 = 2;
            a1 = 3;
            a2 = 4;
        }
    };
} // namespace access


int main()
{
    using 多态::Cricle;
    using 多态::Shape;
    using 多态::Square;
    using 多态::total;

    using namespace std;

    Cricle c(10);
    Square s(20);
    Shape *ps[2] = {&c, &s};

    double sum = total(ps, 2);
    cout << sum << endl;

    return 0;
}
