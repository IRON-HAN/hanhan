// 判断是否是子串
// 如果是，返回首个位置
// 如果不是，返回值为-1

#include <stdio.h>
int Strstr(char *, char *);
int main(){
    char s1[] = "12345623";
    char s2[] = "23";
    printf("%d", Strstr(s1, s2));
    return 0;
}
int Strstr(char *s1, char *s2){
    if( s2[0] == 0)
    return -1;
    for (int i = 0 ; s1[i]; i++) {
        int k = i, j = 0;
        for (; s2[j]; j++,k++ ) {
            if(s1[k] != s2[j])
                break;
        }
        if( s2[j] == 0)
            return i+1;
    }
    return -1;
}
