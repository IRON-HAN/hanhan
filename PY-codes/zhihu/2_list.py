# 列表(List): 一组数据
# 有序序列
# 序列的每个元素都有对应下标
# 可以包含不同的数据类型

list1 = ['A', 13, 'B', 15]
print(list1)

# 1. 访问列表成员(同字符串)

# 2. 列表的添加
# 方法1-->关键字:append 函数
list1.append('C')
print(list1)

# 方法2-->列表自增运算
list1 += ['D', 25]
print(list1)

# 3. 列表的删除
# 方法-->关键字: delete 函数

# 4. 列表的嵌套
# 4.1 访问时相当于二维数组
list2 = [['A', 'B'], [12, 14]]
print(list2)

# 5. 求列表元素的个数
# 关键字: len
# 方法: len(List_Name)
# 返回值: 整数
cnt = len(list2)
print(cnt)  #如果是嵌套的列表的话 会打印子列表的个数



