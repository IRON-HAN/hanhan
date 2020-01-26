#include <stdio.h>
int main()
{
    int n;
    int i = 0,j=0; //*遍历量
    int m = 0; //*状态量
    char in[100],out[100]={'\0'};
    char *p;
    scanf("%d", &n);     //*多次项次数
    while(getchar()!='\n')                            //! 3 2 2 0 0
        ;
    gets(in);
    p = in;
    if(n==0)
    {
        for (i = 0, j = 0; *(p + i) != '\0';i++,j++)
            out[j] = *(p + i);
    }
    else
    {
    while(*(p+i)!='\0')    //*已完成遍历，在系数为1和0时没解决
    {
        if(i==0&&*(p+i)=='0')
        {
            break;
        }
        else if(*(p+i)==' ')
        {
            if(n==0)
                out[j]='\0';
            else
            {
                out[j] = 'x';
                if(n==1)
                    j++;
                else
                {
                    out[j + 1] = '^';
                    out[j + 2] = n+48;
                    j += 3;
                }
                n--;
                i++;
                m = 0;
            }
        }
        else if(*(p+i)=='0'&&*(p+i+1)==' '&&m==0)
        {
            i += 2;
            n--;
        }
        else if((*(p+i)=='0'&&*(p+i+1)=='\0'&&m==0))
        {
            break;
        }
        else
        {
            if(m==0)
            {
                if(*(p+i)=='-'||i==0||j==0)
                {
                    if(i==0&&*(p+i)=='1'&&*(p+i+1)==' ')
                    {
                        i++;
                    }
                    else if(j==0&&n!=0&&i!=0)
                    {
                        i++;
                    }
                    else
                    {
                        out[j] = *(p + i);
                        i++;
                        j++;
                    }
                }
                else
                {
                    out[j] = '+';
                    j++;
                }
                m = 1;
            }
            else
            {
                if(*(p+i)=='1'&&*(p+i+1)==' ')
                {
                    i++;
                }
                else
                {
                    out[j] = *(p + i);
                    i++;
                    j++;
                }
            }
        }
    }
    }
    printf("%s", out);

    return 0;
}

