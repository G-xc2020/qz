#ifndef shu_h
#define shu_h
#include<stdio.h>
#include<malloc.h>
typedef char dataType;
typedef struct treeNode {
	dataType data;
	struct TreeNode *left,*right;
}TreeNode;
void CreateTree(TreeNode *t,dataType x);
void PrintTree(TreeNode *t);
void PreOrder(TreeNode *t);
void InOrder(TreeNode *t);
void PostOrder(TreeNode *t);
void LevelOrder(TreeNode *t);

#endif


