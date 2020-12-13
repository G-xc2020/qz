#include<stdio.h>
#include<malloc.h>
#include"shu.h"
#define MaxSize 100

typedef char dataType;
 struct TreeNode {
	dataType data;
	struct TreeNode *left,*right;
};
//创建二叉树
//以先序序列输出各节点的数据。某节点的左子树或右子树为空时，输出一个特定的值x
void CreateTree(TreeNode *t,dataType x) {
	dataType d;
	scanf("%c",&d);
	if (d == x) {
		t=NULL;
	}else{
		t=(TreeNode*)malloc(sizeof(TreeNode));
		t->data = d;
		CreateTree(t->left,x);
		CreateTree(t->right,x);
	}
}
//输出二叉树
/*void PrintTree(TreeNode *t) {
	if (t) {
		printf("%c",t->data);
		PrintTree(t->left);
		PrintTree(t->right);
	}
}*/
//先序遍历二叉树
void PreOrder(TreeNode *t) {
	if (t){
		printf("%c",t->data);
				PreOrder(t->left);
				PreOrder(t->right);
				}
				}
//中序遍历二叉树
void InOrder(TreeNode *t) {
if(t) {
InOrder(t->left);
printf("%c",t->data);
InOrder(t->right);
}
}
//后序遍历二叉树
void PostOrder(TreeNode *t) {
if(t) {
PostOrder(t->left);
PostOrder(t->right);
printf("%c",t->data);
}
}
//以层次顺序遍历二叉树
void LevelOrder(TreeNode *t) {
	TreeNode *q[MaxSize];
	int front=0,rear=0;
	TreeNode *p;
	if (t == NULL) return;
	q[rear] = t;
	rear = (rear+1) % MaxSize;
	while (front != rear) {
		p=q[front];
		front = (front+1)%MaxSize;
		printf("%c",p->data);
		if (p->left){
		q[rear] = p->left;
		rear = (rear+1)%MaxSize;
	}
		if(p->right) {
			q[rear] = p->right;
			rear = (rear+1)%MaxSize;
		}
	}
}


