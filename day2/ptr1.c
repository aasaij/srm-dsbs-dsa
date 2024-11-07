#include <stdio.h>

int main(){
	int x[] = {10,20}, *ptr;
	ptr = x;
	printf("%p\n", ptr);
	*++ptr = 200;
	printf("%d\n", *x);
	printf("%p\n", ptr);
	printf("%d\n", *ptr);
	
	return 0;
}