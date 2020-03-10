//读取多个字符串--成功
//函数 cin.get

// get（）函数其中一种变体的工作方式与getline（）类似，它们接受的参数相同，解释参数的方式也相同，并且都读取到行尾。
// 但get并不再读取并丢弃换行符，而是将其留在输入队列中。

// 假设我们连续两次调用get（）：
// {
// cin.get（name，Arsize）；
// cin.get（dessert，Arsize）；//a problem
// }
// 由于第一次调用后，换行符将留在输入队列中，因此第二次调用时看到的第一个字符便是换行符。因此get（）认为已到达行尾

// 幸运的是，get（）有另一种变体。使用不带任何参数的cin.get（）调用可读取下一个字符（即使是换行符），
// 因此可以用它来处理换行符，为读取下一行输入做好准备。
// 方法1:
// {
// cin.get（name，Arsize）；//read first line
// cin.get（）；//read newline
// cin.get（dessert，Arsize）；// read second line
// }

// 方法2:使用get（）的方式是将两个类成员函数拼接起来（合并），如下所示：
// cin.get（name，ArSize）.get（）；// concatenate member functions

// 假设用get（）将一行读入数组中。如何知道停止读取的原因是由于已经读取了整行，而不是由于数组已填满呢？
// 查看下一个输入字符，如果是换行符，说明已读取了整行；否则，说明该行中还有其他输入。

#include <iostream>
using namespace std;
int main(){
    const int Size = 20;
    char name[Size];
    char dessert[Size];

    cout << "enter your name: " << endl;
    cin.get(name,Size) .get();
    cout << "enter your favorite dessert: " << endl;
    cin.get(dessert,Size) .get();
    cout << "i have some delicious " << dessert;
    cout << " for you. " << name << ".\n";
    return 0;
}
// 下面是程序清单4.5中程序的运行情况：
// Enter your name：
// Mai Parfait
// Enter your favorite dessert：
// Chocolate Mousse
// I have some delicious Chocolate Mousse for you，Mai Parfait.
