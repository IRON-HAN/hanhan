// date: 2020-1-28

// main:
    // typename *pointer = new typename[num_elem];
    // ! : 先使指针指向首地址再delete
    // delete[] pointer;

// 动态数组:
    // int num_elem;
    // cin >> num_elem;
    // int *array = new int[num_elem];
# include <iostream>
int main()
{
    using namespace std;
    double*p3=new double [3];//space for 3 doubles
    p3[0]=0.2;//treat p3 like an array name
    p3[1]=0.5;
    p3[2]=0.8;
    cout <<"p3[1] is "<< p3[1]<< ".\n";
    p3=p3+1;//increment the pointer
    cout <<"Now p3[0] is "<< p3[0]<< " and ";
    cout << "p3[1] is "<< p3[1]<<".\n";
    p3=p3-1;//point back to beginning
    delete []p3;//free the memory

    return 0;
}

// output:
    // p3[1] is 0.5.
    // Now p3[0] is 0.5and p3[1] is 0.8.
