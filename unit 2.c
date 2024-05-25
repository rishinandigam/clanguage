//2.Write a c Program to implement insert at begin and delete from end in a singly linked list. 
/*#include<stdio.h>
#include<stdlib.h>
struct node *head =NULL;
struct node
{
    int data;
    struct node * next;
};
void printlist ()
{
    struct node *p  = head;
    printf("\n the list is : ");
    while(p!= NULL)
    {
        printf("%d ---->",p->data);
        p= p->next;

    } 
}
void insertatbegin()
{
    struct node* temp= (struct node*)malloc (sizeof(struct node*));
    temp->data = 5;
    temp->next =NULL;

        struct node *p =head;
        temp->next = p;
        head = temp;
    
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
int main()
{
    struct node* first = (struct node*)malloc(sizeof(struct node*));
    first ->data =10;
    first ->next =NULL;
    struct node *second = (struct node*)malloc(sizeof(struct node*));
    second->data =20;
    second ->next =NULL;
    struct node * third= (struct node*)malloc(sizeof(struct node*));
    third ->data  =30;
    third ->next = NULL;
     // here the linking starts..
     head = first ;
     first ->next =second ;
     second ->next =third ;

     //printing  the data in the nodes....
     printlist();

     //inserting a node at the end
      insertatbegin();

     //again printing  the data in the nodes....
     printlist();


    //deletind a node at end....
    deleteatend ();
    
     //again printing  the data in the nodes....
    printlist();

    
}*/
//3.Write a c Program to implement insert at end and delete from begin in a singly linked list.
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};
struct node * head =NULL;
void printlist ()
{
    struct node *p  = head;
    printf("\n the list is : ");
    while(p != NULL)
    {
        printf("%d ---->",p->data);
        p= p->next;

    } 
}
void insertatend()
{
    struct node* temp =(struct node*)malloc(sizeof(struct node*));

    temp->data =40;
    temp->next = NULL;
    
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
void deleteatstart()
 {
    struct node *p =head ;
     head = p->next;
     free(p);
 }
int main()
{
    struct node* first = (struct node*)malloc(sizeof(struct node*));
    first ->data =10;
    first ->next =NULL;
    struct node *second = (struct node*)malloc(sizeof(struct node*));
    second->data =20;
    second ->next =NULL;
    struct node * third= (struct node*)malloc(sizeof(struct node*));
    third ->data  =30;
    third ->next = NULL;
     // here the linking starts..
     head = first ;
     first ->next =second ;
     second ->next =third ;

     //printing  the data in the nodes....
     printlist();

     //inserting a node at the end
     insertatend();

     //again printing  the data in the nodes....
     printlist();

     //deleting a node at begin..
     deleteatstart();

     //check whether value is deleted..
     printlist();
    
}*/
//4.Write a c Program to implement reverse and display of the singly linked list. 
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
    
};
struct node * head =NULL;
void printlist ()
{
    struct node *p  = head;
    printf("\n the list is : ");
    while(p!= NULL)
    {
        printf("%d ---->",p->data);
        p= p->next;

    } 
}
void reverselist()
{
    struct node* p =head;
    while(p!= NULL)
    {
        p=p->next;
    }
    p = head;
    struct node *q =head;
    
}
int main()
{
    struct node* first = (struct node*)malloc(sizeof(struct node*));
    first ->data =10;
    first ->next =NULL;
    struct node *second = (struct node*)malloc(sizeof(struct node*));
    second->data =20;
    second ->next =NULL;
    struct node * third= (struct node*)malloc(sizeof(struct node*));
    third ->data  =30;
    third ->next = NULL;
     // here the linking starts..
     head = first ;
     first ->next =second ;
     second ->next =third ;


     //printing  the data in the nodes....
     printlist();


}*/
