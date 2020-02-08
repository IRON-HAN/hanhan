//strtype4. cpp--line input
// date:2020-1-27

# include <iostream>
# include <string>//make string class available
# include <cstring>//c-style string library
int main(){
    using namespace std;

    char charr[20];
    string str;

    cout << "Length of string in charr before input:"
    <<strlen(charr)<< endl;
    cout << "Length of string in str before input:"
    <<str. size()<<endl;

    cout <<"Enter a line of text:\n";
    // 下面是将一行输入读取到数组中的代码：
    cin. getline(charr,20);//indicate maximum length
    cout << "You entered:"<< charr << endl;

    cout << "Enter another line of text:\n";
    // 下面是将一行输入读取到string对象中的代码：
    getline(cin, str);//cin now an argument; no length specifier
    cout <<"You entered:"<< str << endl;
    // 1. getline（）不是类方法。它将cin作为参数，指出到哪里去查找输入。
    // 2，没有指出字符串长度的参数，因为string对象将根据字符串的长度自动调整自己的大小。

    cout << "Length of string in charr after input:"
    <<strlen(charr)<< endl;
    cout << "Length of string in str after input:"
    <<str. size()<<endl;

    return 0;
}
// 下面是一个运行该程序时的输出示例：
// Length of string in charr before input：27
// Length of string in str before input：0
// Enter a line of text：
// peanut butter
// You entered:peanut butter
// Enter another line of text：
// blueberry jam
// You entered:blueberry jam
// Length of string in charr after input：13
// Length of string in str after input：13

// notes:

// 字符串长度:
// 在用户输入之前，该程序指出数组charr中的字符串长度为27，这比该数组的长度要大。
// 这里要3点需要说明。
// 1，未初始化的数组的内容是未定义的；
// 2，函数strlen（）从数组的第一个元素开始计算字节数，直到遇到空字符。
// 在这个例子中，在数组末尾的几个字节后才遇到空字符。
// 对于未被初始化的数据，第一个空字符的出现位置是随机的，
// (因此您在运行该程序时，得到的数组长度很可能与此不同。)
// 3，用户输入之前，str中的字符串长度为0。这是因为未被初始化的string对象的长度被自动设置
// 为0。


