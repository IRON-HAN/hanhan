#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#define STOP '|'
int main() {
    char c;//读入字符
    char prev;//读入的前一个字符
    long n_chars=0L;//字符数
    int n_lines=0;//行数
    int n_words=0;//单词数
    int p_lines=0;//不完整的行数
    _Bool inword = false;

    printf("enter text(| to terminate):\n");
    prev = '\n';
    while ((c=getchar())!=STOP) {
        n_chars++;
        if(c=='\n')
            n_lines++;
        if (!isspace(c)&&!inword) {
            inword = true;
            n_words++;
        }
        if(isspace(c)&&inword)
            inword = false;
        prev = c;
    }
    if(prev !='\n')
        p_lines = 1;
    printf("characters=%d,words=%d,lines=%d,",
           n_chars, n_words, n_lines);
    printf("partial lines=%d\n", p_lines);
    //getchar();
    system("pause");
    return 0;
}
