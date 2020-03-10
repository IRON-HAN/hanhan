// 2020/1/11
// 用法：
// multimap容器里的元素，都是pair形式的
// multimap<T1,T2> mp;
// struct {
//     T1 first; 关键字
//     T2 second; 值
// };
// multimap中的元素按照first排序，并可以按first进行查找
// 排序规则是 "a.first < b.first" 为true,则a排在b前面

// 一个学生成绩录入和查询系统，接受以下两种输入:
// Add name id score
// Query score
// name是个不超过16字符的字符串，中间没有空格，代表学生姓名。
// id 是个整数，代表学号。
// score是个整数，表示分数。
// 学号不会重复，分数 和姓名都可能重复。
// 两种输入交替出现。
// 第一种输入表示要添加一个学生的信息，碰到这 种输入，就记下学生的姓名、id和分数。
// 第二种输入表示要查询，碰到这 种输入，就输出已有记录中分数比score低的最高分获得者的姓名、学号 和分数。
// 如果有多个学生都满足条件，就输出学号最大的那个学生的信 息。
// 如果找不到满足条件的学生，则输出“Nobody”

#include <iostream>
#include <cstring>
#include <map>
using namespace std;

struct stu_info{
    int id;
    char name[20];
};
typedef struct stu{
    int score;
    stu_info info;
}stu;
typedef multimap<int ,stu_info> map_stu;

int main(){

    map_stu mp;
    stu st;
    char cmd[20];

    cout << "please input stu's name, id & score:" << endl;

    while (cin>>cmd) {
        if (cmd[0]=='A'||cmd[0]=='a') {
            cin >> st.info.name >> st.info.id >> st.score;
            // make_pair 生成一个 pair<int, stu_info> 变量;
            // 这个结构体 first = st.score second = st.info;
            mp.insert(make_pair(st.score, st.info));
            cout << "done!" << endl;
        }
        else if (cmd[0]=='Q'||cmd[0]=='q') {
            int score;
            cin >> score;
            map_stu::iterator p = mp.lower_bound(score);
            // 如果存在比要查找的分数还要低的分数;
            if (p!= mp.begin()) {
                --p;
                // 比查找分数的低的最高分赋值
                score = p->first;

                map_stu::iterator max_p = p;
                int max_id = p->second.id;
                // 遍历所有成绩和score相等的学生
                for (; p!=mp.begin() && p->first ==score; p--) {
                    if (p->second.id>max_id) {
                        max_p = p;
                        max_id = p->second.id;
                    }
                }
                if( p->first==score){
                    if (p->second.id>max_id) {
                        max_p = p;
                        max_id = p->second.id;
                    }
                }
                cout << "the result is :" << endl;
                cout << max_p->second.name << " "
                    << max_p->second.id << " "
                    << max_p->first << endl;
            }
            else
                cout << "nobody" << endl;
        }
    }
    return 0;
}
