#include <stdio.h>
int main()
{
    char str[80];
    char str1[80];
    char str2[80];
    scanf("%s",str);/*此处输入:I love you! */
    printf("%s",str);
    sleep(5);/*这里等待5秒,告诉你程序运行到什么地方*/
    scanf("%s",str1);/*这两句无需你再输入,是对键盘盘缓冲区再扫描   */
    scanf("%s",str2);/*这两句无需你再输入,是对键盘盘缓冲区再扫描    */
    printf("\n%s",str1);
    printf("\n%s", str2);
    system("pause");
    return 0;
}
