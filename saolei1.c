#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include <memory.h>

enum gridState {UNKNOWN,NUMBER,BLANK,FLAG,DOUBT,MINE};
enum mineState {NOMINE, HASMINE };

typedef struct Table_{
    int rows;
    int columns;
    int digNum;
    int mineNum;
    double	timePassed;
    int**	mines;
    int**	state;
}GameTable;

char scanf_char();
int  choisirNombreAleatoire(int Max);
int** AllouerMatrice(int n, int p);
int  LibererMatrice(int **tab, int n);
int  InitialiserMatrice(int **tab, int n, int p, int valeur);
void initGame(GameTable* tab);
int  runGame(GameTable* tab);
void printGame(GameTable* tab);
void deleteGame(GameTable* tab);
void initMines(int** tab, int n, int p, int mineNum);
int  getMines(GameTable* tab , int r, int c);
void blank(GameTable* tab, int r, int c);
int  changeState(GameTable* tab, int r, int c, int flag);
void printMine(GameTable* tab);

int main() {
  //init the rows, columns, mines
    srand(time(NULL));
    GameTable tabs;
    initGame(&tabs);

  //run game
  int flag = 1;
  while (flag) {
    flag = runGame(&tabs);
  }
  if (tabs.digNum == tabs.mineNum)
    printf("you win the game\n");
  else
    printf("you lost the game\n");
  //free memory
  deleteGame(&tabs);

  return 0;
}

//==========================================================================================
void initGame(GameTable* tab)
{
    printf("please input the rows ,columns, and mines you want to set\n");
    scanf("%d%d%d", &tab->rows, &tab->columns, &tab->mineNum);
    tab->digNum = 0;
    tab->mines = AllouerMatrice(tab->rows, tab->columns);
    tab->state = AllouerMatrice(tab->rows, tab->columns);
    InitialiserMatrice(tab->mines, tab->rows, tab->columns, NOMINE);
    InitialiserMatrice(tab->state, tab->rows, tab->columns, UNKNOWN);
    initMines(tab->mines, tab->rows, tab->columns, tab->mineNum);
    printGame(tab);
    printMine(tab);
  setbuf(stdin, NULL);

}
int runGame(GameTable* tab)
{
  int r = -1;
  int c = -1;
  char cmd;
  while (r < 0 || r > tab->rows - 1 || c < 0 || c > tab->columns - 1 || !(cmd == 'n' || cmd == 'y'))
  {
    printf("input the coordinate, cmd:(y, n)");
    scanf("%d %d %c", &r, &c, &cmd);
  }
  int flag = 1;
  if (cmd == 'y')
  {
    if (tab->state[r][c] == FLAG)
      tab->state[r][c] = DOUBT;
    else if (tab->state[r][c] == UNKNOWN)
    {
      tab->state[r][c] = FLAG;
      if (tab->mines[r][c] == HASMINE)
      {
          tab->digNum++;
          if(tab->digNum == tab->mineNum)
              return 0;
      }
    }
  }
  else if (cmd == 'n')
  {
      if (tab->mines[r][c] == HASMINE)
        flag = 0;
      blank(tab, r, c);
  }
  setbuf(stdin, NULL);
  printGame(tab);
  return flag;

}
void printGame(GameTable* tab)
{
  //unknown **, number 11, blank __, flag pp, doubt ??, mine XX
  /*
  -------
  |__|NN|__|!!|
  |__|__|__|XX|
  |__|YY|__|!!|
  |__|__|__|XX|
  */
  int i = 0;
  int j = 0;
  for (i = 0; i < tab->rows; i++)
  {
    for (j = 0; j < tab->columns; j++)
    {
      printf("|");
      switch (tab->state[i][j])
      {
        case UNKNOWN:
          printf("**");
              break;
        case NUMBER:
          printf("%2d",getMines(tab,i,j));
              break;
        case BLANK:
          printf("__");
              break;
        case FLAG:
          printf("PP");
              break;
        case DOUBT:
          printf("??");
              break;
        case MINE:
          printf("XX");
      }
    }
    printf("|\n");
  }
  //printf("|" );
}
void deleteGame(GameTable* tab)
{
  LibererMatrice(tab->mines, tab->rows);
  LibererMatrice(tab->state, tab->rows);
}
void initMines(int** tab, int n, int p, int mineNum)
{
  if (mineNum > n * p || mineNum < 1)
    exit(0);
  int cnt = 0;
  while (cnt < mineNum)
  {
    int r = choisirNombreAleatoire(n-1);
    int c = choisirNombreAleatoire(p-1);
    if (tab[r][c] == NOMINE)
    {
      tab[r][c] = HASMINE;
      cnt++;
    }
  }
}

