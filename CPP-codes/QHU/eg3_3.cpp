// 2020-1-25
// 编写程序求π的值

// 其中arctan用如下形式的级数计算：

// 直到级数某项绝对值不大于10-15为止；

// π和x均为double型。


#include <iostream>

using namespace std;

double arctan(double x) {

    double sqr = x * x;

    double e = x;

    double sum = 0;

    int i = 1;

    while (e / i > 1e-15) {

        double f = e / i;

        sum = (i % 4 == 1) ? sum + f : sum - f;

        e = e * sqr;

        i += 2;

    }

    return sum;

}


int main() {

    double a = 16.0 * arctan(1/5.0);

    double b = 4.0 * arctan(1/239.0);

    //注意：因为整数相除结果取整，如果参数写1/5，1/239，结果就都是0



    cout << "PI = " << a - b << endl;

    return 0;

}
