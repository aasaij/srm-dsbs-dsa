//Program to sort array elements using qsort()
#include <stdio.h>
#include <stdlib.h>
int compare (const void* x, const void* y){
	return *(char*)x-*(char*)y;
}
void printArray(char arr[], int size){
	printf("[");
	for (int i = 0; i<size-1; printf("%c,", arr[i++]));
	printf("%c]",arr[size-1]);
}
int main(){
	char arr[] = "Sunil";
	int size = sizeof(arr)/sizeof(arr[0]);
	qsort(arr,size-1, sizeof(arr[0]), compare);
	printArray(arr, size);
	return 0;
}

