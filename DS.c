//single linkedlist operations........
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
 struct node *head =NULL;
void display()
{

    
    struct node *p =head;
    printf("\nThe  list  is :");
    while(p!=NULL)
    {
        printf("%d---->",p->data);
        p=p->next;
    }

}
void createlist()

{
    struct node* temp =(struct node*)malloc(sizeof(struct node*));
    printf("Enter the data :");
    scanf("%d",&temp->data);
    temp->next =NULL;
    if(head == NULL)
        head = temp;
    else
    {
        struct node * p= head;
        while(p->next != NULL)
        {
            p=p->next;
        }
        p->next = temp;

    }
}
void insertatbegin()
{
    struct node* temp= (struct node*)malloc (sizeof(struct node*));
    printf("enter the data into node:");
    scanf("%d",&temp->data);
    temp->next =NULL;

        struct node *p =head;
        temp->next = p;
        head = temp;

    
}
void insertatend()
{
    struct node* temp =(struct node*)malloc(sizeof(struct node*));
    printf("Enter the data :");
    scanf("%d",&temp->data);
    temp->next =NULL;
    if(head == NULL)
        head = temp;
    else
    {
        struct node * p= head;
        while(p->next != NULL)
        {
            p=p->next;
        }
        p->next = temp;

    }

}
void insertatposition()
{
    int count=0;
    struct node *temp1 = head;
    while( temp1 != NULL)
    {
        count++;
        temp1= temp1->next;
    }
    int position;
    printf("enter the position :");
    scanf("%d",&position);
    if(count < position )
    printf("\n invalid position.\n");
    struct node* temp= (struct node*)malloc(sizeof(struct node*));
    printf("enter the data into node :");
    scanf("%d",&temp->data);
    temp->next =NULL;
    struct node* p= head;
    for(int i= 0;i<position -1;i++)
    {
         p=p->next;
    }

    temp->next = p->next;
    p->next =temp;


}
void deleteatposition ()
{
    struct node* p =head;
    struct node *q =NULL;
    int count =0;
    printf("Enter the position :");
    int position;
    scanf("%d",&position);
    while(p->next !=NULL )
    {
        if(count == position)
        {
            break;
        }
        count++;
        q=p;
        p=p->next;
    }
        q->next =p->next;
        free(p);

}
void deleteatend()
{
    struct node* p =head;
    struct node* q =NULL;
    while(p->next!= NULL)
    {
        q=p;
        p=p->next;
    }
    q ->next=NULL;
    free(p);
    printf("\n node is deleted successfully");
}
void deleteatstart()
 {
    struct node *p =head ;
     head = p->next;
     free(p);
 }
