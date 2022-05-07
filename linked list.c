#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node * next;
};

void linkedlist(struct Node * ptr){
	while (ptr!=NULL)
	{
	
	printf("%d\n", ptr ->data);
	ptr =ptr->next;
   }
}	

int main(){
	struct Node * head;
	struct Node * second;
	struct Node * third;
	// allocate  memory of nodes in linked list in heap
	
	head=(struct Node *)malloc(sizeof(struct Node));
	second=(struct Node *)malloc(sizeof(struct Node));
	third=(struct Node *)malloc(sizeof(struct Node));
	
	//link first n second  nodes
	head -> data = 7;
	head -> next = second;
	
	//link  second n third  nodes
	second -> data = 17;
	second-> next = third;
	
	//terminate the list
	third -> data = 27;
	third -> next = NULL;
	
	linkedlist(head);
	
	return 0;
	
	
}
