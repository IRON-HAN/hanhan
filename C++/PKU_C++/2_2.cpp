// 2020-2-6
// 构造函数
class Test{
    public:
    Test(int n){}//(1)
    Test(int n, int m){}//(2)
    Test(){}//(3)
};

Test a1[3] = {1, Test(1, 2)};
// 分别用 (1)(2)(3)初始化
Test *pa2[3] = {new Test(4), new Test(1, 2)};
// 用(1)(2)初始化了两个元素
