// stack using arrays
#include <iostream>
using namespace std;
#define size 6
int a[size];
int top = -1;
void push()
{
    int value;
    cout << "Enter the data :";
    cin >> value;
    if (top == isfull())
        cout << "list is full\n";
    else
    {
        top++;
        a[top] = value;
        cout << "value is pushed successfully\n";
    }
}
void pop()
{
    if (isempty())
        cout << "list is empty\n";
    else
    {
        top--;
    }
}
int isempty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
int isfull()
{
    if (top == size - 1)
        return 1;
    else
        return 0;
}
void display()
{
    cout << "The stack is :\n";
    for (int i = 0; i < size; i++)
    {
        cout << "      " << a[i];
    }
}

int main()
{
    int op;
    while (1)
    {
        cout << "Choose the option :\n";
        cout << "1) push operation .\n";
        cout << "2) pop operation.\n";
        cout << "3) isempty . \n";
        cout << "4) is full.\n";
        cout << "5) display.'\n";
        cout << "6) pop up to the position.\n";
        cout << "Enter the option: ";
        cin >> op;
        switch (op)
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
            isfull();
            break;
        case 5:
            display();
            break;
        default:
            exit(0);
        }
    }
}