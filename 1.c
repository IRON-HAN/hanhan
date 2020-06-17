#include <math.h>
#include <stdio.h>

#define Area(a, b, c)                                            \
    {                                                            \
        if (c >= a + b || b >= a + c || a >= b + c)              \
            printf("不能构成三角形!\n");                         \
        else                                                     \
        {                                                        \
            double p = (a + b + c) / 2;                          \
            double area = sqrt((p - a) * (p - b) * (p - c) * p); \
            printf("三角形的面积是%f\n", area);                  \
        }                                                        \
    }

int main()
{
    printf("area of(3,4,5)\n");
    Area(3, 4, 5);
    printf("area of(1,2,3)\n");
    Area(1, 2, 3);
    return 0;
}
