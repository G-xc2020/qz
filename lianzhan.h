#ifndef lianzhan_h
#define lianzhan_h
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef int dataType;
typedef struct _node{
	dataType data;
	struct _node *next;
}linkstack;
linkstack *initstack();
int empty(linkstack *s);
void Push(linkstack *s,dataType x);
void Pop(linkstack *s);
dataType GetTop(linkstack *t);

#endif
