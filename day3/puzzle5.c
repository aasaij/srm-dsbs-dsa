#include <stdio.h>
char *getChar(){
	char ch;
	scanf("%c", &ch);//J
	return &ch;
}
int main(){
	printf("%c", *getChar()); // dangling 
	return 0;
}