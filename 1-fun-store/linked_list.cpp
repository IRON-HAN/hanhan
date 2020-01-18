#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person{
    char name[20];
    char phone[20];
    struct person *next;
};
typedef struct person Per;
Per *head;

int creat(){
    int i;
    int p_num;
    Per *p, *pr;
    printf("input the number of person:\n");
    scanf("%d", &p_num);
    fflush(stdin);//清空缓存区
    p = (Per *)malloc(sizeof(Per));
    if (p == NULL) {
        printf("no enough memory.\n");
        exit(0);
    }
    else {
        printf("input the info:\n");
        fgets(p->name, 20, stdin);
        fgets(p->phone, 20, stdin);
        head = p;
        pr = p;
    }
    for (i = 1; i < p_num;i++){
        p = (Per *)malloc(sizeof(Per));
        if (p == NULL) {
            printf("no enough memory.\n");
            exit(0);
        }
        else {
            printf("input the info:\n");
            fgets(p->name, 20, stdin);
            fgets(p->phone, 20, stdin);
            pr->next = p;
            pr = p;
        }
    }
    pr->next = NULL;
    return p_num;
}
int find(char *name){
    Per *p;
    p = head;
    while(p != NULL && strcmp(p->name, name))
        p = p->next;
    if(p == NULL){
        printf("failed.\n");
        return 0;
    }
    else{
        printf("%s.\n", p->phone);
        return 1;
    }
}
int Delete(char *name){
    //pr用于记录当前指针的地址
    Per *p,*pr;
    p = head;
    // 判断要删除的是否为头节点
    if(!strcmp(p->name, name)){
        head = p->next;
        free(p);
        return 1;
    }
    else{
        pr = p;
        p = p->next;
        while(p != NULL && strcmp(p->name, name)){
            pr = p;//移动pr
            p = p->next;//移动p
        }
        if(p == NULL){
            printf("failed.\n");
            return 0;
        }
        else{
            pr->next = p->next;
            free(p);
            return 1;
        }
    }
}