int  getMines(GameTable* tab, int r, int c)
{
  int cnt = 0;
  for (int i = -1; i <= 1; i++)
  {
    for (int j = -1; j <= 1; j++)
    {
      int rr = r + i;
      int cc = c + j;
      if (rr >= 0 && rr < tab->rows && cc >= 0 && cc < tab->columns && !(rr == r && cc == c))
      {
        if (tab->mines[rr][cc] == HASMINE)
          cnt++;
      }
    }
  }
  return cnt;
}
void blank(GameTable* tab, int r, int c)
{
  if (r < 0 || r >= tab->rows || c < 0 || c >= tab->columns)
    return;
  if ((tab->state[r][c] == UNKNOWN || tab->state[r][c] == DOUBT ) && tab->mines[r][c] == NOMINE)
  {
    if (getMines(tab, r, c) > 0 )
    {
      tab->state[r][c] = NUMBER;
    }
    else
    {
      tab->state[r][c] = BLANK;
      blank(tab, r - 1, c - 1);
      blank(tab, r - 1, c);
      blank(tab, r - 1, c + 1);
      blank(tab, r + 1, c - 1);
      blank(tab, r + 1, c);
      blank(tab, r + 1, c + 1);
      blank(tab, r, c + 1);
      blank(tab, r, c - 1);
    }
  }
  return;
}
int  changeState(GameTable* tab, int r, int c, int flag)
{
  return 0;
}

void printMine(GameTable* tab)
{
    int i = 0;
    int j = 0;
    printf("the mins position\n");
    for (i = 0; i < tab->rows; i++)
    {
        for (j = 0; j < tab->columns; j++)
        {
            printf("|");
            switch (tab->mines[i][j])
            {
                case HASMINE:
                    printf("**");
                    break;
                case NOMINE:
                    printf("__");
                    break;
            }
        }
        printf("|\n");
    }
}
//==========================================================================================
char scanf_char()
{
  char A = 0;
  char chaine[2] = { 'A','\n' };
  scanf("%s", chaine);
  A = chaine[0];
  return A;
}

int choisirNombreAleatoire(int Max)
{
  return (rand() % (Max + 1));
}

int** AllouerMatrice(int n, int p)
/* allocation d’un tableau de n lignes et p colonnes*/
{
  int i = 0;
  int **tab = (int**)malloc(n * sizeof(int*));
  if (tab == NULL)
  {
    exit(0);
  }
  for (i = 0; i<n; i++)
  {
    tab[i] = (int*)malloc(p * sizeof(int));
  }
  return tab;
}
int LibererMatrice(int **tab, int n)
/* liberation d’un tableau de n lignes*/
{
  int i = 0;
  for (i = 0; i<n; i++)
  {
    free(tab[i]);
  }
  free(tab);
  return 0;
}
int InitialiserMatrice(int **tab, int n, int p, int valeur)
/* initialisation de toutes les cases d’un tableau de n lignes et p
colonnes à la valeurs ? valeur ? */
{
  int i = 0, j = 0;
  for (i = 0; i<n; i++)
  {
    for (j = 0; j<p; j++)
    {
      tab[i][j] = valeur;
    }
  }
  system("pause");
  return 0;
}
