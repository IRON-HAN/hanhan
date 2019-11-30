//用指向数组的指针作函数参数
#include <stdio.h>
int main() {
  void aver(float *p, int n);
  void search(float(*p)[4], int n);
  float score[3][4] = {{65, 67, 70, 60}, {80, 87, 90, 81}, {90, 99, 100, 98}};
  aver(*score, 12);
  //search(score, 3);
  getchar();
  return 0;
}
void aver(float *p, int n) {
  float *p_end;
  float sum = 0, aver;
  p_end = p + n - 1;
  for (; p<=p_end; p++) {
    sum = sum + (*p);
    aver = sum / n;
    printf("average=%5.2f\n",aver);
  }
}
/*
void search(float (*p)[4], int n) {
  int i, j, flag;
  for (j=0; j<n; j++) {
    flag = 0;
    for (i = 0; i < 4; i++)
      if (*(*(p + j) + i) < 60)
        flag = 1;
    if (flag==1) {
      printf("no. %d fails,his scores are:\n", j + 1);
      for (i=0; i<4; i++) {
        printf("%5.1f", *(*(p + j) + i));
        printf("\n");
      }
    }
  }
}
*/
