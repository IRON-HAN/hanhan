
const int MaxSize=10;
class Array_int
{
private:
	int length;
	int data[MaxSize];
public:
	Array_int();//相当于初始化操作，一个空数组，长度为0
	Array_int(int a[],int n);//用给定的长度为n的数组a初始化数据成员
	void Display();//显示所有数组元素
	void Insert(int x);//将给定的元素x插入到数组中后，仍保持数组的有序性；
    //需要判断插入新元素会不会发生存储空间的溢出情况，若发生溢出提示插入操作失败；
    //插入过程中，插入位置确定后，从插入位置至最后一个元素全部往后移一位，给新插入元素空出插入位置。
	void Delete(int x);//从数组中删除指定元素x，后面的元素全部要往前移一位；做删除前需要判断数组是否为空，若为空表，则删除操作失败
	int Search(int x);//从数组中查找指定元素x，若查找成功返回元素在数组中位置，查找失败返回特定值-1
};
#include <cstring>
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

Array_int::Array_int(){
    length=0;
    memset(data, 0, sizeof(data));
}

Array_int::Array_int(int a[],int n){
    length = n;
    for (int i = 0; i < n; ++i) {
        data[i] = a[i];
    }
    return;
}

void Array_int::Display(){
    sort(data, data + length);
    for (int i = 0 ; i< length; ++i) {
        cout << data[i] << '\t';
    }
    cout << endl;
    return;
}

void Array_int::Insert(int x){
    if (length==MaxSize)
        cout << "the array is full.\n";
    else{
        data[length++] = x;
        cout << "done!\n";
    }
}

int Array_int::Search(int x){
    // 查找区间的左右端点
    int Left = 0;
    int Right = this->length - 1;
    // 直到区间为空集时停止查找
    while (Left<=Right) {
        int mid = Left + (Right - Left) / 2;
        if(x==data[mid])
            return mid;
        else if( x > data[mid])
            Left = mid + 1;
        else
            Right = mid - 1;
    }
    return -1;
}

void Array_int::Delete(int x){
    int pos = this->Search(x);
    if (length==0 || pos == -1) {
        cout << "failed.\n";
    }
    else{
        for (int i = pos; i < length; ++i) {
            data[i] = data[i + 1];
        }
        length--;
        cout << "done!\n";
    }
}
void Show()
{
	system("cls");
	printf("* 1. Display    *\n");
	printf("* 2. Insert     *\n");
	printf("* 3. Delete     *\n");
	printf("* 4. Search     *\n");
	printf("* 5. Exit       *\n");
}
int main(){

    int size, a[MaxSize];
    printf("Input num: ");
    cin >> size;
    if (size && size < MaxSize)
        printf("Input data: ");
    else
        printf("the size is too big.\n");
    for (int i = 0; i < size; ++i)
        cin >> a[i];
    Array_int Array(a, size);
    system("pause");
	while(1)
	{
		Show();
		int oper, num;
		printf("Input OperID: ");
        cin >> oper;
		if(oper == 1){
            Array.Display();
            system("pause");
        }
		if(oper == 2)
		{
			printf("Input data: ");
            cin >> num;
			Array.Insert(num);
			system("pause");
		}
		if(oper == 3)
		{
			printf("Input data: ");
            cin >> num;
			Array.Delete(num);
			system("pause");
		}
		if(oper == 4)
		{
			printf("Input data: ");
            cin >> num;
			cout << Array.Search(num) << endl;
			system("pause");
		}
		if(oper == 5) break;
	}
    return 0;
}
