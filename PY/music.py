import requests
import re
import os
import time
# 第一步 获取歌曲id

def saveMusic(name,url,path):
    folder = os.path.exists(path)
    if not folder:  # 判断是否存在文件夹如果不存在则创建为文件夹
        os.makedirs(path)  # makedirs 创建文件时如果路径不存在会创建这个路径
        print
        "--- make new folder...  ---"
    header = {'user-agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.108 Safari/537.36'}
    response=requests.get(url,headers=header)
    filename=path+'/'+name+'.mp3'
    with open(filename,'wb') as f:
        f.write(response.content)

def getPlayerMusic(palyerid):
    url = f'http://music.taihe.com/artist/{palyerid}'
    response = requests.get(url)
    response.encoding = 'utf-8'
#    with open('res.txt', 'w', encoding='utf-8') as f:
#       f.write(response.text)
    res=re.findall(' <a href=\"/song\/(\d+)\" class=\"songlist-songname namelink overdd  \" target=\"_blank\" data-hasmv=\"[0|1]\"  title=\"(.*)\" c-tj=\'{&quot;page&quot;:&quot;widget&quot;,&quot;pos&quot;:&quot;list&quot;,&quot;sub&quot;:&quot;song&quot;}\'>',response.text)
   # print(res)
    for item in res:
        #print(item)
        #header = {'user-agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.108 Safari/537.36'}
        response=requests.get(f'http://musicapi.taihe.com/v1/restserver/ting?method=baidu.ting.song.playAAC&format=jsonp&callback=jQuery17205000035445909143_1575725088272&songid={item[0]}&from=web&_=1575725091661')
        response.encoding='utf-8'
        #print(response.text)
        showurl=re.findall('\"show_link\":\"(.*?)\"',response.text)
        downloadurl=showurl[0].replace('\\','')
        saveMusic(item[1],downloadurl,'music')
        print(item[1]+'.mp3---'+downloadurl)
        time.sleep(2)
getPlayerMusic(9295)
