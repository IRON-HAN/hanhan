// 调用qsort函数
// 时间复杂度和STL 中的sort相同
// 个位从小到大排列
// 2020/1/10
#include <cstdio>
#include <cstdlib>
using namespace std;
// 规则: 按个位数升序排列
int MyCompare( const void * elem1, const void * elem2 ) {
    unsigned int * p1, * p2;
    p1 = (unsigned int *) elem1; // “* elem1” 非法
    p2 = (unsigned int *) elem2; // “* elem2” 非法
    return (* p1 % 10) - (* p2 % 10 );
}

#define NUM 5

int main() {

    unsigned int an[NUM] = { 8,123,11,10,4 };
    // 参数列表: 数组首地址, 元素个数, 每个元素的大小, 规则
    qsort( an,NUM,sizeof(unsigned int),MyCompare);
    for( int i = 0;i < NUM; i ++ )
        printf("%d ",an[i]);
    system("pause");
    return 0;
}
