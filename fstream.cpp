#include <fstream>
#include <iostream>
using namespace std;
class Student
{
public:
    Student() {}
    Student(int no, string na, int s) : name(na), num(no), score(s) {}
    string name;
    int num;
    int score;
};
int main()
{
    Student stud[5] = {Student(1001, "Li", 85),
                       Student(1002, "Fun", 97),
                       Student(1004, "Wang", 54),
                       Student(1006, "Tan", 76),
                       Student(1010, "ling", 96)};
    //用fstream类定义输入输出二进制文件流对象iofile
    fstream iofile("stud.dat", ios::in | ios::out | ios::binary);
    if (!iofile)
    {
        cerr << "open error !" << endl;
        abort();
    }
    for (int i = 0; i < 5; i++) //向磁盘文件输出5个学生的数据
        iofile.write((char *)&stud[i], sizeof(stud[i]));
    Student stud1[5]; //用来存放从磁盘文件读入的数据
    for (int j = 0; j < 5; j = j + 2)
    {
        //定位于第0,2,4学生数据开头
        iofile.seekg(j * sizeof(stud[j]), ios::beg);
        //先后读入3个学生的数据，存放在stud1[0],stud[1]和stud[2]中
        iofile.read((char *)&stud1[j / 2], sizeof(stud1[0]));
        //输出stud1[0],stud[1]和stud[2]各成员的值
        cout << stud1[j / 2].num << " "
             << stud1[j / 2].name << " "
             << stud1[j / 2].score << endl;
    }
    cout << endl;
    stud[2].num = 1012; //修改第3个学生(序号为2)的数据
    stud[2].name = "Wu";
    ;
    stud[2].score = 60;
    //定位于第3个学生数据的开头
    iofile.seekp(2 * sizeof(stud[0]), ios::beg);
    iofile.write((char *)&stud[2], sizeof(stud[2])); //更新第3个学生数据
    iofile.seekg(0, ios::beg);                       //重新定位于文件开头

    for (int i = 0; i < 5; i++)
    {
        iofile.read((char *)&stud[i], sizeof(stud[i])); //读入5个学生的数据
        cout << stud[i].num << " "
             << stud[i].name << " "
             << stud[i].score << endl;
    }
    iofile.close();
    return 0;
}
