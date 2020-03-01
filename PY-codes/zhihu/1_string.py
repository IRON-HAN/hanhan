# 声明一个字符串

# 单引号=双引号引用
s = 'hello python'
print(s)

# 三引号声明 会打印换行符
s = """hello
python"""
print(s)

# 字符串的操作:

# 1. 单个访问字符串的字符: String[Index]
print(s[0])

# 2. 访问字符串中的子串(切片操作):
# 方法: String[Left:Right]
# 注意: 实际范围[Left,Right)
print(s[0:5])

# 3. 字符串的拼接操作
# 方法: Str1+Str2
# 说明: 既可以是变量,也可以是具体的字符串
print('我是'+s)

# 4. 字符串的部分替换操作(更新)
# 方法: 先切片+后拼接
s1 = 'hello string'
s2 = 'python'
print(s1[:6]+s2)

# 5. 字符串的成员运算
s1 = 'hello string'
s2 = 'h'

# 5.1 查找运算(包含运算)
# 关键字: in
# 表达式的返回值: True/False
print(s2 in s1)

# 6. 字符串格式化输出
print('我叫%s,今天是我第%d天学习!'%('小明',10))

# 7. 关于字符串的库函数

# 7.1 查找字符串
# 关键字: find
# 方法: String.find(str)
# 返回值: 该字符的下标
s = "hello world".find('e')
print(s)

# 7.2 转换为小写/大写
# 关键字 lower/upper
# 方法: String.lower()/upper()
print("Hello Python".lower())

# 7.3 求字符串的长度{本身的长度}
# 关键字: __len__
# 方法: String.__len__()
print("Hello Python".__len__())

# 7.4 字符串的替换
# 关键字: replace
# 方法: String.replace(被替换,替换者)
print("Hello Python".replace('o','ee'))
