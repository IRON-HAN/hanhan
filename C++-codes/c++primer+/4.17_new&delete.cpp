// date: 2020-1-28

// notes:
// 总之，使用new和delete时，应遵守以下规则。
// 不要使用delete来释放不是new分配的内存。
// 不要使用delete释放同一个内存块两次。
// 如果使用new[]为数组分配内存，则应使用delete[]来释放。
// 如果使用new[]为一个实体分配内存，则应使用delete（没有方括号）来释放。
// 对空指针应用delete是安全的。

// main:
// typename *pointer = new typename;
// delete pointer;
#include <iostream>
int main(){
    using namespace std;
    int nights = 1001;
    int *pt = new int; //allocate space for an int
    *pt = 1001;     //store a value there

    cout << "nights value=";
    cout << nights <<": location "<< & nights << endl;
    cout <<"int ";
    cout << "value="<< * pt <<": location="<< pt<< endl;

    double *pd = new double; //allocate space for a double
    *pd = 10000001.0;        //store a double there
    cout <<"double ";
    cout << "value="<< * pd <<": location="<< pd<< endl;
    cout << "location of pointer pd:"<< & pd << endl;

    cout << "size of pt="<< sizeof(pt);
    cout << ": size of * pt="<< sizeof(* pt)<< endl;
    cout << "size of pd="<< sizeof pd;
    cout <<": size of * pd="<< sizeof(* pd)<< endl;
    // free memory with delete when done
    delete pt;
    delete pd;
    delete pd;// ERROR!
    // 释放了(pt)和(pd)所指向的内存
    // 并没有删除指针
    // 可以重新指向一块内存

    int n = 5;
    int *ptr = &n;
    delete ptr;// NOT ALLOWED!


    return 0;
}

// output:
// nights value=1001: location 0x61fdfc
// int value=1001: location=0x1f1770
// double value=1e+07: location=0x1f1790
// location of pointer pd:0x61fe00
// size of pt=8: size of * pt=4
// size of pd=8: size of * pd=8


