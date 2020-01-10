#include<stdio.h>
#include<string.h>

    int n, num = 1;//num用于统计单词总数，n为输入的总字符数
    char ch[100];//ch用于读取字符
    int R[100][100], len[100];//R[][]用于存放每个单词，len用来表示每个单词的长度

    int main() {
        int Cmp(int a, int b);
        int Check(int n);
        printf("input the sentence:\n");
        gets(ch + 1);
        n = strlen(ch + 1);
        for(int i = 1; i <= n; i++)
        {
            if (ch[i] == ' ')
                {num++; continue;}// 遇到空格，单词数+1
            R[num][++len[num]] = ch[i];
        }
        int words = 0;
        for(int i = 1; i <= num; i++)
            words += Check(i);
        printf("the sentence has %d different words\n", words);
        system("pause");
        return 0;
}
    int Cmp(int a, int b){
        if (len[a] != len[b])//检查单词长度是否相同
            return 0;
	    for(int i = 1; i <= len[a]; i++)//逐个检查每个字符
            if (R[a][i] != R[b][i])
                return 0;
	    return 1;
}
    int Check(int n){
	    for(int i = 1; i < n; i++)
            if (Cmp(i, n))
                return 0;
	    return 1;
}
