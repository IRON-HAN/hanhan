// 采用getline成员函数从file.txt中读取所有内容显示到屏幕上

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    fstream read;          //创造一个文件流对象
    char input[80];        // 暂存
    read.open("file.txt"); //打开文件
    if (!read)
    { // 判断打开失败
        cout << "failed\n";
        return -1;
    }

    while (!read.eof())
    {
        read.getline(input, 80);
        cout << input << endl;
    }

    read.close();
    return 0;
}
