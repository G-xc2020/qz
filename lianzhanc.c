#include"lianzhan.h"
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main(int argc,char **argv){
	linkstack *s = initstack();
	Push(s,80);
	Push(s,90);
	Pop(s);
	Push(s,70);
	printf("%d",GetTop(s));
}

