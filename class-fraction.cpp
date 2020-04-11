#include <iostream>
#include <cstdio>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <deque>
#include <istream>
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

//最大公约数
int ComDiv(int num1, int num2)
{
	return num2 ? ComDiv(num2, num1%num2) : num1;
}
//最小公倍数
int ComMul(int num1, int num2)
{
	return num1 / ComDiv(num1, num2)*num2;
}
class Fraction
{
private:
	int numer;
	int deno;
public:
//(默认)构造函数
Fraction(int n=0,int d=1):numer(n),deno(d){}
//get函数
int getNumer(){return numer;}
int getDeno(){return deno;}
//set函数
void setNumer(int n) { numer = n; }
void setDeno(int d) { deno = d; }
//display函数
void display(){printf("%d/%d\n", numer, deno);}
// 约分
Fraction RdcFrc()
{
	if(deno==0){
		cout << "Data error!\n";
		return *this;
	}
	int comdiv = ComDiv(numer, deno);
	numer /= comdiv;
	deno /= comdiv;
	return *this;
}
// 求倒数
Fraction Inverse()
{
	if(deno==0){
		cout << "Data error!\n";
		return *this;
	}
	if(numer==0)
	{
		cout << "The new deno will be zero!\n";
		return *this;
	}
	int temp;
	temp = this->numer;
	this->numer = this->deno;
	this->deno = temp;
	return *this;

}
//相加
friend Fraction operator+(const Fraction & frac1, const Fraction & frac2)
{
	int comMul = ComMul(frac1.deno, frac2.deno);
	int numer = comMul / frac1.deno * frac1.numer + comMul / frac2.deno * frac2.numer;
	int deno = comMul;
	Fraction temp(numer, deno);
	temp = temp.RdcFrc();
	return (temp);
}

//相减
friend Fraction operator-(const Fraction & frac1, const Fraction & frac2)
{
	int comMul = ComMul(frac1.deno, frac2.deno);
	int numer = comMul / frac1.deno * frac1.numer - comMul / frac2.deno * frac2.numer;
	int deno = comMul;
	Fraction temp(numer, deno);
	temp = temp.RdcFrc();
	return (temp);
}

//相乘
friend Fraction operator*(const Fraction & frac1, const Fraction & frac2)
{
	Fraction temp (frac1.numer * frac2.numer, frac1.deno * frac2.deno );
	temp = temp.RdcFrc();
	return (temp);
}

//相除
friend Fraction operator/(const Fraction & frac1, const Fraction & frac2)
{
	Fraction temp (frac1.numer * frac2.deno, frac1.deno * frac2.numer );
	temp = temp.RdcFrc();
	return (temp);
}
//==
friend bool operator==(Fraction & frac1, Fraction & frac2)
{
	frac1 = frac1.RdcFrc();
	frac2 = frac2.RdcFrc();
	if (frac1.numer==frac2.numer && frac1.deno==frac2.deno)
	return true;
	else
	return false;
}
//!=
friend bool operator!=(Fraction & frac1, Fraction & frac2)
{
	frac1 = frac1.RdcFrc();
	frac2 = frac2.RdcFrc();
	if(frac1==frac2)
	return false;
	else
	return true;
}
// >
friend bool operator>(Fraction &frac1, Fraction &frac2)
{
	Fraction temp = frac1 - frac2;
	if(temp.numer>0)
	return true;
	else
	return false;
}
// <
friend bool operator<(Fraction &frac1, Fraction &frac2){
	Fraction temp = frac1 - frac2;
	if(temp.numer<0)
	return true;
	else
	return false;
}
// >=
friend bool operator>=(Fraction &frac1, Fraction &frac2){
	if(frac1<frac2)
	return false;
	else
	return true;
}
// <=
friend bool operator<=(Fraction &frac1, Fraction &frac2)
{
	if(frac1>frac2)
	return false;
	else
	return true;
}
// >>
friend istream& operator>>(istream& sin,Fraction & frac)
{
	sin >> frac.numer >> frac.deno;
	if (frac.deno==0) {
		printf("The deno can't be zero!\n");
		exit(0);
	}
	else
	return sin;

}
// <<
friend ostream& operator<<(ostream& sout,Fraction & frac)
{
	frac.RdcFrc();
	sout << frac.numer << "/" << frac.deno << endl;
	return sout;
}
};
int main(){

	// freopen("E:\\VS-Code-C\\CODES\\test_in.txt", "r", stdin); //输入重定向
	// freopen("E:\\VS-Code-C\\CODES\\test_out.txt", "w", stdout); //输出重定向
	Fraction num1,num2,num3;
	cin >> num1 >> num2;
	cout << num1 << num2;
	num1.Inverse();
	cout << num1;
	num3 = num1 + num2;
	cout << num3;
	num3 = num1 - num2;
	cout << num3;
	num3 = num1 * num2;
	cout << num3;
	num3 = num1 / num2;
	cout << num3;
	cout << "(num1 == num2)"<<(num1 == num2) << endl;
	cout << "(num1 != num2)"<<(num1 != num2) << endl;
	cout << "(num1 > num2)"<<(num1 > num2) << endl;
	cout << "(num1 < num2)"<<(num1 < num2) << endl;
	cout << "(num1 >= num2)"<<(num1 >= num2) << endl;
	cout << "(num1 <= num2)"<<(num1 <= num2) << endl;
	// fclose(stdin);//关闭重定向输入
	// fclose(stdout);//关闭重定向输出
	return 0;
}
