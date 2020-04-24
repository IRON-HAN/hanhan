class A
{
public:
    A() {}
};
class B
{
public:
    B(int) {}
    B(const A &) {}
};

int main()
{
    B b = 1; // B(int)
    A a;
    B c = a; //B(const A&) 直接构造, 没有copy
    c = a;
    // 1. tmp = B(a)
    // 2. c = tmp
}
