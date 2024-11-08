#include <stdio.h>
#include <stdlib.h>
//Program to demonstrate linked list 
typedef struct Node{
	char element;
	struct Node *nxt;
}node;
node* createNode(char data){
	node* temp = calloc(1, sizeof(node));
	temp->element = data;
	return temp;
}
node* addFirst(node* list, char element){
	node* newNode = createNode(element);
	if(newNode){
		newNode->nxt = list;
		list = newNode;
	}
	return list;
}
node* addLast(node* list, char element){
	node*  newNode = createNode(element);
	if(newNode){
		if(list){
			node* temp = list;
			//moving temp pointer to the last node
			while(temp->nxt) temp = temp->nxt;
			temp->nxt = newNode;
		}
		else
			return newNode;
	}
	return list;
}
node* addAt(node* list, char element, int position){
	if (position >= 0){
		if (position == 0 || position == 1){
			return addFirst(list,element);
		}
		else if(list->nxt) {
			node* temp = list;
			for (int i = 2; i<position && temp; i++)
				temp = temp->nxt;
			if (temp->nxt){
				node* newNode = createNode(element);
				newNode->nxt = temp->nxt;
				temp->nxt = newNode;
			}
		}
	}
	return list;
}
node* deleteFirst(node* list){
	if (list){
		node *temp = list;
		list = temp->nxt;
		free(temp);		
	}
	return list;
}
//void deleteLast(node *list){
//	node*prev = list;
//	node*temp = prev->nxt;
//	if(prev == NULL){
//		return ;	}
//	if(prev->nxt == NULL){
//		free(prev);
//	}
//	while(temp->nxt != NULL){
//		prev= prev->nxt;
//		temp = temp->nxt;
//	}
//	free(temp);
//	prev->nxt = NULL;
//}
node* deleteLast(node *list){
	if (list){
		if (!list->nxt){
			free(list);
			return NULL;
		}
		else{
			node *temp = list;
			while(temp->nxt->nxt) temp = temp->nxt;
			free(temp->nxt);
			temp->nxt = NULL;
		}
	}
	return list;
}
void printList(node* list){
	if(list){ //list is not empty
		node* temp = list;
		printf("\n[");	
		while(temp->nxt){
			printf("%c,", temp->element);
			temp = temp->nxt;
		}
		printf("%c]\n", temp->element);
	}
	else
		printf("\n[]\n");
}
void mainMenu(){
	printf("LinkedList Demo Application\n");
	printf("***************************\n");
	printf("1. Add First\n");
	printf("2. Add Last\n");
	printf("3. Add at\n");
	printf("4. Delete First\n");
	printf("5. Delete Last\n");
	printf("6. Print List\n");
	printf("7. Exit\n");
	printf("Enter your choice : ");
}
char* getElement(){
	char *element;
	element =(char*) malloc(sizeof(char));
	scanf("\n%c", element);
	return element;
}
int main(){
	node* root = NULL;
	int choice;
	while(1){
		mainMenu();
		scanf("%d", &choice);
		switch(choice){
			default :
				printf("Thank you for your kind cooperation!");
				exit(0);
			case 1: 				
				root = addFirst( root, *getElement()); // adding element to the list
				break;
			case 2: 
				root = addLast(root, *getElement());
				break;
			case 3:{
				char element = *getElement();
				int pos;
				scanf("%d", &pos);
				root = addAt(root, element, pos);
				break;
			}
			case 4:
				root = deleteFirst(root); break;
			case 5:
				root = deleteLast(root); break;
			case 6:
				printList(root);				
		}
	}
	
	return 0;
}