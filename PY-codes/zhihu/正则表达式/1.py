# 正则表达式:
# 记录文本规则的代码
# 特殊的字符序列
# 普通字符和元字符组成

import re

reg_string = "hello45h9fhello89fhe98"
reg = "hello"
# 1. 关键字: findall函数
# 方法 re.findall(子串,母串)
# 返回值: 一个包含子串的列表
result = re.findall(reg, reg_string)
print(result)


# 2. 元字符

# . 匹配 除了<换行符>以外的<任意字符>
# \w 匹配<字母><数字><下划线><汉字> 除了<特殊符号>
# \s 匹配任意<空白符>
# \d 匹配<数字>
# \b 匹配单词的开始或结束
# ^ 匹配位置在<字符串的开始>的子串
# $ 匹配位置在<字符串的结尾>的子串
reg1 = "\d"
s1 = re.findall(reg1, reg_string)
print(s1)

reg2 = "^hello"
s2 = re.findall(reg2, reg_string)
print(s2)

# 3. 反义代码
# 把元字符的匹配规则 改成大写
# 变成补集
# # 补充
# [^abcd] 匹配除了abcd以外的任意字符

# 4. 限定符
# * 重复0次/多次
# + 重复1次/多次
# ? 重复0次/1次
# {n} 重复n次
# {n,} 重复n次/多次
# {n, m} 重复n-m次

reg3 = "\d{2}" #表示 匹配连续两个都是数字的情况
s3 = re.findall(reg3, reg_string)
print(s3)

reg4 = "[0-9a-z]{4}"
s4 = re.findall(reg4, reg_string)
print(s4)

# 5. 匹配ip

# 方法1: findall函数
ip="this is ip:192.168.1.101 : 172.138.2.15 "
reg5 = "\d{3}.\d+.\d+.\d+"
s5 = re.findall(reg5, ip)
print(s5)

# 方法2: search
reg6 = "(\d{1,3}.){3}\d{1,3}"
s6 = re.search(reg6, ip)[0]
print(s6)

# 区别:
# search 只匹配第一个
# findall 匹配所有

# 6. 组匹配

str1="this is phone:12345678910 and this is postcode:012345"
reg7 = "this is phone:(\d{11}) and this is postcode:(\d{6})"
s7 = re.search(reg7, str1)
print(s7)

s7 = re.search(reg7, str1).group(0) #匹配整个字符串
print(s7)

s7 = re.search(reg7, str1).group(1) # 匹配第一组
print(s7)

s7 = re.search(reg7, str1).group(2) # 匹配第二组
print(s7)

# 7. 关键字: match 函数
# 匹配成功,输出第一个
# 匹配失败,报错
str2 = 'hello1234'
reg8 = 'Hello'
# s8 = re.match(reg8, str2).group()
s8=re.match(reg8,str2,re.I).group() # 不区分大小写
print(s8)

# 8. 贪婪/非贪婪

# 贪婪: 尽可能多的匹配 --默认
# 非贪婪: 尽可能少的匹配
# 非贪婪操作符: ?
# 这个操作符是用在 '*','+',"?"后面的

str3 = "pythonnnnnnpython"

# 贪婪
reg9 = 'python*'
s9 = re.findall(reg9, str3)
print(s9)

# 非贪婪
reg10 = 'python*?'
s10 = re.findall(reg10, str3)
print(s10)

reg11 = 'python+?'
s11 = re.findall(reg11, str3)
print(s11)

reg12 = 'python??'
s12 = re.findall(reg12, str3)
print(s12)

# 手机号码验证

def check_phonenumber(number):
    regex = "^((13[0-9])|(14[5|7])|(15([0-3]|[5-9]))|(18[0,5-9]))\d{8}$"
    res = re.findall(regex, number)
    if res:
        print("valid")
        return True
    else:
        print("invalid")
        return False

number = "17486380550"
print(check_phonenumber(number))


