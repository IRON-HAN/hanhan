//判断一个字符在句子中出现了几次
#include <stdio.h>
#include <string.h>
int main(){
    int cnt(char *s, char c);
    char s1[100], ch, n;

    printf("input:\n");
    gets(s1);
    ch = getchar();
    n = cnt(s1, ch);
    printf("n=%d\n", n);
}
int cnt(char *s,char c){
    int i = 0, count = 0;
    while (s[i]) {
    if(s[i]==c)
        count++;
    i++;
    }
    return count;
}
