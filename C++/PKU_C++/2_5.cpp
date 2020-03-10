// 2020-2-7
// main: 构造函数 & 析构函数
// Notes:
// 构造函数: 不是盖房子的, 而是去装修房子的
// (do: 初始化 / dont: 分配空间)
// 析构函数: 不是拆房子的, 而是在房子被拆之前善后的

// new出来的对象, 只有delete才会消亡(触发析构函数)
#include <iostream>
using namespace std;

class Demo{
    int id;
    public:
    // 类型转换构造函数
        Demo(int i){
            id = i;
            cout << "id=" << id << " constructed" << endl;
        }
        ~Demo(){
            cout << "id=" << id << " destructed" << endl;
        }
};

Demo d1(1);// id=1 constructed
void fun(){
    static Demo d2(2);
    Demo d3(3);
    cout << "fun" << endl;
}
int main(){
    Demo d4(4);// id=4 constructed
    d4 = 6;
    // id=6 constructed
    // id=6 destructed
    cout << "main" << endl;
    {
        Demo d5(5);
        // id=5 constructed
        // id=5 destructed
    }
    fun();
    // id=2 constructed
    // id=3 constructed
    // fun
    // id=3 destructed
    cout << "main ends" << endl;
    // id=6 destructed
    // id=2 destructed
    // id=1 destructed
    // 先初始化的后消亡
    return 0;
}
// output:
// -----------
// id=1 constructed
// id=4 constructed
// id=6 constructed
// id=6 destructed
// main
// id=5 constructed
// id=5 destructed
// id=2 constructed
// id=3 constructed
// fun
// id=3 destructed
// main ends
// id=6 destructed
// id=2 destructed
// id=1 destructed
// -----------
