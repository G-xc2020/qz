#include"bubble.h"
#include<stdio.h>

void outArr(int arr[], int arrSize){
	      for(int i = 0; i < arrSize; i++){
		           printf("%d\t", arr[i]);
		        }
	       printf("\n");
	   
		         return;
	     }
	      
 int main(int argc, char **argv)
	 {
		     int arr[] = {42, 93, 64, 15, 26, 57, 48, 79, 80};
		     int arrSize = sizeof(arr)/sizeof(int);
		     outArr(arr, arrSize);
		                                                                                                                                 
		     bublle(arr, arrSize);
		     outArr(arr, arrSize);
		
			 
			     return 0;
		 }
