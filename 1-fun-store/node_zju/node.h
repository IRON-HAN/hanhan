#ifndef NODE_H
#define NODE_H

#include "stdio.h"
#include "stdlib.h"

typedef struct _node{
    int value;
    struct _node *next;
} node;

typedef struct _list{
    node *head;
    node *tail;
} list;

void add(list *plist, int num){
    // add to linked_list
    node *p = (node *)malloc(sizeof(node));
    p->value = num;
    p->next = NULL;
    // find the last one

    node *last = plist->head;
    if( last ){ //如果head不为last
        while (last->next) {
            last = last->next;
        }
        // attach
        last->next = p;
    }
    else { // head为last
        plist->head = p;
    }
}
void print(list *plist){
    node *p;
    for (p=plist->head; p; p=p->next) {
        printf("%d\t", p->value);
    }
    printf("\n");
}

#endif
