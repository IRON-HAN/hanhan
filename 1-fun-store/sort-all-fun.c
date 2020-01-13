// 2020/1/10
// 2020/1/12
// 实现升序与降序的合一

// 交换
void swap(int *a,int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
//升序函数
int ascend(int a, int b){
    return a<b;//为真，则升序
}
//降序函数
int descend(int a, int b){
    return a>b;//为真，则降序
}
// 选择排序 O(n^2)
// 改进： 既可以升序 又可以降序
void selection_sort(int *a, int size, int (*compare)(int, int)){
    for (int i = 0; i < size-1 ; i++) {
        // tmpmin用于记录当前最小元素的下标
        int tmpMin = i;
        for ( int j = i+1; j< size ; j++) {
            if ((*compare)(a[j], a[tmpMin]))
                tmpMin = j;
        }
    // 将第i小的元素放在第i的位置上
    // 并将原来的数挪到后面
        swap(&a[i], &a[tmpMin]);
    }
}
// 插入排序 O(n^2)
void insertion_sort(int *a, int size){
    // a[i]是有序部分之外的右边第一个
    for (int i = 1 ; i < size ; i++) {
        for (int j = 0; j < i; j ++)
            if (a[j]>a[i]) {
                // 把a[i]放到位置j,原下标从j到i-1的元素依次往后移动一位
                int tmp = a[i];
                for (int k = i; k > j; k--)
                    a[k] = a[k - 1];
                a[j] = tmp;
                break;
            }
    }
}
// 冒泡排序 O(n^2)
void bubble_sort(int *a,int size){
    for (int i=size-1; i>0; i--) {
        for (int j =0 ; j<i ; j++)
            if ( a[j] >a[j+1] ) {
                swap(&a[j], &a[j + 1]);
        }
    }
}
