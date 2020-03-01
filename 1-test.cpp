#include <iostream>
using namespace std;
void MyFunc(int i, int j = 50) {
int a = 100;
int b = 200;
i = i + j + a + b;
cout << "MyFunc: i = " << i << endl;
cout << "MyFunc: j = " << j << endl;
cout << "MyFunc: a = " << a << endl;
cout << "MyFunc: b = " << b << endl;
return;
}
int main() {
int a = 10;
int b = 20;
int c = 30;
MyFunc(a, b);
MyFunc(c);
MyFunc(0);
cout << "main: a = " << a << endl;
cout << "main: b = " << b << endl;
cout << "main: c = " << c << endl;
return 0;
}
