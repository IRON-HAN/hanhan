#include <fstream>
#include <iostream>
using namespace std;
bool is_alpha(char c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return true;
    return false;
}
// save_to_file函数从键盘读入一行字符，并将其存入磁盘文件
void save_to_file()
{
    //定义输出文件流对象outfile，以输出方式打开磁盘文件f2.dat
    ofstream outfile("f2.dat");
    if (!outfile) //如果打开失败输出错误信息
    {
        cerr << "open f2.dat error!" << endl;
        exit(1);
    }
    char c[80];
    cin.getline(c, 80);        //从键盘读入一行字符
    for (int i = 0; c[i]; i++) //对字符逐个处理，直到遇′/0′为止
    {
        if (is_alpha(c[i])) //是否是字母
        {
            outfile << c[i]; //将字母字符存入磁盘文件f2.dat
            cout << c[i];    //同时送显示器显示
        }
    }
    cout << endl;
    outfile.close(); //关闭f2.dat
}

//从磁盘文件f2.dat读入字母字符，将其中的小写字母改为大写字母，再存入f3.dat
void get_from_file()
{
    char ch;
    //定义输入文件流outfile，以输入方式打开磁盘文件f2.dat
    ifstream infile("f2.dat");
    if (!infile)
    {
        cerr << "open f2.dat error!" << endl;
        exit(1);
    }

    ofstream outfile("f3.dat");
    //定义输出文件流outfile，以输出方式打开磁盘文件f3.dat
    if (!outfile)
    {
        cerr << "open f3.dat error!" << endl;
        exit(1);
    }
    while (infile >> ch) //当读取字符成功时执行下面的复合语句
    {
        outfile << ch; //将该大写字母存入磁盘文件f3.dat
        cout << ch;    //同时在显示器输出
    }
    cout << endl;
    infile.close();  //关闭磁盘文件f2.dat
    outfile.close(); //关闭磁盘文件f3.dat
}
int main()
{
    save_to_file();
    get_from_file();
    return 0;
}
