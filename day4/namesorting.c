#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int comparator(const void *x, const void* y){
	return strcmp((char*)y, (char*)x)	;
}
void printArray(char names[][30], int size){
	printf("[");
	for (int i = 0; i<size-1;printf("%s,",names[i++]) );
	printf("%s]", names[size-1]);
}
int main(){
	char names[][30] = {"Sunil", "Aswant", "Deekshant", "Mayukh", "Chitin"};
	int size = sizeof(names)/sizeof(names[0]);
	qsort(names, size, sizeof(names[0]),comparator);
	printArray(names, size);
	return 0;
}