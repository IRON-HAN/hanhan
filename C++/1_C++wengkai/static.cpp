#include <iostream>
using namespace std;

class A
{
private:
    static int i; // Declearation here(in ".h")
public:
    A() { i = 0; } // note: Init_list不能初始化static member
    void print() { cout << i << endl; }
    void set_i(int ii) { i = ii; }
};

int A::i = 5; // Definition with Value(in ".cpp")
// static int A::i;  Error!
// static表示该变量是本文件中的local varible(不能被其他文件访问)
int main()
{
    A a, b;

    a.set_i(10);
    b.print();

    return 0;
}
