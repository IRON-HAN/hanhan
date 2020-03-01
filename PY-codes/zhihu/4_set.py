'''
无序
可更改
相当于没有'value'的字典
用途：去重，求交，求并
函数名与其他的数据结构不同
'''

# 声明
girls_1 = set(['lucy', 'lily'])
girls_2 = set(['lily', 'anna'])

# 求交 & 求并
print(girls_1 & girls_2)
print(girls_1 | girls_2)

# 增加元素
girls_1.add('marry')
print(girls_1)

# 删除元素
girls_1.remove('lucy')
print(girls_1)
