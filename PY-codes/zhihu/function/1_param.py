# 函数的参数

# 1. 必须参数
# 一一传参
def fun_1(p1, p2):
    print(p1,p2)

# 2. 关键字参数
# 调用的时候指定参数名称, 可以不按照顺序传递参数

def fun_2(name, age):
    print(name + '来了,他今年: ' + str(age))

fun_2(name='A', age=50)
fun_2(age=50, name='A')
fun_2('B', 30)

# 3. 默认参数
# 如果调用时没有传值, 则使用默认值
# 可以不指定名字
def fun_3(name='C', age=40):
    print(name + '来了,他今年: ' + str(age))

fun_3()

# 4. 参数混合使用
def fun_4(name,age=50)
