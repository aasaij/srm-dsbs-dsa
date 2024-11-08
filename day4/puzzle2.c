#include <stdio.h>
struct Flag{
	int x;
	int y;
	int z;
};
//64 bit compiler
int main(){
	printf("%lu %lu %lu %lu %lu", sizeof(int*), sizeof(char*), 
	  sizeof(double*), sizeof(struct Flag*), sizeof(char*));
	return 0;
}