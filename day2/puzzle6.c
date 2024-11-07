#include <stdio.h>

int main(){
//	char str[] = "Sunil";
	int str = 100;
	printf("%p\n", &str);
	str = 200;
//	str = "Nukul";
//	str[0]= 'M';
	printf("%p\n", &str);
//	puts(str);
	
	return 0;
}