// 2020/1/11
// 和multimap的区别：
// 1 不能有关键字重复的元素（即排序时不区分先后的元素）
// 2 可以使用【】，下标为关键字
// 返回值为first和 关键字相同的元素的second
// 3 插入元素可能失败


#include <cstdlib>
#include <iostream>
#include <map>
#include <string>
using namespace std;

typedef struct {
    string name;
    int score;
} student;

student stu[5] = {
    {"jack", 89}, {"tom", 74}, {"cindy", 87}, {"aly", 87}, {"micheal", 98}};

typedef map<string,int> Mp;
int main(){

    Mp mp;
    for (int i = 0; i < 5;i++)
        mp.insert(make_pair(stu[i].name, stu[i].score));
    cout << mp["jack"] << endl;//输出89
    mp["jack"] = 60;//修改 jack元素的second值

    for (Mp::iterator i = mp.begin(); i != mp.end();i++)
        cout << "(" << i->first << "," << i->second << ")";
    cout << endl;

    student stu_0;
    stu_0.name = "jack";
    stu_0.score = 99;

    pair<Mp::iterator, bool> p =
        mp.insert(make_pair(stu_0.name, stu_0.score));
    if(p.second)
        cout << "(" << p.first->first << "," << p.first->second << ")inserted" << endl;
    else
        cout << "failed" << endl;

    // 如果原来并不存在某个元素，则以下的赋值语句为插入元素
    mp["harry"] = 78;
    Mp::iterator q = mp.find("harry");
    cout << "(" << q->first << "," << q->second << ")";
    cout << endl;

    system("pause");

    return 0;
}