void deletebyvalue()
{
    int target;
    printf("\nEnter the target element :");
    scanf("%d",&target);
    struct node *p =head;
    struct node *q =NULL;
    while(p!=NULL)

    {
        if(p->data == target)
        break;
        q=p;
        p=p->next;
    }
    if(p == NULL)
    printf("\nElement is not present in the list .");
    else
    {
        q->next =p->next;
        free(p);
    
    }
    printf("node is deleted successfully\n");

}
void searchelement()
{
    int count =0;
    printf ("\n Enter the search element ");
    int search;
    scanf("%d",&search);
    struct node *p= head;
    while(p!= NULL)
    {
        
        if(p->data == search)
        
        {
            printf("\n%d is present in the %d node",search ,count);
            break;
        }
        count ++;
        p=p->next;
    }
    if(p == NULL)
    printf("\n %d is not preseent in the list", search);

}
void reverselist ()
{
    struct node *prevnode , *currentnode , *nextnode;
    prevnode =NULL;
    currentnode = nextnode = head ;
    while(nextnode != NULL)
    {
        nextnode = nextnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode =nextnode;
    }
    head =prevnode;


}
void Deleteduplicates()
{
    struct node *temp = head;
    while(temp->next != NULL )
    {
       
        if(temp->data == temp->next->data)
        {
             struct node *curr = temp->next;
            temp->next = temp->next->next;
            free(curr);
        }
        else
        {
            temp =temp->next;
        }

    }
}
 int main()
{
    
    int  op;
    while(1)
    {
        printf("\n");
        display();
        printf("\n");
        printf("\n1) create list ."); 
        printf("\n2) display elements "); 
        printf("\n3) insertion at the begining.");                 
        printf("\n4) insertion at the specified position."); 
        printf("\n5) insertion at the end."); 
        printf("\n6) delete a node at starting.");
        printf("\n7) delete a node at specified position.");
        printf("\n8) delete a node at the end.");
        printf("\n9) delete a node by its value. ");
        printf("\n10) search an element in the list");
        printf("\n11) reverse the list .");
        printf("\n12) delete duplicates in the list ");
        printf("\nEnter the option : ");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            createlist();
            break;
            case 2:
            display();
            break;
            case 3:
            insertatbegin();
            break;
            case 4:
            insertatposition();
            break;
            case 5:
            insertatend();
            break;
            case 6:
            deleteatstart();
            break;
            case 7:
            deleteatposition();
            break; 
            case 8:
            deleteatend();
            break;
            case 9:
            deletebyvalue();
            break;
            case 10:
            searchelement();
            break;    
            case 11:
            reverselist();
            break;   
            case 12:
            Deleteduplicates();
            break;
            default :
            exit(0);
            printf("\noption is invalid");
            
            
        }
    
        
    }


}*/
//doubly linkedlists operations....... 
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct node *next ;
    struct node *prev;
};
struct node *head = NULL;
struct node *tail =NULL;
void display()
{
    struct node *p = head;
    printf("\nThe list is :");
    while(p != NULL)
    {
        printf("<---%d--->",p->data);
        p=p->next;
    }
    printf("\n");
}
void createlist()
{
    struct node* newnode = (struct node*)malloc (sizeof(struct node*));
    newnode->next = NULL;
    newnode->prev = NULL;
    printf("Enter the data into node :\n");
    scanf("%d",&newnode->data);
    if(head == NULL)
    head = tail =newnode;
    else
    {
        tail->next =newnode;
        newnode->prev = tail;
        tail= newnode;
    }
}
void insertatbegin()
{
    struct node*newnode =(struct node*)malloc(sizeof(struct node*));
    printf("\nEnter the data into node :");
    scanf("%d",&newnode->data);
    newnode->next =NULL;
    newnode->prev = NULL;
     head ->prev = newnode;
     newnode->next = head;
     head = newnode;

}
void insertatposition()
{
    struct node *newnode =(struct node*)malloc(sizeof(struct node*));
    newnode->next =NULL;
    newnode->prev = NULL;
    printf("Enter the data :");
    scanf("%d",&newnode->data);
    int position;
    printf("Enter the position :");
    scanf("%d",&position);
    struct node *temp = head;
    for(int i=0;i<position -1;i++)
    {
        temp=temp->next;
    }
    newnode->prev = temp;
    newnode->next =temp->next;
    temp->next =newnode;
    newnode->next->prev = newnode;
}
void insertatend()
{
    struct node* newnode = (struct node*)malloc (sizeof(struct node*));
    newnode->next = NULL;
    newnode->prev = NULL;
    printf("Enter the data into node :\n");
    scanf("%d",&newnode->data);
    if(head == NULL)
    head = tail =newnode;
    else
    {
        tail->next =newnode;
        newnode->prev = tail;
        tail= newnode;
    }
}
void deleteatbegin()
{
    struct node *temp = head;
    head = temp->next;
    temp->next->prev = NULL;
    free(temp);
}
void deleteatend()
{
    struct node *temp =head;
    if(temp->next == NULL)
        head = NULL;
    else
    {
        while(temp->next !=NULL)
        {
            temp= temp->next;
        }
        temp->prev->next =NULL;
    }
    free(temp);
}
void deleteatpos()
{
    int position;
    printf("Enter the position :");
    scanf("%d",&position);
    struct node * temp =head ;
    if(head == NULL)
    printf("list is empty.\n");
    else
    {
       for(int i=0;i<position-1;i++)
       {
         temp=temp->next;
       }

        if(temp->next == NULL)
        deleteatend();
        else
        {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            temp->prev = NULL;
            temp->next = NULL;
            free(temp);
        }
    }

    
}
void deletebyvalue()
    {
        int value ;
    printf("Enter the deletion value : ");
    scanf("%d",&value);
    struct node *p = head;
    while(p!=NULL)
    {
        if(p->data== value)
        break;
        p=p->next;
    }
    if(p==NULL)
    printf("value is not present in the list\n");
    else
    {

        struct node *q =p->prev;
        if(q== NULL)
        {
            if(p->next == NULL)
            head =NULL;
            else
            {
                head = p->next;
                p->next->prev =NULL;
            }

        }
        else
        {
            q->next = p->next;
            if(p->next != NULL)
            p->next->prev =q;
            p->next=NULL;
            p->prev=NULL;
            free(p);
        }
        printf("value is deleted successfully\n ");

        
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
        printf("1) cratelist.\n");
        printf("2) display.\n");
        printf("3) insertion at begin.\n");
        printf("4) inserton at position.\n");
        printf("5) insertion at the end.\n");
        printf("6) delete a node at the begining.\n");
        printf("7) delete anode by position.\n");
        printf("8) delete anode at the ending.\n");
        printf("9) delete anode by its value.\n");
        printf("Enter the option : ");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            createlist();
            break;
            case 2:
            display();
            break;
            case 3:
            insertatbegin();
            break;
            case 4:
            insertatposition();
            break;
            case 5:
            insertatend();
            break;
            case 6:
            deleteatbegin();
            break;
            case 7:
            deleteatpos();
            break;
            case 8:
            deleteatend();
            break;
            case 9:
            deletebyvalue();
            break;
            default :
            printf("option is invalid.\n");
            break;
        }

   }
}*/
//stack operations using arrays  in c........
/*#include<stdio.h>
#include<stdlib.h>
#define size 5

int top =-1;
int stack[size];
void push()
{

    if(top == size-1)
    printf("\nStack is full!.");
    else
    {
        int value;
        printf("Enter the data : \n ");
        scanf("%d",&value);
        top++;
        stack[top]=value;      
        printf("\nvalue pushed successfully.");

    }
}
void pop()
{
    if(top ==-1)
    printf("\nStack is empty!\n");
    else 
    {
        stack[top]=0;
        top--;
        printf("value is removed successfully.");
    }
}
void isempty()
{
    if(top == -1)
    printf("\ntrue\n");
    else
    printf("\nflase\n");
}
void isSOF()
{
    if(top == size-1)
    printf("\ntrue \n");
    else
    printf("\nfalse\n");
}
void display()
{
    printf("the elements in the stack are :\n");
    
    for(int i=top;i>=0;i--)
    printf("%d\n",stack[i]);

}
int main()
{
    int op;
    while(1)
    {
    
        printf("\n 1) push operation.");
        printf("\n 2) pop operation.");
        printf("\n 3) isempty.");
        printf("\n 4) is stack overflow.");
        printf("\n 5) display elements in the stack.");
        printf("\n Enter the option: ");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            isempty();
            break;
            case 4:
            isSOF();
            break;
            case 5 :
            display();
            break;
            default :
            printf("option is in valid!");
            break;
        }
    }
}*/
//queue implementation  using arrays in c....
/*#include<stdio.h>
#include<stdlib.h>
#define size 10

int rear =-1;
int front =-1;
int queue[size];
 void enqueue()
 {
    if (rear == size-1)
    printf("queue is full\n");\
    else
    {
        if(front == -1)
        front =0;
        rear++;
        printf("Enter the data :");
        scanf("%d",&queue[rear]);
        printf("data is enqueued successfully!.\n");

    }

}
void dequeue()
{
    if(front ==-1 || front > rear)
    printf("queue is empty1.\n");
    else
    {
        front++;
        printf("value is dequeued successfully.\n");

    }

}
void isempty()
{
    if(front ==-1|| front > rear )
    printf("\n TRUE \n");
    else 
    printf("\nFALSE\n");
}
void display()
{
    printf("the queue is :");
    for(int i=front; i<= rear ;i++)
    printf("  <--%d ",queue[i]);

}
 void isQIF()
 {
    if(rear == size-1)
    printf("\nTRUE\n");
    else
    printf("\n FALSE\n");
 }
 int main()
 {
    int op;
    while (1)
    {
        printf("\n");
        display();
        printf("\n");
        printf("\nchoose the option : \n");
        printf("1) enqueue operation.\n");
        printf("2) dequeue operation.\n");\
        printf("3) isempty.\n");
        printf("4) is queue is full.\n");
        printf("5) display.\n");
        printf("6) peek element\n");
        printf("Enter the option : ");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            isempty();
            break;
            case 4:
            isQIF();
            break;
            case 5:
            display();
            break;
            default :
            printf("option is invalid!.\n");
            break;
        }
    }
    
 }*/
