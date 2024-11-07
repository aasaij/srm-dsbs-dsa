#include <stdio.h>

int main(){
	int x = 10;
	static int y = x;	
	if (x == y)
		printf("You are all very silent in the class!\n");
	else;
		printf("You are all very interactive!");
	
	return 0;
}