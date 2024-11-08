#include <stdio.h>

//typedef struct Node {
//	char a[20]; // 1  1
//	int data; // 4 2
//	int y; // 4 2
//	double x; // 8 3
//	char b; // 1 4
//	int ab;	 // 4 4
//	//struct Node *next;
//}node;
typedef struct Node {
	int data; // 4 2
	struct Node *next;
}node;

int main(){
	printf("%lu", sizeof(node));
}