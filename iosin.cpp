#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// chcp 65001
void print() {}
template <class T, class... Types>
void print(const T &firstArg, const Types &... args)
{
	cout << firstArg;
	print(args...);
}
int main()
{
	vector<int> v;
	ifstream Src("in.txt", ios::in);
	ofstream Dst("out.txt", ios::out);
	int ix;
	while (Src >> ix)
	{
		v.push_back(ix);
	}
	sort(v.begin(), v.end());

	for (auto elem : v)
	{
		Dst << elem << ' ';
	}
	Dst.close();
	Src.close();

	return 0;
}
