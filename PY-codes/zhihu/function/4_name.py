# __name__
# 在本模块启动时
# __name__ 等于 __main__

# 作用
# 1. 作为函数入口
# 2. debug
def my_print():
    print(__name__)

if __name__ == '__main__':
    my_print()
    print(1)
    print(__name__)