// stack implementatin using linkedlists in c....
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct node *link;
};
struct node *top = NULL;
void push()
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node*));
    printf("\nEnter the data into node :");
    scanf("%d",&newnode->data);
    newnode->link = NULL;
    if(top == NULL)
    top = newnode;
    else
    {
        newnode->link = top;
        top = newnode;

    }
    printf("\n node is pushed successfully.\n");
}
void pop()
{
    struct node *temp = top;
    if(top == NULL)
    printf("\nstack is empty!.\n");
    else
    {
        top = temp ->link;
        temp->link = NULL;
        free(temp);
        printf("\nnode is poped successfully.\n");
    }
}
void isempty()
{
    if(top == NULL)
    printf("\n TRUE \n");
    else
    printf("\nFALSE\n");
}
void display()
{
    struct node *temp = top;
    printf("\nThe elements in the stack are :\n ");
    while(temp!=NULL)
    {
        printf("%d\n ",temp->data);
        temp=temp->link;
    }
    
}
void search()
{
    struct node *temp = top;
    int search;
    printf("Enter the search element: ");
    scanf("%d",&search);
    int count=0;
    while(temp != NULL)
    {
        if(temp->data ==search )
        break;
        temp=temp->link;
        count++;
        

    }
    printf("%d is found at %d node inthe stack.\n",search,count);
}
int main()
{
    int op;
    while(1)
    {
        printf("\n");
        display();
        printf("\n");
        printf("\nChoose the option :\n");
        printf("1) push the node into stack.\n");
        printf("2) pop the node in the stack.\n");
        printf("3) is stack is empty.\n");
        printf("4) search the element inthe stack.\n");
        printf("5) display the elements in the stack.\n");
        printf("Enter the option : ");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            isempty();
            break;
            case 4:
            search();
            break;
            case 5:
            display();
            break;
            default :
            printf("option is invalid!.\n");
            break;
        }


    }
}*/
//queue implementation using linkedlists in c.....
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct node* link;
};
struct node *front = NULL;
struct node *rear =NULL;
void enqueue()
{
    struct node*newnode = (struct node*)malloc(sizeof(struct node*));
    printf("Enter the data into node: ");
    scanf("%d",&newnode->data);
    newnode->link =NULL;
    if(front == NULL)
    front = rear = newnode;
    else
    {
        rear->link =newnode;
        rear =newnode;

    }
    printf("\nvalue is enqueued successfully.\n");
}
void dequeue()
{
    struct node* temp = front;
     if(front == NULL)
     printf("queue is empty!.\n");
     else
     {
        front = front->link;
        temp->link =NULL;
        free(temp);
        printf("value is dequeued successfully.\n");
     }
}
void isempty()
{
    if(front == NULL)
    printf("\n TRUE \n");
    else
    printf("\n FALSE \n");
}
void search()
{
    int search;
    printf("Enter the search element :");
    scanf("%d",&search);
    struct node *temp =front;
    int count =0;
    if(front == NULL)
    printf("queue is empty!.\n");
    else
    {
        while(temp != NULL)
        {   
                if(temp->data == search)
                {
                printf("%d is found in the %d node",search,count);
                break;
                }
                temp =temp->link;
                count++;
        }
        if(temp == NULL)
        printf("value is not present in the list.\n");
        
    }

}
void display()
{
    struct node* temp =front;
    printf("The queue is : ");
    while(temp != NULL)
    {
        printf(" <---%d ",temp->data);
        temp =temp->link;
    }
}
int main()
{
    int op;
    while (1)
    {
        printf("\n");
        display();
        printf("\n");
        printf("\nchoose the option : \n");
        printf("1) enqueue operation.\n");
        printf("2) dequeue operation.\n");\
        printf("3) isempty.\n");
        printf("4) search element in the queue.\n");
        printf("5) display.\n");
        printf("Enter the option : ");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            isempty();
            break;
            case 4:
            search();
            break;
            case 5:
            display();
            break;
            default :
            printf("option is invalid!.\n");
            break;
        }
    }

}*/
// in the another form .......
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

};

