// 求定积分通用函数（矩形法）

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define N 1000
float integral(float (*)(float), float, float, int);
float f_sin(float);
float f_cos(float);
float f_exp(float);
int main()
{
    float a1, b1, a2, b2, a3, b3, c;
    float (*p)(float);


    printf("input a1,b1:\n");
    scanf("%f %f", &a1, &b1);
    printf("input a2,b2:\n");
    scanf("%f %f", &a2, &b2);
    printf("input a3,b3:\n");
    scanf("%f %f", &a3, &b3);
    // 使P指向f_sin函数
    p = f_sin;
    c = integral(p, a1, b1, N);
    printf("the integral of sin is:%f\n", c);
    // 使P指向f_cos函数
    p = f_cos;
    c = integral(p, a2, b2, N);
    printf("the integral of sin is:%f\n", c);

    p = f_exp;
    c = integral(p, a3, b3, N);
    printf("the integral of sin is:%f\n", c);

    system("pause");
    return 0;
}
// 求定积分通用函数（矩形法）
float integral(float (*p)(float), float bot, float top, int n)
{
    int i;
    float x, h, s;
    h = (top - bot) / n;
    x = bot;
    s = 0;
    for (i = 1; i <= n; i++)
    {
        x += h;
        s = s + (*p)(x)*h;
    }
    return s;
}

float f_sin(float x)
{
    return sin(x);
}
float f_cos(float x)
{
    return cos(x);
}
float f_exp(float x)
{
    return exp(x);
}
