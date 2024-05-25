#include<iostream>
using namespace std;
struct Node 
{
    int data;
    Node * next;

};
Node* createlist(Node* head)
{
    Node* newnode = (Node*)malloc(sizeof(Node));
    newnode->next = NULL;
    cout<<endl<<"\nEnter  the data into node:";
    cin>>newnode->data;
    if(head == NULL)
    head = newnode;
    else 
    {
        Node* temp = head;
        while(temp ->next != NULL)
        {
            temp= temp->next;

        }
        temp ->next = newnode;
        
    }
    return head;
}
Node* insertatbegin(Node *head)
 {
    Node* newnode= (Node*)malloc(sizeof(Node));
    newnode->next = NULL;
    cout<<"\nEnter the data into node :";
    cin>>newnode->data;
    Node* temp = head;
    newnode ->next = temp;
    head = newnode;

    return head;
 }
Node* insertatposition( Node *head)
 {
    int count =0;
    Node* NodeCount = head;
    while( NodeCount != NULL)
    {
        count++;
        NodeCount = NodeCount->next;
    }
    Node* newnode = (Node*)malloc(sizeof(Node));
    newnode->next = NULL;
    int position;
    cout<<"\nEnter the position :";
    cin>>position;
    if(count < position)
    cout<< "Invalid position\n";
    else
    {
        cout<<" Enter the data into node: ";
        cin>>newnode->data;
        Node* temp = head;
        for(int i=0; i< position -1; i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;

    }
    return head ;

 }
Node* insertatend(Node *head)
{
    Node* newnode = (Node*)malloc(sizeof(Node));
    newnode->next = NULL;
    cout<<endl<<"\nEnter  the data into node:";
    cin>>newnode->data;
    if(head == NULL)
    head = newnode;
    else 
    {
        Node* temp = head;
        while(temp ->next != NULL)
        {
            temp= temp->next;

        }
        temp ->next = newnode;
        
    }
    return head;
}
Node* deleteatstart(Node *head)
 {
    if(head == NULL)
    cout<<" List is empty!";
    else
    {
        Node* temp = head ;
        head = head ->next;
        free(temp);
       
    } 
    return head;
 }
Node* deleteatposition(Node *head)
{
    int count =0;
    Node* NodeCount = head;
    while( NodeCount != NULL)
    {
        count++;
        NodeCount = NodeCount->next;
    }
    int position;
    cout<<"\nEnter the position :";
    cin>>position;
    if(count < position)
    cout<< "Invalid position\n";
    else 
    {
        Node* temp = head;
        Node* prevtemp = NULL;
        for(int i=0; i< position -1; i++)
        {
            prevtemp = temp;
            temp = temp->next;

        }
        prevtemp ->next= temp ->next;
        free(temp);
    }
return head;

}
Node* deleteatend(Node *head)
{
    Node* temp =head ;
    Node* prevtemp = NULL;
    while(temp != NULL)
    {
        prevtemp  = temp ;
        temp =temp->next;

    }
    prevtemp ->next = NULL;
    free(temp);
    return head;
}
Node* deletebyvalue(Node *head)
{
    int target;
    printf("\nEnter the target element :");
    scanf("%d",&target);
    Node *p =head;
    Node *q =NULL;
    while(p!=NULL)

    {
        if(p->data == target)
        break;
        q=p;
        p=p->next;
    }
    if(p == NULL)
    cout<<"\nElement is not present in the list .";
    else
    {
        q->next =p->next;
        free(p);
    
    }
    return head;
    
}
Node* searchelement(Node *head)
{
    Node* temp = head ;
    int value;
    cout<< "\nEnter the value :";
    cin>>value;
    int count = 0;
    while(temp != NULL)
    {
        count++;
        if(temp ->data == value)
        break;
        temp = temp->next;

    }
    cout << "\nValue is present in the "<<count<<"node";
    return head;
}
Node* reverselist(Node *head)
{
     Node *prevnode , *currentnode , *nextnode;
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
    return head;
}
void Display(Node *head)
 {
    Node* temp = head;
    if( head == NULL)
    {
        cout<< "List is empty|\n";
        return;
    }
    else 
    {
        cout<< "The list is  :";
        while(temp != NULL)
        {
            cout<<"\t"<< temp->data<<"--->";
            temp =temp->next;
        }
    }


 }
Node* DeleteDuplicates(Node* head)
{
    Node *temp = head;
    while(temp->next != NULL )
    {
       
        if(temp->data == temp->next->data)
        {
            Node *curr = temp->next;
            temp->next = temp->next->next;
            free(curr);
        }
        else
        {
            temp =temp->next;
        }
    }
    return head;
}
Node* CreateAnohterList()
{
    
    Node* head = nullptr;
    
    int  op;
    while(1)
    {
         cout<< "\n\nperforming the operations on  list\n\n";
        cout<<endl;
        Display(head);
        cout<<endl;
        cout<<"\n1) create multiple list.";
        cout<<"\n2) display elements "; 
        cout<<"\n3) insertion at the begining.";                 
        cout<<"\n4) insertion at the specified position."; 
        cout<<"\n5) insertion at the end."; 
        cout<<"\n6) delete a node at starting.";
        cout<<"\n7) delete a node at specified position.";
        cout<<"\n8) delete a node at the end.";
        cout<<"\n9) delete a node by its value. ";
        cout<<"\n10) search an element in the list";
        cout<<"\n11) reverse the list .";
        cout<<"\n12) delete duplicates in the sorted list";
        cout<<"\n13) return to main function";
        cout<<"\nEnter the option : ";
        cin>>op;
        switch(op)
        {
            case 1:
             head =  createlist(head);
            break;
            case 2:
            Display(head);
            break;
            case 3:
            head = insertatbegin(head);
            break;
            case 4:
             head = insertatposition(head);
            break;
            case 5:
             head = insertatend(head);
            break;
            case 6:
             head = deleteatstart(head);
            break;
            case 7:
             head = deleteatposition(head);
            break; 
            case 8:
             head = deleteatend(head);
            break;
            case 9:
             head = deletebyvalue(head);
            break;
            case 10:
             head = searchelement(head);
            break;    
            case 11:
             head = reverselist(head);
            break;  
            case 12: 
            head = DeleteDuplicates(head);
            break; 
            case 13:
            return head;
            break;
            default :
            printf("Option is  invalid \n");
            break;
        }
    }


}
Node* MergeList(Node* head , Node* head1)
{
    Node* temp = head;
    while(temp->next != nullptr)
    {
        temp =temp ->next;

    }
    temp->next  = head1;
    return head;
}
int CompareTwoLists( Node* headA ,Node* headB)
{

    while( headA != nullptr && headB != nullptr)

    {
        if(headA->data == headB->data)
        {
            headA = headA->next;
            headB = headB->next;
            return 1;
        }
        else 
        return 0;
    
    }   

    return 0;
}
 Node* MergePoint(Node* head , Node* head1)
 {
    Node* temp = head;
    while(temp != nullptr)
    {
        if( temp-> next == head1)
        {
            cout<<"\n\n"<<temp->next->data<<endl;
            break;

        }
        temp= temp->next;
    }
    return head;

 }

int main()
{
    
    Node* head = NULL;
    Node* head1= NULL;
    int  op;
    while(1)
    {
         
        cout<<endl;
        Display(head);
        cout<<endl;
        cout<<"\n1) create multiple list.";
        cout<<"\n2) display elements."; 
        cout<<"\n3) insertion at the begining.";                 
        cout<<"\n4) insertion at the specified position."; 
        cout<<"\n5) insertion at the end."; 
        cout<<"\n6) delete a node at starting.";
        cout<<"\n7) delete a node at specified position.";
        cout<<"\n8) delete a node at the end.";
        cout<<"\n9) delete a node by its value. ";
        cout<<"\n10) search an element in the list";
        cout<<"\n11) reverse the list .";
        cout<<"\n12) delete duplicates in the sorted list";
        cout<<"\n13) create another list";
        cout<<"\n 14) display second list";
        cout<<"\n 15) merge the list";
        cout<<"\n 16) compare two lists.";
        cout<<"\nMerge point of a merged list ";
        cout<<"\nEnter the option : ";
        cin>>op;
        switch(op)
        {
            case 1:
             head =  createlist(head);
            break;
            case 2:
            Display(head);
            break;
            case 3:
            head = insertatbegin(head);
            break;
            case 4:
             head = insertatposition(head);
            break;
            case 5:
             head = insertatend(head);
            break;
            case 6:
             head = deleteatstart(head);
            break;
            case 7:
             head = deleteatposition(head);
            break; 
            case 8:
             head = deleteatend(head);
            break;
            case 9:
             head = deletebyvalue(head);
            break;
            case 10:
             head = searchelement(head);
            break;    
            case 11:
             head = reverselist(head);
            break;  
            case 12: 
            head = DeleteDuplicates(head);
            break; 
            case 13:
             head1 = CreateAnohterList();
            break;
            case 14:
             Display(head1);
             break;
            case 15: 
              head = MergeList(head , head1);
            break;
            case 16:
            {
                int a = CompareTwoLists(head , head1);
                if( a== 1)
                cout<<"\n\nlists are equal\n\n ";
                else 
                cout<<"\n\n lists are not equal\n\n";
            } 
             break;
             case 17:
             head = MergePoint(head , head1 );
             break;
            default :
            exit(0);            
        }
    
        
    }

}

