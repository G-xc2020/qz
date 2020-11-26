#include"paixu.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10
int main(int argc,char **argv){
	int a[N],i;
	srand(time(0));
	for(i=0;i<N;i++)
		a[i]=rand()%100;
	printf("初始数据为:");
	for(i=0;i<N;i++)
		printf("%d\t",a[i]);
	printf("\n");
	bubble1(a,N);
	//bubble2(a,N);
	//bubble3(a,N);
	printf("冒泡排序后数据:");                                                                                                                 for(i=0;i<N;i++)                                                                                                                               printf("%d\t",a[i]);
	printf("\n");
		insertsort(a,N);
	printf("插入排序后数据:");                                                                                                                 for(i=0;i<N;i++)                                                                                                                               printf("%d\t",a[i]);
	printf("\n");
	selectsort(a,N);
	printf("选择排序后数据:");                                                                                                                 for(i=0;i<N;i++)                                                                                                                               printf("%d\t",a[i]);
	printf("\n");
	Quicksort(a,N);
	printf("快速排序后数据:");
	for(i=0;i<N;i++)
		printf("%d\t",a[i]);
	printf("\n");
}

