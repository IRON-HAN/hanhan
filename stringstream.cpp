#include <iostream>
#include <strstream>
using namespace std;
class student
{
public:
    student() {}
    student(int no, string na, int s) : name(na), num(no), score(s) {}
    string name;
    int num;
    int score;
};
int main()
{
    student stud[3] = {student(1001, "Li", 78),
                       student(1002, "Wang", 89),
                       student(1004, "Fun", 90)};
    char c[50]; //用户定义的字符数组
    //建立输出字符串流，与数组c建立关联，缓冲区长30
    ostrstream strout(c, 30);
    for (int i = 0; i < 3; i++) //向字符数组c写3个学生的数据
        strout << stud[i].num << stud[i].name << stud[i].score;
    strout << ends;                  //ends是C++的I/O操作符，插入一个′\\0′
    cout << "array c:" << c << endl; //显示字符数组c中的字符
}
