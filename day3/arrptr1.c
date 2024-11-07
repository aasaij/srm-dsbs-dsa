#include <stdio.h>

int main(){
	int arr[5], *ptr;
	for  (int i = 0; i<5; scanf("%d", arr+i++)); // 1 2 3 4 5
	ptr = arr;
	ptr += 3;
	printf("%d", ptr[-3]);
	
	return 0;
}