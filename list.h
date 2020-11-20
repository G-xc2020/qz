#ifndef list_h
#define list_h
#include<stdlib.h>
#include<stdio.h>
typedef int DataType;
typedef struct node_{
	DataType data;
	struct node_ *next;
} Node;
typedef struct list_{
	Node *head;
	Node *tail;
	Node *current;
}List;
void initList(List *);
void addHead(List *,DataType);
void addTail(List *,DataType);
void insertList(List *,int,DataType);
void delList(List *,int);
void isEmpty(List *);
DataType getdata(List *,int);
Node* find(List *,DataType);
void printList(List *);
int getLength(List *);
void dispList(List *);
void clearList(List *);

#endif
