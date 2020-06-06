//用freopen实现重定向输入
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	freopen("E:\\VS-Code-C\\CODES\\test_in.txt", "rb", stdin); //输入重定向
	freopen("E:\\VS-Code-C\\CODES\\test_out.txt", "wb", stdout); //输出重定向


	fclose(stdin);//关闭重定向输入
	fclose(stdout);//关闭重定向输出
	return 0;
}

