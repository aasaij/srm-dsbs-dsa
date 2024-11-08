#include <stdio.h>
//32 bit compiler
int main(){
	printf("%lu %lu %lu", sizeof('A'), sizeof(10), sizeof(0.5));
	return 0;
}