//hello world....
/*#include<stdio.h>
int main()
{
   printf("hello world");
}*/
//matrix multiplication......
/*#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;
    int mata[10][10],matb[10][10];
    printf("enter the rows and coloumns of mat a :\n");
    scanf("%d%d",&r1,&c1);
    printf("enter the elements into matrix a : \n ");
    for (int i=0 ;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&mata[i][j]);
        }
    }
    printf("the given matrix a is : \n" );
    for (int i=0 ;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d ",mata[i][j]);
        }
        printf("\n");
    }
    printf("enter the rows and coloumns in the matrix b :\n");
    scanf("%d%d",&r2,&c2);
    printf("enter the elements into matrix b : \n ");
    for (int i=0 ;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&matb[i][j]);
        }
    }
    printf("the given matrix b is : \n");
    for (int i=0 ;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",mata[i][j]);
        }
        printf("\n");
    }
        if(r1==c1)
        {
            printf("the multiplied matrix is : \n");
            int matc[10][10];
            for (int i=0;i<r1 ;i++){
                for(int j=0;j<c2;j++){
                    matc[i][j]=0;
                    for (int k=0;k<c1;k++)
                    matc[i][j]+=mata[i][k]*matb[k][j];
                    printf("%d ",matc[i][j]);

                }
                printf("\n");
            }
        }
        else 
        printf("the multiplication of matrix is m=not possible");
    
}*/
//finding the even number..
/*#include<stdio.h>
int main()
{
    int n;
    printf ("enter a number : ");
    scanf("%d",&n);
    if(n%2==0)
    printf("given number is a even number ");
    else  
    printf("given number is odd number ");
}*/
//understanding pointers.......
/*#include<stdio.h>
int main()
{
    int a=10;
    int *ptr =&a;
    printf("%d\n",&a);
    printf("%d\n",ptr);
    printf("%d",*ptr); 
    int n = &*ptr;
    printf("%d\n",n);
}*/
/*string reverse....
#include<stdio.h>
int main()
{
    int i,len=0;
    char str1[20];
    printf("enter a string : ");
    scanf("%s",str1);
    while (str1[len]!='\0')
    {
     len++;
    }
    printf("the length of string %d\n",len);   
    for(i=len;i>=0;i--)
    {
        printf("%c ",str1[i]);

    }
    
    return 0;
}*/
//simple and compound interest
/*#include<stdio.h>

#include<math.h>
int main()
{
    float p,t,r;
    printf("enter principle amount ,time ,rate of interest: ");
    scanf("%f%f%f",&p,&t,&r);
    float si=(p*t*r)/100;
     float ci= p*pow((1+(r/100)),t)-p;
    
    printf("the simple interest is : %.3f\n",si); 
    printf("the compound interest is : %.3f\n",ci); 
  return 0;
}*/
//bubblesorting of array
/*#include <stdio.h>
int main()
{
 int  n,arr [20];
 printf("enter the nof elements inthe array");
 scanf("%d",&n);
  printf("enter the elements into array :\n");
 for (int i = 0; i < n; i++)
 {
    scanf("%d ",&arr[i]);
 }
 printf("the elements before sorting : \n");
 for (int i = 0; i < n; i++)
 {
 printf("%d ",arr[i]);
    
 }
 int temp;
 for ( int i = 0; i < n - 1; i++) {
        for ( int j = 0; j < n - i - 1; j++) {
            
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
 }
    printf("the elements in the array after sorting \n");
    for (int i = 0; i < n; i++)
    {
      printf("%d", arr[i]); 
    }
}*/
//file operations.....
/*#include<stdio.h>
int main()
{
    FILE *fp1 ,*fp2;
    fp1= fopen("abc.txt", "w");
    char str[20] =" mr mark i am rishi";
    fprintf(fp1,str);
    fp2=fopen("def.txt","w");
    fp2=fp1;
fclose(fp1);
fclose(fp2);

}*/
//linear search ......
/*#include<stdio.h>
int main()
{
    int arr[10] ,n;
    printf("enter the nof elements inthe array : ");
    scanf("%d",&n);
    printf("the elements into array : ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    } 
    int search ,i;
    printf("enter the search element : ");
    scanf("%d",&search);
    for( i=0;i<n;i++)
    {
        if(arr[i]== search)
        break; 
    }
    if(i==n)
    printf("%d is found in the array .",search);
    else
    printf("%d is present in the position %d",search,i+1);
}*/
//printing two numbers....
/*#include<stdio.h>
int main()
{
    int p;
    int q;
    scanf("%d %d",&p,&q);
     
    printf("%d %d", p,q); 
    return 0;
}*/
//prime number programme
/*#include<stdio.h>
int main()
{
    int count =0;
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        count++;

    }
if(count==1)
printf("the given number is prime number");
else
printf("the given number is not a prime number");



}*/
//fabonnacci series.........
/*#include<stdio.h>
int main()
{
    int a=0,b=1,n,c;
    printf("enter the number of terms : ");
    scanf("%d",&n);
    if(n==0||n==1)
    printf("%d",n);
    for (int i=2;i<=n;i++)
    {c=a+b;
    a=b;
    b=c;
    printf("%d ",b);
    }
    

}*/
//quadratic equations.......
/*#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,disc,root1,root2,realpart,imaginarypart;
    printf("enter a,b ,c values : ");
    scanf("%lf%lf%lf",&a,&b,&c);
    disc=b*b-4*a*c;
    if(disc>0)
    {
        root1=(-b+sqrt(disc))/(2*a);
        root2=(-b-sqrt(disc))/(2*a);
        printf("root1 = %.2lf \n root2 = %.2lf ",root1,root2);
    }
    else if (disc==0)
    {
        root1=-b/(2*a);
        root2=-b/(2*a);
        printf("root1 =root2= %.2lf",root1);
    }
    else
    {
        realpart=-b/(2*a);
        imaginarypart=sqrt(-disc)/(2*a);
        printf("root1=%.2lf+%.2lfi\n",realpart ,imaginarypart);
         printf("root2=%.2lf+%.2lfi\n",realpart ,imaginarypart);
    }
}*/
//string palindrome
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],t[50];
    printf("enter the string : ");
    scanf("%s",str);
    printf("given string is : %s\n",str);
    strcpy(t,str);
    strrev(t);
    if(strcmp(t,str)==0)
    printf(" given string is palindrome");
    else
    printf("the given string is not a palindrome");

}*/
//armstrong number
/*#include<stdio.h>
int main()
{
    int n,r,temp=0,sum=0;
    printf("enter the number : ");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        sum+=r*r*r;
        n=n/10;
    }
    if (temp==sum)
    {
        printf("the given number is armstrong number ");

    }
    else
    printf("the given number is not an armstrong number");

}*/
//vivaa question..........in semister 1:1
/*#include<stdio.h>
int main()
{
    for(int i=1;i<=10;i++)
    {
    
        if(i==5)           
        continue;
         printf("%d\n",i);

    }
}*/
/*#include<stdio.h>
struct student {
    int rollno;
    char name[20];
    int age ;
};
int main()
{
    struct student s;
    printf("enter the student rollno : \n");
    scanf("%d",&s.rollno);
    printf("enter the name of the student : \n");
    scanf("%s",s.name);
    printf("enter the age of the student : \n");
    scanf("%d",&s.age);
    printf("Rollno : %d\n",s.rollno);
    printf("name : %s\n",s.name);
    printf("Age : %d\n",s.age);
}*/
/*#include<stdio.h>
int main()
{
    char str[20];
    scanf("%s",str);
    printf("%s",strrev(str));
}*/
//implementation of dynamic memory alloccation.......by malloc.
/*#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr;
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    ptr = (int*)malloc(n * sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    printf("Memory successfully allocated using malloc.\n");
    
    for (i = 0; i < n; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    
    int sum = 0;
    for (i = 0; i < n; ++i) {
        sum += ptr[i];
    }
    
    double average = (double)sum / n;
    printf("The average of the array elements is: %.2lf\n", average);
    
    free(ptr);
    return 0;
}*/
//implementation of  calloc function....
/*#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr;
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    ptr = (int*)calloc(n , sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    printf("Memory successfully allocated using malloc.\n");
    
    for (i = 0; i < n; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    
    int sum = 0;
    for (i = 0; i < n; ++i) {
        sum += ptr[i];
    }
    
    double average = (double)sum / n;
    printf("The average of the array elements is: %.2lf\n", average);
    
    free(ptr);
    return 0;
}*/
//single linked list creation and node manually.........
/*#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};  
void printlist (struct node** head)
{
    struct node* p = *head;
    
    while(p!=NULL)
    {
        printf("%d \n",p->data);
        p=p->link;
    }
}

int main()
{
    struct node* head =NULL;
    struct node* first = (struct node*)malloc(sizeof(struct node*));
    printf("enter element into first node : ");
    scanf("%d",&first->data);
    struct node* second =(struct node* )malloc(sizeof(struct node*));;
    printf("enter element into second  node : ");
    scanf("%d",&second->data);
    struct node* third =(struct node* )malloc(sizeof(struct node*));
    printf("enter element into  third node : ");
    scanf("%d",&third ->data);
    head = first;
    first->link = second ;
    second -> link =third ;
    third ->link=NULL;
     printlist(&head);
     printf("change the element in the second node : ");
     scanf("%d",&second ->data);
     printlist(&head);

}*/
//single linkedlist operations ........
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct node* link;

};
void insertion_at_the_end(struct node ** head )
{
    struct node *temp= (struct node *)malloc (sizeof(struct node*));
    int value ;
    printf("enter the value : ");
    scanf("%d",&value);
    temp->data=value;
    temp->link =NULL;
    struct node *p=*head;
    if(p==NULL)
    {
        *head =temp;
    }   
    else
    {
        while (p->link!=NULL)
        {
            p=p->link;

        }
        p->link=temp;

    }
    printf("value is inserted successfully\n");
    
}
void printlist (struct node** head)

