# include <stdio.h>

int main()
{
	int i;
	char ch;

	scanf("%d", &i);
	printf("i = %d\n", i);


	while ( (ch=getchar()) != '\n')
		continue;
	int j;
	scanf("%d", &j);
	printf("j = %d\n", j);
    system("pause");
	return 0;
}
