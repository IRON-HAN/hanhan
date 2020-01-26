// 2020-1-19
// 可变/动态数组
// zju
#ifndef _ARRAY_H_
#define _ARRAY_H_

#include <stdio.h>
#include <stdlib.h>
#define BLOCK_SIZE 10
typedef struct{
    int *array;
    int size;
} array;
// 创建数组函数
array array_create(int init_size){
    array a;
    a.array = (int *)malloc(sizeof(int) * init_size);
    a.size = init_size;
    return a;
}
// 释放空间函数
void array_free(array *a){
    free(a->array);
    a->array = NULL;//空指针多次free 无害
    a->size = 0;
}
// 获取一个数组的长度
int array_size(const array *a){
    return a->size;
}
// 数组空间增长函数
void array_inflate(array *a, int more_size){
    int *p = (int *)malloc(sizeof(int) * (a->size + more_size));
    int i;
    for (i = 0; i<a->size; i++) {
        p[i] = a->array[i];
    }
    free(a->array);
    a->array = p;
    a->size += more_size;
}
// 1. 检查是否越界
// 2. 返回该位置上的值
int *array_at(array *a, int index){
    if (index >= a->size) {
        array_inflate(a, (index / BLOCK_SIZE + 1) * BLOCK_SIZE - a->size);
    }
    return &(a->array[index]);
}

#endif
