#include <iostream>
using namespace std;

const float PI = 3.14159;
const float FENCE_PRICE = 35; // 栅栏的单价
const float CONCRETE_PRICE = 20; // 过道水泥的单价

class Circle{
    public:
        Circle(float r); // 构造函数
        float circumference(); // 计算圆的周长
        float area(); // 计算圆的面积
    private:
        float radius;
};

// 构造函数初始化成员

Circle::Circle(float r){
    radius = r;
}

float Circle::circumference(){
    return 2*PI*radius;
}

float Circle::area()
{
    return PI*radius*radius;
}

int main(){
    float radius;
    cout << "Enter the radius of the pool: ";
    cin >> radius;

    Circle pool(radius); // 游泳池边界
    Circle pool_rim(radius + 3); // 栅栏

    // 计算栅栏造价并输出
    float fence_cost = pool_rim.circumference() * FENCE_PRICE;
    cout << "Fencing cost is $" << fence_cost << endl;

    // 计算过道造假并输出
    float conrete_cost = (pool_rim.area() - pool.area()) * CONCRETE_PRICE;
    cout << "Concrete Cost is $" << conrete_cost << endl;

    return 0;
}
