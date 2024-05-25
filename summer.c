#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node * left ;
    struct node *right;
};

struct node *newNode( int data)
{
   struct node* temp = (struct node*)malloc(sizeof(struct node*));
   temp->data = data;
   temp->left = NULL;
   temp->right = NULL;
   return temp; 
}
struct node * insert ( struct node *mynode , int data)
{
    if (mynode == NULL)
    return newNode(data);
    else
    {
        if( data < mynode->data)
        mynode->left = insert(mynode->left, data);
        else 
        mynode->right= insert(mynode->right ,data);
    return mynode;
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
            printf("preorder traversal\n");
            break;
            case 8:
            printf(" post order traveresal\n");
            break;
            case 9:
            printf("height of the tree \n");
            break;
            case 10:
            exit(0);
        }
    }
}