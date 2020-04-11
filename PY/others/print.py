list_a = ["str", 1, ["a", "b", "c"], 4]
list_b = ["hello"]

print (list_a[0])
print (list_a[1:3])
print (list_a[1:])
print (list_b * 2)
print(list_a + list_b)
# 逆序访问
print(list_a[-1])  # <-> print (list_a[3])
print(list_a[-2])

tuple_a = ("str", 1, ["a", "b", "c"], 4)
tuple_b = ("hello",)

print (tuple_a[0])
print (tuple_a[1:3])
print (tuple_a[1:])
print (tuple_b * 2)
print (tuple_a + tuple_b)

#元组与列表的区别：
#元组：不可变
#列表：可变

dict_a = {
    "name": "Alan",
    "age": 24,
    1: "level_1"
}
# 打印各项属性的值
print (dict_a["name"])
print (dict_a["age"])
print(dict_a[1])
# 找到打印: true
# 找不到打印：false
print ("name" in dict_a)
print("xxx" in dict_a)
# 打印：所有属性名
print(dict_a.keys())
# 打印：所有属性值
print(dict_a.values())
# 打印：成对的属性和它的值
print (dict_a.items())

