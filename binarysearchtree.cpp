#include<iostream> 
using namespace std;
struct node
{
    int data;
    node*  left;
    node* right;
    
};
node* createnode( int data)
{
    
        node* newnode = (node*)malloc(sizeof(node));
        newnode->data = data;
        newnode->left= newnode->right= nullptr;
    return newnode;
}
node* insert( node* temp, int key )
{
    if (temp == nullptr)
    return createnode(key);
    else
    {
        if(key < temp->data)
        temp->left = insert(temp->left, key);
        else if(  key > temp->data)
        temp->right = insert(temp->right , key);
    
        return temp;
    }
    cout<<"value is inserted successfully\n";
}
void  inordertraversal( node* temp)
{
    if(temp != NULL)
    {
        inordertraversal(temp->left);
        cout<<endl<<temp->data<<endl;
        inordertraversal(temp->right);
    }
}
void preordertraversal( node* temp)
{
    if(temp != nullptr)
    {
        cout<<endl<<temp->data<<endl;
        preordertraversal(temp->left);
        preordertraversal(temp->right);
    }
}
void postordertraversal( node* temp)
{
    if(temp != nullptr)
    {
        postordertraversal(temp->left);
        postordertraversal(temp->right);
        cout<<endl<<temp->data<<endl;
    }
}
int findMinimum(node * temp)
{
    if(temp == nullptr)
    return -1;
    if(temp-> left == nullptr)
    return temp->data;
    return  findMinimum(temp->left);

}
int findMaximum(node* temp)
{
    if (temp == nullptr)
    return -1;
      if (temp->right == nullptr ) 
      {   
        return temp->data;
      }
        return findMaximum(temp->right);
    
}
int get_max( int a , int b)
{
     if(a > b)
     return a;
     return b;
}
int height( node* temp )
{
    if(temp == nullptr)
    return -1;
    else 
    return get_max( height(temp->left), height(temp->right) +1);
}
int search (node* temp , int value)
{
    if (temp == nullptr)
    return 0;
    else
    {
        if(value == temp->data)
        return 1;
        else if( value > temp->data)
        return search( temp->right ,value );
        else 
        return search (temp->left , value);
    }
}
node* remove(node* temp , int value)
{
    if ( temp == nullptr)
    return nullptr;
    else
    {
        if (value == temp->data)
        {
            if(temp->left == nullptr && temp->right == nullptr)
            {
                temp = nullptr;
            }
            else if(temp->left == nullptr)
            {
                temp= temp->right;
            }
            else if(temp->right == nullptr)
            {
                temp = temp->right;
            }
            else 
            {
                int maxValue = findMaximum(temp->left);
                temp->data  = maxValue;
                temp->left = remove(temp->left, maxValue);
            }

        }
        else if (value > temp->data)
        temp->right= remove(temp->right, value);
        else
        temp->left = remove(temp->left , value);

        return temp;
    }

}
int main()
{
    node* root = nullptr;
    int op;
    while(1)
    {
        cout<<endl<<"Choose the operation \n";
        cout<<"1) insertion operation \n";
        cout<<"2) removing operation \n";
        cout<<"3) search operation\n";
        cout<<"4) minimum value opreation\n";
        cout<<"5) maximum value operation\n";
        cout<<"6) inorder traversal\n";
        cout<<"7) preorder traversal\n";
        cout<<"8) post order traversal\n";
        cout<<"9) height of the tree\n";
        cout<<"10) exit operation\n";
        cout<<"Enter  the operation : ";
        cin>> op;
        switch(op)
        {
             case 1: 
            {
                int value;
                cout<<"Enter  the value :";
                cin>>value;
                root = insert(root , value);

            }
            break;
            case 2:
            {
                int key;
                cout<<"Enter the value to delete : ";
                cin>>key;
                root = remove(root , key);
                cout<<"value is removed successsfully\n";
            }
            break;
            case 3: 
            {
                int value ;
                cout<<"Enter the value : ";
                cin>>value;
               int key=  search( root , value);
               if(key == 0)
               cout<<" tree is empty\n";
               else
               cout<<"value is present in the tree\n";
            }
            break;
            case 4: 
            {
                int min = findMinimum(root);
                if(min == -1 )
                cout<<"tree is empty\n";
                else 
                {
                    cout<<"\nThe minimum value is : ";
                    cout<< min;
                }
                
            }
            break;
            case 5:
            {
                int max = findMaximum(root);
                if( max == -1 )
                cout<<"Tree is empty\n";
                else 
                {
                    cout <<"\nThe maximum value is : ";
                    cout << max;
                }
            }
            break;
            case 6:
            {
                cout<<"\n The values inorder are :";
                inordertraversal(root);
                
            }
            break;
            case 7: 
            {
            cout<<"The list in preorder is : ";
                preordertraversal(root);
            }
            break;
            case 8:
           {
                cout<<"The list in postorder is : ";
                postordertraversal(root);
            }
            break;
            case 9:
            {
                int Height = height(root);
                if(Height == -1)
                cout<<"tree is empty.\n";
                else 
                {
                    cout<<"The height of the tree is :";
                    cout<<Height<<endl;
                }

            }
            break;
            case 10:
            exit(0);
            break;
            default :
            cout<<"Option is invalid \n";
            break;
        
        }

    }

}