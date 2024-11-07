//Program to find second least value from list of integers
#include <stdio.h>
#include <limits.h>
int findSecondLeast(int arr[], int size){
	int min, smin;
	min = smin = INT_MAX; 
	for(int i = 0; i<size; i++){
		if (min>arr[i]){
			smin = min;;
			min = arr[i];		
		}
		else if (smin > arr[i]&&arr[i]!=min )
			smin = arr[i];
	}
	return smin;
}

int main(){
	int arr[] = {10,20,30,11,12,15,10,7};
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("Second Min : %d", findSecondLeast(arr, size));
	return 0;
}