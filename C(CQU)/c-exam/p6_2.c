//读取某个文件的 字符数+字母数+数字数+行数（读取回车符）
#include <stdio.h>
int main(){
    FILE *fp;
    int c1=0, c2=0, c3=0, c4=0;
    if ((fp=fopen("data.txt", "r"))==NULL) {
        printf("can't open file.\n");
        return 0;
    }
    printf("input:\n");
    char c = fgetc(fp);
    while (c!=EOF) {
        c1++;
        if ((c>='A'&&c<='Z')||(c>='a'&&c<='Z')) {
            c2++;
        }
        else if (c>='0'&&c<='9') {
            c3++;
        }
        else if (c=='\n') {
            c4++;
        }
        c = fgetc(fp);
    }
    fclose(fp);
    printf("char:%d,alpabet:%d,nums:%d,lines:%d\n", c1, c2, c3, c4);
    return 0;
    }
