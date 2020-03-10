// 字符串操作库函数
// 静态变量strtok的实现
// 2020/1/10
#include <iostream>
#include <cstring>
char *stringtok(char *p, char *sep);
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
    char * p0 = stringtok(str, " ,.");
    while (p0!=NULL) {
        cout << p0 << endl;
        p0 = stringtok(NULL, " ,.");
    }


    return 0;

}
char *stringtok(char *p,const char *sep){
    // 本次查找子串的起点
    static char *start;
    if(p)
        start = p;
    // 跳过分隔符号
    for (; *start && strchr(sep, *start); start ++)
        ;
    if( * start == 0)
        return NULL;
    char *q = start;
    // 跳过非分隔符号
    for (; *start && !strchr(sep, *start); start ++)
        ;
    if (*start) {
        *start = 0;
        start++;
    }
    return q;
}
