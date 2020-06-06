int Max_Sub_Sum1(int A[], int N)
{ // O(N^2)
    int This_Sum, Max_Sum = 0;
    for (int i = 0; i < N; ++i)
    {                 // i是子列左端
        This_Sum = 0; // This_Sum是A[i]--A[j]子列和
        for (int j = i; j < N; ++j)
        { // j是子列右端
            This_Sum += A[j];
            // 对于相同的i, 不同的j, 只要在j-1次循环的基础上累加1项即可
        }
        if (This_Sum > Max_Sum)
        {
            Max_Sum = This_Sum;
        }
    }
    return Max_Sum;
}
int Max_Sub_Sum2(int A[], int N)
{ // O(N)
    int This_Sum = 0, Max_Sum = 0;
    for (int i = 0; i < N; ++i)
    {
        This_Sum += A[i]; // 向右累加
        if (This_Sum > Max_Sum)
        {
            Max_Sum = This_Sum;
            // 发现更大的和则更新当前结果
        }
        else if (This_Sum < 0)
        { // 如果当前子列的和为负数,则肯定比前面部分的子列小
            This_Sum = 0;
        }
    }
    return Max_Sum;
}
