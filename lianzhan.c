#include"lianzhan.h"
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

linkstack *initstack() {
	linkstack *t = (linkstack*)malloc(sizeof(linkstack));	t->next = NULL;
	return t;
}
int Empty(linkstack *s){
	return s->next == NULL;
}
void Push(linkstack *s,dataType x){
	struct	node *t = (struct node*)malloc(sizeof(node));
	t->data = x;
	t->next = s->next;
	s->next = t;
}
void Pop(linkstack *s){
	if (Empty(s)) exit(1);
	struct node *p = s->next;
	s->next = p->next;
	free(p);
}
dataType GetTop(linkstack *s) {
	return s->next->data;
}