{
    struct node* p = *head;
    printf("the elements are : ");
    while(p!=NULL)
    {
        
        printf("%d--->",p->data);
        p=p->link;
    }
}
void insertion_at_the_specified_position(struct node **head)
{
    int position ,value;
    printf("enter the position and value : ");
    scanf("%d%d",&position,&value);
    int count =1;
    struct node *p=*head;
    while (p!=NULL)
    {
        if(count==position)
        break;
        p=p->link;
        count++;

    }
    if(p==NULL)
    printf("the positon is invalid\n");
    else
    {
        struct node* new =(struct node *)malloc(sizeof(struct node*));
        new->data=value;
        new ->link=p->link;
        p->link=new;
        printf("value is inserted successfully \n");
        
        
    }
}
void delete_a_node(struct node **head)
{
    int target ;
    printf("enter the target : ");
    scanf("%d",&target );
    struct node* p= *head;
    struct node* q=NULL;
    while(p!=NULL)
    {
        if(p->data==target)
        break;
        q=p;
        p=p->link;
    }
    if(p==NULL)
    printf("target is not present in the list \n");
    else
    {
        q->link=p->link;
        p->link=NULL;
        free(p);
        printf("node is deleted successfully\n");
        
    }

}
void search(struct node ** head)
{
    int target ;
    printf("enter the search element : ");
    scanf("%d",&target);
    struct node *p=*head; 
    int count =1;
    while(p!=NULL)
    {  
        count ++;
        if(p->data==target)
        {
            printf("element is present in the list at the position %d",count);
        break;
        
        }  
        p=p->link;
    }
    
        
        
        
}
int main ()
{
    struct node * head =NULL;
    //printf("single linked list implementation\n");
    while (1)
    {
        int option  ;
        printf("enter an option : \n");
        printf("1)inserting anode at the end .\n");
        printf("2)printing the list\n");
        printf("3)insertion at the specified position \n");
        printf("4)delete a node \n");
        printf("5)search an element \n");
        printf("6)exit from   the list\n");
        scanf("%d",&option);
        if(option == 1)
        insertion_at_the_end(&head);
        else if (option ==2)
        printlist(&head);
        else if(option== 3)
        insertion_at_the_specified_position(&head);
        else if(option == 4)
        delete_a_node(&head);
        else if(option==5)
        search(&head);
        else {
        printf("successfully exited from the list");
        break;
        }

    }

}*/
//doublelinnked list creation by manually........
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
void printlist(struct node**head)
{
    struct node* p= *head;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->right;

    }
}
   int main()
{
    struct node* head = NULL;
    struct node* first=(struct node*)malloc(sizeof(struct node*));
    first->data=10;
    first->left =NULL;
    head=first;
    struct node* second =(struct node*)malloc(sizeof(struct node*));
    second->data=20;
    second->left=first;
    first->right=second;
    struct node* third=(struct node*)malloc(sizeof(struct node*));
    third->data=30;
    third->left=second;
    second ->right=third;
    struct node* fourth=(struct node*)malloc(sizeof(struct node*));
    fourth->data=40;
    third->right=fourth;
    fourth->left=third;
    fourth->right=NULL;
    printf("the elements in the list are : ");
    printlist(&head);

}*/
//doubly linked list operations.......in c
/*#include<stdio.h>
#include<stdlib.h>
struct node
 {
    int data;
    struct node* right;
    struct node* left;
};
 void insertion_at_the_end(struct node ** head)
{
    struct node* temp =(struct node*)malloc(sizeof(struct node*));
    int value;
    printf("Enter the value : ");
    scanf("%d",&value);
    temp->data=value;
    temp->right=NULL;
    temp->left=NULL;
    struct node *p =*head;   
    if(p==NULL)
        *head = temp;
    else
    {
        while(p->right!=NULL)
        {
            p=p->right;
        }
        p->right=temp;
        temp->left= p;
        
    }
        printf("value is inserted successfully\n\n");

}
void  insertion_at_the_specified_position(struct node ** head)
{
    struct node* temp  = (struct node*)malloc(sizeof(struct node*));
    int position,value;
    printf("Enter the position and the value :");
    scanf("%d %d",&position,&value);
    temp->data= value;
    temp->left= NULL;
    temp->right=NULL;
    struct node*p = *head;
    int cnt =1;
    while(p!=NULL)
    {
        if(position == cnt)
        break;
        p=p->right;
        cnt++;
    }
    if(p==NULL)
    printf("Invalid position!\n");
    else
    {
        temp->right =p->right;
        p->right->left=temp;
        p->right=temp;
        temp->left=p;
        printf("value is inserted successfully ! \n");
    }
   
}
void printlist(struct node **head)
{
    struct node*p =*head;
    printf("The elements are : \n");
    while(p!=NULL)
    {
        printf("%d \t",p->data);
        p=p->right;
    }
    printf("\n");
}
void deletion_of_node(struct node **head)
{
    int value ;
    printf("Enter the deletion value : ");
    scanf("%d",&value);
    struct node *p = *head;
    while(p!=NULL)
    {
        if(p->data== value)
        break;
        p=p->right;
    }
    if(p==NULL)
    printf("value is not present in the list\n");
    else
    {

        struct node *q =p->left;
        if(q== NULL)
        {
            if(p->right == NULL)
            *head =NULL;
            else
            {
                *head = p->right;
                p->right->left =NULL;
            }

        }
        else
        {
            q->right = p->right;
            if(p->right != NULL)
            p->right->left =q;
            p->right =NULL;
            p->left =NULL;
            free(p);
        }
        printf("value is deleted successfully\n ");

        
    }
}
void  search(struct node** head )
{
    struct node *p = *head ;
    int search;  
    int count =0;
    printf("Enter the search element :");
    scanf("%d",&search);
    while(p->right != NULL)
    {
        if(p->data == search )
        break;
        p=p->right;
        count++;
    }
    printf("%d is is found in the %d node\n",search, count);

}
int main()
{
    struct node *head =NULL;
    
    while(1)
    {
        int option;
        
        printf("1)insertion at the end.\n2)insertion at the specified position.\n3)deletion of node .\n4)searcing an element.\n 5)printing the elements.\n ");
        printf("\nEnter an option : ");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
            insertion_at_the_end(&head);
            break;
            case 2:
            insertion_at_the_specified_position(&head);    
            break;
            case 3:
            deletion_of_node(&head);
            break;
            case 4:
            search(&head);
            break;
            case 5: 
            printlist(&head);
            break;
            default :
            printf("option is invalid\n ");
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
        queue[front]=0;
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
// binary search tree ...
/*#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node * left ;
    struct node *right;
};

struct node *newNode( int value)
{
   struct node* temp = (struct node*)malloc(sizeof(struct node*));
   temp->data = value;  
   temp->left = NULL;
   temp->right = NULL;
   return temp; 
}
struct node* insert(struct node* root, int key) {
   
    if (root == NULL)
     return newNode(key);
     else
     {
        if (key < root->data)
            root->left = insert(root->left, key);
        else if (key > root->data)
            root->right = insert(root->right, key);  
        return root;
     }
}
void  inordertraversal(struct node* temp)
{
    if(temp != NULL)
    {
        inordertraversal(temp->left);
        printf("%d  ",temp->data);
        inordertraversal(temp->right);
    }
}
void preordertraversal( struct node * temp )
{
    if(temp != NULL)
    {
        printf("%d  ",temp->data);
        preordertraversal(temp->left);
        preordertraversal(temp->right);

    }
}
void postordertraversal( struct node * temp )
{
    if(temp != NULL)
    {
        
        postordertraversal(temp->left);
        postordertraversal(temp->right);
        printf("%d  ",temp->data);
    }
}

int main()
{
    struct node* root = NULL;
    int op;
    while(1)
    {
        printf("Choose the operation \n");
        printf("1) insertion operation \n");
        printf("2) removing operation \n");
        printf("3) search operation \n");
        printf("4) minimum value in the tree \n");
        printf("5) maximum value  in the tree \n");
        printf("6) inorder traversal\n");
        printf("7) preorder traversal\n");
        printf("8) postorder traversal \n");
        printf("9) height of the tree \n");
        printf("10) exit from the programme\n");\
        printf("Enter the option : ");
        scanf("%d",&op);
        switch(op)
        {
            case 1: 
            {
                printf("\nEnter the value :");
                int value;
                scanf("%d",&value);
                root =  insert( root ,value);
                printf("value is insserted successfully\n");
            }
            break;
            case 2:
            printf(" removal operation\n");
            break;
            case 3: 
            printf("search operation \n");
            break;
            case 4: 
            printf("minimum value in the list\n");
            break;
            case 5:
            printf("maximum value in the tree\n");
            break;
            case 6:
            {
                printf("\n The values inorder are :");
                inordertraversal(root);
                printf("\n");
            }
            break;
            case 7: 
            {
                printf("The list in preorder is : ");
                preordertraversal(root);
            }
            break;
            case 8:
           {
                printf("The list in postorder is : ");
                postordertraversal(root);
            }
            break;
            case 9:
            printf("height of the tree \n");
            break;
            case 10:
            exit(0);
            default :
            printf("Option is invalid \n");
            break;
        }
    }
    return 0;
}*/ 
// failed in insertion nodes
 