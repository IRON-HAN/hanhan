#include <stdio.h>
#include <string.h>
int main() {
    char str[100][100];//用于存储逐个单词
    char sentence[100];//用于读取句子
    int i,n;//i表示当前读取的位置，n表示每个单词的长度
    printf("请输入一个句子:\n");
    gets(sentence );
    n = strlen(sentence );
    int p=0, q=0;//pq是二维数组的两个参数
    int num;//统计单词总数
    int s,t;//循环比较的参数

    char null[100];
    int k;
    for (k=0; k<=100; k++) {
      null[k] = k;
  }//给一个字符串以数字，方便对重复的单词进行操作

    for (i = 0; i <= n; i++) {
      if (sentence[i] == ' '){
        p++;
        q = 0;
        continue;
        }
    str[p][q++]=sentence[i];
  }
  //逐个存储单词
  num=p;

  for (s=0; s<=(p-1); s++) {
  for (t=(s+1); t<=p; t++) {
    if ((strcmp(str[s], str[t])) == 0){
	    str[t][1] = null[t];//把重复的单词改造，防止同个单词减多次
	    num--;
  }
}
}//逐行比较单词
  	printf("单词数为 %d ",(num+1));
    system("pause");
    return 0;
}
