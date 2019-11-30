#include <stdio.h>
#include <string.h>
int main() {
    char str[100][100];
    char sentence[100];
    int i,n;
    gets(sentence);
    n = strlen(sentence);

    int p=0, q=0;
    int num;
    int s,t;
    char null[100];
    int k;

    for (k=0; k<=100; k++) {
      null[k] = k;
  }

    for (i = 0; i <= n; i++) {
      if (sentence[i] == ' '){
        p++;
        q = 0;
        continue;
        }
    str[p][q++]=sentence[i];
  }
  num = p;

    for (s=0; s<=(p-1); s++) {
      for (t=(s+1); t<=p; t++) {
        if ((strcmp(str[s], str[t])) == 0){
        str[t][1] = null[t];
        num--;
  }
}
}
  printf("%d",(num+1));
    system("pause");
    return 0;
}
