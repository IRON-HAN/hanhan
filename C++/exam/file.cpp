// 采用getline成员函数从file.txt中读取所有内容显示到屏幕上

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    fstream read;
    char input[80];
    read.open("file.txt", ios::in);
    if (!read)
    {
        cout << "failed\n"
             << endl;
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
