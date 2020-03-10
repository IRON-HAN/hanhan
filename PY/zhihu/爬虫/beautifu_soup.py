from bs4 import BeautifulSoup
import re
html_doc = "E:\\VS-Code-C\\CODES\\PY-codes\\zhihu\\爬虫\\bs4.html"
html_file = open(html_doc, "r")
html_handle = html_file.read()
soup = BeautifulSoup(html_handle, "html.parser")

# 1. 获取html文档头
print(soup.head)

# 2. 获取某一个节点
print(soup.p)

# 3. 获取节点中的属性
print(soup.p.attrs)

# 4. 获取class
names = soup.find_all("a", class_="sister")
print(names)
# 5. 正则
r=re.findall(">(.{3,7})</a>",str(names))
print(r)
