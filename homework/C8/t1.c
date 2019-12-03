#include <stdio.h>
#include <string.h>
int main() {
    //初始化
    char str1[10], str2[10],str0[10];
    int len1,len2,num=0;
    //输入
    printf("input1:\n");
    gets(str1);
    printf("input2:\n");
    gets(str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    //i 用来逐一移动
    for (int i=0; i<=len1; i++) {
        for (int j=0; j<len2; j++) {
            str0[j] = str1[i + j];
        }
            int same = 0;//相同字符的数量
            for (int t=0; t<len2; t++) {
                if (str2[t] != str0[t])
                break;
                else
                same++;
                    if (same==len2) {
                    num++;
                    printf("位置：%d\n", (i+1));
                    }
            }
    }

    printf("出现次数：%d\n", (num));
    system("pause");
    return 0;
}

