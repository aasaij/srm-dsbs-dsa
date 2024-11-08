//Program to implement Stack Application
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Stack{
	int capacity; // Maximum capacity of Stack
	int size; //Actual size of Stack
	int *elements; //Store elements of Stack
}stack;

stack *createStack(int maxSize){
	stack *temp = (stack*)calloc(1, sizeof(stack));
	temp->capacity = maxSize;
	temp->size = -1;
	temp->elements = calloc(maxSize, sizeof(int));
	return temp;
}
bool isFull(stack *st){
	return st->capacity == st->size+1;
}
bool isEmpty(stack *st){
	return st->size == -1;
}
bool push(stack* st, int element){
	if (isFull(st))
		return false;
	else{
		st->elements[++st->size] = element;
		return true;
	}
}
int* pop(stack *st){
	if (isEmpty(st))
		return NULL;
	return &st->elements[st->size--];
}
int* peek(stack *st){
	if (isEmpty(st))
		return NULL;
	return &st->elements[st->size];
}
void printMenu(){
	printf("\nStack Operations Demo\n");
	printf("*********************\n");
	printf("1. Push\n");
	printf("2. Pop\n");
	printf("3. Display Front\n");
	printf("4. Exit\n");
	printf("Enter your choice : ");	
}
int main(){
	stack *myStack = NULL;
	int stackSize, choice;
	scanf("%d", &stackSize);
	myStack = createStack(stackSize);
	while(1){
		printMenu();
		scanf("%d", &choice);
		switch(choice){
			default:
				printf("Thank you so much for being very very silent!");
				break;
			case 1:{
				int element;
				printf("Enter an element : ");
				scanf("%d", &element);
				if (push(myStack, element))
					printf("Pushed...\n");
				else
					printf("Stack overflow...\n");
				break;
			}
			case 2:{
				int *element = pop(myStack);
				if (element)
					printf("Popped element : %d\n", *element);
				else
					printf("Stack underflow....\n");
				break;
			}
			case 3:{
				int *element = pop(myStack);
				if (element)
					printf("Front element : %d\n", *element);
				else
					printf("Stack underflow....\n");				
			}			
		}
	}

	return 0;
}
