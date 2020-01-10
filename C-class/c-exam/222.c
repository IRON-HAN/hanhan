#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  FILE *fp;
  char name[10], ch, op;
  char word[10];
  char text[100],temp2[100],temp[100];
  int pos,num;


  printf("input the name:\n");
  scanf("%s", name);
  getchar();
  if ((fp=fopen(name, "r+"))==NULL) {
    printf("can't open.\n");
    exit(0);
  }

  ch=fgetc(fp);
  while (!feof(fp))
  {
    int i = 0;
    text[i]=ch;
	putchar(ch);
    ch = fgetc(fp);
    i++;
    }
    putchar(10);
    int len_text = strlen(text);
    while (1)
    {
      printf("next operation:\n");
      printf("a:delete:\n");
      printf("b:input:\n");
      printf("c:save:\n");
      scanf("%c", &op);
      switch (op)
      {
      case 'A':
        printf("input position & number\n");
        scanf("%d %d", &pos, &num);
        int i, j;
        for (i = 0; i < pos; i++)
          temp[i] = *(text + i);
        temp[i] = '\0';
        for (j = 0, i = pos + num; i <len_text ; i++,j++)
        {
          temp2[j] = *(text + i);
          }
          temp2[j] = '\0';
          strcat(temp, temp2);
          strcpy(text, temp);

          printf("done\n");
          printf("%s", temp);
          printf("%s", text);
          break;
        case 'B':
          printf("input the postion and word\n");
          scanf("%d",&pos);
          scanf("%s",word);
          int len1=strlen(temp);
          int len2 = strlen(word);

          printf("done\n");
          printf("%s", temp);
          printf("%s", temp2);
          break;
        case 'C':
          fclose(fp);
          fp = fopen(name, "w+");
          fputs(text, fp);
          fclose(fp);
          printf("done");
          }
          break;
        }

        fclose(fp);
        system("pause");
        return 0;

}
