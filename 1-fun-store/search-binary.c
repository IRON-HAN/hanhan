// 复杂度 O（log（n））
// 要求：从小到大输入
// 找到返回位置 & 找不到返回-1
int binary_search(int *a, int size,int p){
    // 查找区间的左右端点
    int Left = 0;
    int Right = size - 1;

    // 直到区间为空集时停止查找
    while (Left<=Right) {
        int mid = Left + (Right - Left) / 2;
        if(p==a[mid])
            return mid;
        else if( p > a[mid])
            Left = mid + 1;
        else
            Right = mid - 1;

    }
    return -1;
}
// 复杂度 O（log（n））
// 写一个函数LowerBound，在包含size个元素的、从小到大排序的int数组a里查找比给定整数p小的，下标最大的元素。
// 找到则返回其下标，找不到则返回-1
int LowerBound(int *a,int size,int p){
    int Left = 0;
    int Right = 0;
    int lastpos = -1;

    while (Left<=Right) {
        int mid = Left + (Right - Left) / 2;
        if(a[mid]>=p)
            Right = mid - 1;
        else {
            lastpos = mid;
            Left = mid + 1;
        }
    }
    return lastpos;
}
