#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 定义两个文件指针
    FILE *in = NULL;
    FILE *out = NULL;
    // 分别打开两个文件
    // 如果打开失败则弹出提示信息并退出程序
    if ((in = fopen("test_in.txt", "rb")) == NULL)
    {
        printf("open error!\n");
        exit(0);
    }
    if ((out = fopen("temp.txt", "rb+")) == NULL)
    {
        printf("open error!\n");
        exit(0);
    }
    // 读取加密前的内容并在标准输出流输出
    char read = fgetc(in);
    printf("加密前的内容:\n");
    while (!feof(in))
    {
        putchar(read);
        read = fgetc(in);
    }
    putchar(10);
    // 进行加密,并在标准输出流输出
    printf("加密后的内容:\n");
    // 将文件指针回到初始位置
    rewind(in);
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
