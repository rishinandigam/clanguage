// linear search .........
/*#include<stdio.h> 
int main()
{
    int n, a[10], search;
    printf("Enter the no of elements into the array : ");
    scanf("%d",&n);
    printf("Enter fthe elements into the array : ");
    for (int i=0;i< n ;i++)
         scanf("%d",&a[i]);
    printf("The elements in the array : ");
    for (int i=0;i<n ;i++)
    printf("%d  ",a[i]);
    printf("\n");
    printf("Enter the search element : ");
    scanf("%d",&search);
    int  i;
    for ( i=0; i<n;i++)
    {
        if (a[i] == search)
        {
            printf("The element found at %d position. ", i+1);
            break;
        }
    }
    if(i== n )
    printf("The element not present in the array ");
}*/
// Binary seaarch ................
/*#include<iostream>
using namespace std;
int main()
{
    int n, a[10];
    cout<<"Enter the no of elements in the array :";
    cin>>n;
    cout<<"Enter the elements into the array : ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<< endl<<"Enter the search element : ";
    int search;
    cin>>search;
    int low =0;
    int high = n-1;
    int mid;

    while(low <= high)
    {
        mid = (low + high)/2;
        
        if (a[mid] == search)
        {
            cout<<"The element found at "<<mid<<"position";
            break;
        }
        else if(a[mid] < search )
         low = mid + 1;
         else if ( a[mid] > search)
         {
            high = mid -1;
         }
        
    }
    if ( low > high )
    {
        cout<< "The element was not present in the array"<<endl;
    }

}*/
//bubble sort ..........
/*#include<iostream>
using namespace std;
int main()
{
    int n, a[10];
    cout<<"Enter the no of elements in the array : ";
    cin>>n;
    cout<<"Enter elements in the array : ";
    for (int i=0; i<n; i++)
    cin>>a[i];
    cout<<"\nThe elements before sorting : ";
    for(int i=0;i<n;i++)
     cout<<a[i]<<"    ";
     for (int i=0; i< n-1; i++)
     {
        for(int j =0; j < n-i-1;i++)
        {
            if (a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
     }
    cout<<"\nThe elements after sorting  : ";
        for (int i=0; i<n; i++)
     cout<<a[i]<<"    ";

}*/
// insertion sort.........
/*#include<iostream>
using namespace std;
int main()
{
    int n, a[10];
    cout<<"Enter the no of elements in the array : ";
    cin>>n;
    cout<<"Enter elements in the array : ";
    for (int i=0; i<n; i++)
    cin>>a[i];
    cout<<"\nThe elements before sorting : ";
    for(int i=0;i<n;i++)
     cout<<a[i]<<"    ";
     for (int i=1 ; i<n ;i++)
     {
        int j= i-1;
        int temp = a[i];
        while(j>= 0 && temp <= a[j])
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1]  =temp ;
     }
    cout<<"\nThe elements after sorting  : ";
        for (int i=0; i<n; i++)
     cout<<a[i]<<"    ";


}*/
// selection sort ...
/*#include<iostream>
using namespace std;
int main()
{
    int n, a[10];
    cout<<"Enter the no of elements in the array : ";
    cin>>n;
    cout<<"Enter elements in the array : ";
    for (int i=0; i<n; i++)
    cin>>a[i];
    cout<<"\nThe elements before sorting : ";
    for(int i=0;i<n;i++)
     cout<<a[i]<<"    ";
    for(int i=0;i<n;i++)
    {
        int min =i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            min =j;
        }
        int temp =a[i];
        a[i]=a[min];
        a[min]=temp;
    

    }
    cout<<"\nThe elements after sorting  : ";
        for (int i=0; i<n; i++)
     cout<<a[i]<<"    ";

}*/
#include<iostream>
using namespace std;
struct node 
{
    int data;
    node* next;
};
node* head = NULL;
void insertionAtEnd()
{
    node* newnode = (node*)malloc (sizeof(node*));
    newnode->next= NULL;
    cout<<"Enter the data into node : ";
    cin>>newnode->data;
    if (head == NULL)
    {
        head = newnode;
    }
    else 
    {
        node* temp = head;
        while(temp ->next != NULL)
        {
            temp = temp->next;

        }
        temp->next = newnode;
        newnode->next = nullptr;
    }
    printf("node inserted success fully .\n");
}
void insertionAtBegining()
{
    node* newnode = (node*)malloc(sizeof(node*));
    newnode->next = NULL;
    cout<<"\nEnter the data into node : ";
    cin>>newnode->data;
    
     newnode->next = head;
     head = newnode;


}
void display()
{
    node* temp = head;
    cout<<"The list is : ";
    while(temp!= NULL)
    {
        cout<<temp->data<<"---->";
        temp = temp->next;
    }
    cout<<endl;
}
void insertAtPosition()
{
    
}
int main()
{
    int op;
    while (1)
    {
        cout<<endl;
        display();
        cout<<endl;
        cout<<"1) insertion at end .";
        cout<< "2) insertion at begining .";
        cout<<"Enter the option :";
        cin>>op;
        switch(op)
        {
            case 1: 
            insertionAtEnd();
            break;
            case 2 : 
            insertionAtBegining();
            break;
            case 3:
            insertAtPosition();
            break;
            default: 
            cout<<"option is invlaid.";
        }
    }
}