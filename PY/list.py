'''
列表
有序
可更改（添加，删除）
'''

# 声明
game = ["dota", "dota2", "lol"]
print(game)

# 获取列表长度
print(len(game))

# 访问每个元素
# 输出结果不带引号
print(game[0])
print(game[2])

# 更改某个元素：直接赋值
game[0] = 'dota3'
print(game)

# 末尾增加元素
game.append('wow')
print(game)

# 指定位置插入元素
game.insert(2, 'war3')
print(game)

# 删除末尾的元素
game.pop()
print(game)

# 删除指定位置的元素
game.pop(1)
print(game)
