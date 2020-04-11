#include <iostream>
using namespace std;
int main (void) {
  //	int* pi = (int*)malloc (sizeof (int));
  //	free (pi);         //c中的方法
	int* pi = new int;
	*pi = 1000;
	cout << *pi << endl;
	delete pi;               //一定要释放内存，否则会造成内存泄露，很严重
	pi = NULL;               //不要忘记这个，虽然不会报错，但是要有好习惯
	/*
	*pi = 2000;
	cout << *pi << endl;     //pi指向的内存地址已经被释放，被初始化为指向NULL
	*/
    pi = new int[10];
	for (size_t i = 0; i < 10; ++i)
		pi[i] = i;
	for (size_t i = 0; i < 10; ++i)
		cout << pi[i] << ' ';
	cout << endl;
	delete pi;            //千万记住new[]要用delete[]来释放内存
	pi = NULL;
    pi = new int (1234);     //用new分配内存的同时初始化赋一个值。
	cout << *pi << endl;    //1234
	delete pi;
	pi = NULL;
    char buf[4] = {0x12,0x34,0x56,0x78};
	pi = new (buf) int;
	cout << hex << *pi << endl;
//	delete pi;
    cout << (void*)pi << ' ' << (void*)buf << endl;
	int (*p)[4] = new int[3][4];
	delete[] p;
	int (*q)[4][5] = new int[3][4][5];
	delete[] q;
	return 0;
}
