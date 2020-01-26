#include "node.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    list list_1;
    int num = 0;
    list_1.head = NULL;
    list_1.tail = NULL;

    printf("input:(enter -1 to quit)\n");
    do {
        scanf("%d", &num);
        if(num != -1){
            add(&list_1, num);
        }

    }while (num != -1);

    print(&list_1);
    // 查找元素
    scanf("%d", &num);
    node *p;
    int is_found = 0;

    for (p=list_1.head; p; p=p->next) {
        if (p->value == num) {
            printf("found\n");
            is_found = 1;
            break;
        }
    }
    if (!is_found) {
        printf("not found!\n");
    }
    // 删除元素
    node *q;
    for (q = NULL, p = list_1.head; p; q=p,p=p->next)
    {
        if (p->value == num) {
            if (q) {
                q->next = p->next;
            }
            else {
                list_1.head = p->next;
            }
            free(p);
            break;
        }
    }
    // 清除链表
    for (p=list_1.head; p; p=q) {
        q = p->next;
        free(p);
    }
    system("pause");
    return 0;


}
