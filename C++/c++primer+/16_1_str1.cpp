// Dates: 2020-2-12
// Main: string类的构造函数


#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1("winter!");

    string str2(10, '$'); //  数量,字符

    string str3(str1);

    string str4;
    str4 += str2 + str3;

    char a[] = "all's well that ends well";
    string str5(a, 20); // 字符串首地址,数量

    string str6(a + 6, a + 10); // begin, end

    string str7(&str5[6], &str5[10]);// begin, end

    string str8(str4, 7, 16);// 字符串, 位置, 数量
}
