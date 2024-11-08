//Program to implement queue
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Node{
	char element;
	struct Node *next;
}node;

typedef struct Queue{
	node* front;
	node* rear;
}queue;
node* createNode(char element){
	node *temp = (node*)calloc(1, sizeof(node));
	temp->element = element;
	return temp;
}
queue* createQueue(){
	queue *temp = (queue*)calloc(1, sizeof(queue));
	return temp;
}
bool isEmpty(queue *q){
	return !q->front && !q->rear;
}
queue *enqueue(queue *q,char element){
	node* newNode = createNode(element);
	if (isEmpty(q)){
		q->front = q->rear = newNode;
	}
	else{
		q->rear->next = newNode;
		q->rear = newNode;
	}	
	return q;
}
queue *dequeue(queue *q){
	if (!isEmpty(q)){
		node *temp = q->front;
		if(q->front==q->rear) {
			free(q->front);
			q->front = q->rear = NULL;
		}
		else {
			q->front = q->front->next;
			free(temp);
		}
		return q;	
	}
	return NULL;
}
void printQueue(queue *q){
	if (!isEmpty(q)){
		node* temp = q->front;
		printf("\n[");
		while (temp->next){
			printf("%c,", temp->element);
			temp = temp->next;
		}
		printf("%c]\n", temp->element);
	}
	else
		printf("\n[]\n");
}
void printMenu(){
	printf("\nQueue Operations Demo\n");
	printf("*********************\n");
	printf("1. Enqueue\n");
	printf("2. Dequeue\n");
	printf("3. Display Queue\n");
	printf("4. Exit\n");
	printf("Enter your choice : ");	
}


int main(){
	queue *q = createQueue();
	int choice;
	while(1){
		printMenu();
		scanf("%d", &choice);
		switch(choice){
			default:
				printf("Thank you for being very attentive!");
				exit(0);
			case 1:{
				char element;
				scanf("\n%c", &element);
				q = enqueue(q, element);
				break;
			}
			case 2:
				q = dequeue(q);
				break;
			case 3:
				printQueue(q);			
		}
	}
	return 0;
}