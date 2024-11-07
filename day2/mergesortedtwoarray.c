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
	int brr[] = {1,2,7,3,22,11,12}, i,j, k;
	int size = sizeof(arr)/sizeof(arr[0]);
	int bsize = sizeof(brr)/sizeof(brr[0]);
	int m_arr[size+bsize];
	qsort(arr,size, sizeof(arr[0]), compare);
	qsort(brr, bsize, sizeof(brr[0]), compare);
	for(i=j=k=0; i<size && j <bsize;k++){
		if(arr[i]<brr[j])
			m_arr[k] = arr[i++];
		else
			m_arr[k] = brr[j++];
	}
	while(i<size)
		m_arr[k++]= arr[i++];
	while(j<bsize)
		m_arr[k++] = brr[j++];
	printArray(m_arr, size+bsize);
	
	return 0;
}