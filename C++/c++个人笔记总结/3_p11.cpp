#include <iostream>
using namespace std;
namespace ns1 {
	int foo (int a) {
		cout << "ns1::foo(int)" << endl;
		return a;
	}
};
namespace ns2 {
	double foo (double a) {
		cout << "ns2::foo(double)" << endl;
		return a;
	}
};
int main (void) {
	using namespace ns1;  // 名字空间指令
	using namespace ns2;  // 名字空间指令
	cout << foo (10) << endl;    //10 调用函数1，作用域可见ns2与ns1，所以与函数2构成重载
	cout << foo (1.23) << endl;  //1.23 调用函数2，作用域可见ns2与ns1，所以与函数1构成重载



	using ns1::foo;              //名字空间声明
//（当同时出现名字指令与名字空间声明，则名字空间声明会隐藏名字空间指令）
	cout << foo (10) << endl;    //10，调用函数1，只可见名字空间ns1的foo(),所以也并不构成重载。

   cout << foo (1.23) << endl;  //10，调用函数1，只可见名字空间ns1的foo(),所以也并不构成重载。

	using ns2::foo;              //名字空间声明
	cout << foo (10) << endl;    //10，调用函数1，可见名字空间ns1与名字空间ns2的foo(),所以构成重载。

  cout << foo (1.23) << endl;  //1.23，调用函数2，可见名字空间ns1与名字空间ns2的foo(),所以构成重载。
	return 0;
}
