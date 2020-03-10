# 函数的返回值

def fun_1(p):
    return p

p = fun_1(5)
print(p)
print(type(p))

# 多个返回值

def fun_2(name, age):
    return name, age

n, a = fun_2('A', 39)
print(n,a)

s = fun_2('A', 39)
print(s)
print(type(s))

# 返回一个函数
def fun_3(x):
    if x == 2:
        def inner_func(y):
            return y * y
    if x == 3:
        def inner_func(y):
            return y * y * y
    return inner_func

res = fun_3(3)
print(res(4))
