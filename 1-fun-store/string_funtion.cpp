// 字符串操作库函数
// 2020/1/10
#include <iostream>
#include <cstring>

using namespace std;
int main() {
    char s1[100] = "12345";
    char s2[100] = "abcdefg";
    char s3[100] = "ABCDE";
    // s2的前3个字符接到s1的后面
    strncat(s1,s2,3);
    cout << "1)" << s1 << endl;
    // s3的前3个字符拷贝到s1，（替换）
    strncpy(s1, s3, 3);
    cout << "2)" << s1 << endl;

    // s1中查找'B'第一次出现的位置
    char *p = strchr(s1, 'B');
    if(p)
        cout << p - s1 + 1 << "," << *p << endl;
    else
        cout << "not found!" << endl;

    // 下面演示strtok的用法：（分隔单词并逐个取出）
    // 其中，分隔符有" " ",."
    char str[] = "this, a sample string,ok.";
    p = strtok(str, " ,.");
    while (p!=NULL) {
        cout << p << endl;
        p = strtok(NULL, " ,.");
    }
    return 0;
}
