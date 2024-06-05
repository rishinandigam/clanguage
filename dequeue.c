#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
struct node *front  = NULL;
struct node *rear = NULL;
void enque_at_front()
{
	struct node *newnode = (struct node*)malloc (sizeof(struct node*));
	newnode ->next = NULL;
	printf("Enter the data : ");
	scanf("%d", &newnode->data);
	if (front == NULL|| rear == NULL)
	front = rear = newnode;
	else 
	{
		rear->next = newnode;
		rear = newnode;
		
	}

}
void dequeue_at_rear()
{
	if (rear == NULL )
	{
		printf("List is empty\n");
	}
	else 
	{
		struct node * temp = front;
		while(temp->next != NULL)
		{
			temp= temp->next;
		}
		rear = temp;
	}
}
void display()
{
	if (front == NULL || rear == NULL)
	{
		printf("List is Empty");
	}
	else 
	{
		struct node *temp = front;
		printf("The list is :  ");
		while(temp != NULL)
		{
			printf(" <----- %d", temp->data);
			temp = temp->next;
		}
	}
}
void dequeue_at_front()
{
	if(rear == NULL )
	{
		printf("List is empty!\n");

	}
	else 
	{
		struct node* temp = NULL;
	}
}
int main()
{
	int op;
	while(1)
	{
		printf("\n");
		display();
		printf("\n");
		printf("\nChoose the option : \n");
		printf("1) Enqueue at front.\n");
		printf("2) Dequeue at rear.\n");
		printf("3) Enqueue at REAR.\n");
		printf("4) Dequeue at Front.\n");
		printf("5) Isqueue empty.\n");
		printf("Enter the option : ");
		scanf("%d", &op);
		switch(op)
		{
			case 1: 
			enque_at_front();
			break;
			case 2 : 
			dequeue_at_rear();
			break;
			case 3 : 
			//enqueue_at_rear();
			break;
			case 4: 
			dequeue_at_front();
			break;
			case 5: 
			//isempty();
			break;
			default : 
			printf("Option is invalid \n");
			break;
		}

	}
}