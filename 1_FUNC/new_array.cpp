// 动态内存分配函数
// 但要固定列数
// 返回数组指针的函数
int (*create(int row))[3]
{
	int(*p)[3] = new int[row][3];
	return p;
}
