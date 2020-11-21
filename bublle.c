#include"bubble.h"
#include<stdio.h>
void bublle(int arr[], int arrSize){
	int tmp = 0;
	int swap = 1;
	while(swap){
		swap = 0;
		for(int i = 0; i < (arrSize -1); i++){
			if(arr[i] > arr[i + 1]){
				tmp = arr[i];
				arr[i] = arr[i + 1]; 
				arr[i + 1] = tmp;
				swap = 1;
			}   
		}   
	}   

	return;
}