struct node *front = NULL;
struct node *rear = NULL;


void Enqueue()
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node*));
    printf("Enter the data into queue: ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    if( rear == NULL)
    front = rear = newnode;
    else 
    {
        rear->next = newnode;
        rear = newnode;

    }
    printf("value is enqueued.\n");
}
void Dequeue()
{
    if(rear == NULL)
    printf("queue is empty!\n");
    else 
    {
        struct node *temp = front;
        front = front ->next;
        free(temp);
        printf("value is Deueued ssuccessfully.\n");

    }
    
}
void display()
{
    if(rear == NULL)
    printf("queue is empty!.\n");
    else 
    {
        printf("\nThe queue is :");
        struct node * temp = front;
        while(temp != NULL)
        {
            printf("<--- %d",temp->data);
            temp = temp->next;
        }
    }
    printf("\n");
}
void searchinqueue()
{
    int key;
    printf("Enter the search element :");
    scanf("%d",&key);
    int count =0;
    struct node * temp = front;
    while(temp != NULL)
    {
        if(temp->data == key)
        printf("element found at %d\n",count);
        break;
        temp = temp->next;
        count++;
    }

}
int main()
{
    int op;
    while(1)
    {
        printf("\nChoose the option :\n");
        printf(" 1) Enqueue operation.\n");
        printf("2) Dequeue operation.\n");
        printf("3) display operation.\n");
        printf("4) search element in the queue.\n");
        printf("5) Exit\n");
        printf("\n Enter the option.\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            Enqueue();
            break;
            case 2:
            Dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            searchinqueue();
            break;
            case 5:
            exit(0);
            default :
            printf("Invalid option! \n");
            


        }
    }
}
