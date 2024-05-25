//  nested stuctures of candidate details 
#include <stdio.h>
#include <stdlib.h>
struct Candidate
{
    int id;
    char name[32];
    char qualification[32];
    long long int phoneNumber;
};
struct Node
{
    struct Candidate data;
    struct Node *link;
};
void readCandidateDetails(struct Node *newNode)
{
    printf("\nEnter the id number :");
    scanf("%d", &newNode->data.id);
    printf("\n Enter the name :");
    scanf("%s", newNode->data.name);
    printf("\nEnter the qualification :");
    scanf("%s", newNode->data.qualification);
    printf("Enter the phone number :");
    scanf("%lld", &newNode->data.phoneNumber);
}

struct Node *push(struct Node *head)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    readCandidateDetails(newNode);
    newNode->link = NULL;
    if (head == NULL)
        return newNode;
    else
    {
        newNode->link = head;
        return newNode;
    }
}

int isEmpty(struct Node *node) {
    if(node == NULL)
        return 1;
    return 0;
}

struct Node *pop(struct Node *head)
{
    if (isEmpty(head))
    {
        printf("list is empty\n");
        return;
    }
    struct Node *temp = head;
    head->link = head;
    printf("Node with Candidate ID=%d is deleted \n", temp->data.id);
    free(temp);
    return head;
}

void display(struct Node *head)
{
    if (isEmpty(head))
    {
        printf("list is empty\n");
    }
    else
    {
        struct Node *temp = head;
        printf("THE DETAILS ARE :\n");

        while (temp != NULL)
        {
            printf(" \nID NO :%d\n", temp->data.id);
            printf("NAME : %s\n", temp->data.name);
            printf("QUALIFICATION : %s\n", temp->data.qualification);
            printf("PHONE NUMBER : %lld \n", temp->data.phoneNumber);
            temp = temp->link;
        }
    }
}
void top(struct Node *head)
{
    if (isEmpty(head))
    {
        printf("list is empty\n");
        return;
    }
    display(head);
}
int main()
{
    struct Node *head = NULL;
    int choice = 0;
    do
    {
        printf("\n1) push opertion\n");
        printf("2) pop  operation\n");
        printf("3) display operation\n");
        printf("4) top element \n");
        printf("5) EXIT \n");
        printf("Enter your choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            head = push(head);
            break;
        case 2:
            head = pop(head);
            break;
        case 3:
            display(head);
            break;
        case 4:
            top(head);
            break;
        case 5:
            exit(0);
        default:
            printf("Option is invalid \n");
        }

    } while (1);
}