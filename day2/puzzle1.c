#include <stdio.h>

void welcome() __attribute((constructor));
void thanku() __attribute((destructor));

void welcome(){
	printf("Good morning to everyone!\n");
}

void thanku()
{
	printf("Thank you for being very silent!\n");
}
int main(){
	printf("You are all Engineers!\n");
	return 0;
}