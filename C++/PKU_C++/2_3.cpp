// 2020-2-6
// main: 复制构造函数

// notes:
// 如果人不定义(构造函数),则机器自动生成(默认的无参数的构造函数)--人定义了则无
// 无参数的构造函数不一定存在
// 机器会自动生成(默认的复制构造函数)
// 复制构造函数只有一个, 要么人写,要么机器

// 注: 对象间的赋值并不导致赋值函数被调用

class My_class{
    public:
        int n;
        My_class(){}
        My_class(My_class &c) { n = 2 * c.n; }
};

int main(){
    My_class c1, c2;
    c1.n = 5;
    c2 = c1;// 赋值语句 没有调用复制构造函数
    My_class c3(c1);// 初始化的时候调用了复制构造函数
}