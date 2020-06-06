#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 定义两个文件指针
    FILE *in = NULL;
    FILE *out = NULL;
    // 分别打开两个文件
    // 如果打开失败则弹出提示信息并退出程序
    if ((in = fopen("temp.txt", "rb")) == NULL)
    {
        printf("open error!\n");
        exit(0);
    }
    if ((out = fopen("test_out.txt", "rb+")) == NULL)
    {
        printf("open error!\n");
        exit(0);
    }
    // 进行解密,并在标准输出流输出
    printf("解密后的内容:\n");

    char ch = fgetc(in);
    while (!feof(in))
    {
        // ch = ch ^ 0x6a;
        fputc(ch, out);
        putchar(ch);
        ch = fgetc(in);
    }
    putchar(10);
    // 关闭文件流
    fclose(in);
    fclose(out);

    return 0;
}
