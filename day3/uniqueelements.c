//Program to display unique elements of array
#include <stdio.h>
#include<stdbool.h>
int main(){
	int arr[] = {10, 20, 10, 30, 20, 40};
	int size = sizeof(arr)/sizeof(arr[0]);
	for (int i = 0; i<size; i++){
		bool found = false;
		for (int j = i-1;j>=0; j--){
			if (arr[i]==arr[j]){
				found = true; 
				break;
			}
		}
		if(!found)
			printf("%d ", arr[i]);
	}	
	return 0;
}