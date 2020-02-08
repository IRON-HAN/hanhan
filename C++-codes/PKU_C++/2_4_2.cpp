// 2020-2-7
// 析构函数

// main:
// 1. 函数名= '~'+ 类名
// 2. 无参数&返回值
// 3. 一个类最多一个析构函数(要么手写,要么机器写)
// 4. 析构函数在对象消亡时自动调用
// 5. 机器写的默认析构函数啥都不做

#include <iostream>
using namespace std;

class CMy_class{
    public:
        ~CMy_class() { cout << "destructor called" <<endl; }
};

CMy_class obj;

CMy_class fun(CMy_class sobj){
    return sobj;
}
/*
参数对象消亡也会导致析构函数被调用
函数调用返回时生成临时对象返回
*/
int main(){
    obj = fun(obj);
    return 0;
}
/*
函数调用的返回值(临时对象)被调用后
该临时对象析构函数被调用
*/
// output:
// -----------
// destructor called
// destructor called
// destructor called
// -----------
