#include <iostream>
#include <cstdio>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <deque>
#include <vector>
#include <queue>
#include <string>
#include <cstring>
#include <map>
#include <stack>
#include <set>
#include <sstream>
#include <list>
#include <functional>
#include <cstdlib>
using namespace std;
// chcp 65001



void Swap(int &n1, int &n2) {
int tmp;
tmp = n1;
n1 = n2;
n2 = tmp;
}
int gcd(int m, int n) {

   // ensure that m is greater than or equal to n
	if (m < n) {
		Swap(m, n);
	}

	if (n == 0) {
		cerr << "bad gcd request" << endl;
		exit(1);
	}

	// loop until r is 0

	int r = m % n;

	while (r) {
		m = n;
		n = r;
		r = m % n;
	}

	return n;
}

int main() {
	int n = gcd(5, -10);
	cout << n << endl;
	return 0;
}
