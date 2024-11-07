//Program to sort array elements using qsort()
#include <stdio.h>
#include <stdlib.h>
int compare (const void* x, const void* y){
	return *(int*)x-*(int*)y;
}
void printArray(int arr[], int size){
	printf("[");
	for (int i = 0; i<size-1; printf("%d,", arr[i++]));
	printf("%d]",arr[size-1]);
}
int main(){
	int arr[] = {10,22,12,35,66,22,245,23,88};
	int size = sizeof(arr)/sizeof(arr[0]);
	qsort(arr,size, sizeof(arr[0]), compare);
	printArray(arr, size);
	return 0;
}