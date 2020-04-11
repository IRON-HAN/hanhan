# 声明

# class human(object):
#     pass

# 类属性
# 和类绑定的属性
# 而非和实例绑定的属性

class human(object):
    living=True

# 实例属性
'''
我们首先实例化了一个人类human_a，然后给这个人类设置了一个实例属性name，name这个属性独立于其他的人类，是和实例绑定的，所以叫实例属性。

实例属性可以在实例创建后任意时间设置。
一般放在构造函数里__init()__
'''

class Human(object):
    def __init__(self, name):
        self.name = name
    def walk(self):
        print(self.name + " is walking")
human_a = Human("alan")
print(human_a.name)

# 类方法
human_a.walk()


