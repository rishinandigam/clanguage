// hello world programme in cpp...
 /*#include<iostream>
using namespace std;
int main()
{
  cout<<"hello world"<<endl;
}*/
//oops concepts in cpp
//defining a class and object in cpp ...
/*#include<iostream>
using namespace std;
class employee
{
  private:
    int eno;
    char ename[10];

    float esalary;
  public:
    void getdata();
    // {
    //   cout<<endl<<"Enter employee number:";
    //   cin>>eno;
    //   cout<<endl<<"Enter employeee name:";
    //   cin>>ename;
    //   cout<<endl<<"Enter the employee salary:";
    //   cin>>esalary;
    // }
    void putdata();
    // {
    //   cout<<"employee details are :"<<endl;
    //   cout<<"employe name :"<<ename<<endl;
    //   cout<<"Employee number :"<<eno<<endl;
    //   cout<<"Employee salary :"<<esalary<<endl;


    // }

};// upto now there will be  no memory allocation.
void employee ::getdata()// function defintion  can be written outside the class usig scope resolution operator.
{
    cout<<endl<<"Enter employee number:";
      cin>>eno;
      cout<<endl<<"Enter employeee name:";
      cin>>ename;
      cout<<endl<<"Enter the employee salary:";
      cin>>esalary;

}
void employee ::putdata()
{
      cout<<"employee details are :"<<endl;
      cout<<"employe name :"<<ename<<endl;
      cout<<"Employee number :"<<eno<<endl;
      cout<<"Employee salary :"<<esalary<<endl;

}




int main()
{
  employee e1;//an instance of the class (object)
    e1.getdata();
    e1.putdata();
  employee e2;
  e2.getdata();

}*/
//array of objects in the cpp.........
/*#include <iostream>
using namespace std;
class employe
{
  private :
    int eno;
    char ename[20];
    int esal;
    public :
    void getdata()
    {
      cout <<"Enter the employe name: "<<endl;
      cin>>ename;
      cout<< "Enter the employe nnumber : "<<endl;
      cin>>eno;
      cout <<"Enter the employe salary:"<<endl;
      cin>>esal;

    }
    void putdata()
    {
      cout <<"employee details are :"<<endl;
      cout<<"employe name :"<<ename<<endl;
      cout<<"Employee number :"<<eno<<endl;
      cout<<"Employee salary :"<<esal<<endl;

    }

};

int main()
  {
    cout <<"Enter the no of employe details :"<<endl;
    int n;
    cin>>n;
    employe e[10];
    for (int i=0;i<n;i++)
    {
      cout << "Enter employee"<< (i+1)<<"details"<<endl;
      e[i].getdata();
    }
    for (int i=0;i<n;i++)
    {
      cout<<endl;
      cout << " employee"<< (i+1)<<"details are :"<<endl;
      e[i].putdata();
      cout<<endl;
    }

     
  }*/
//queue implementations using linkedlist in cpp....
/*#include<iostream>
#include<malloc.h>
using namespace std;
struct node
{
  int data ;
  struct node *next;

};
struct node *front = NULL;
struct node *rear = NULL;
void display()
{
   struct node *temp = (struct node *)malloc(sizeof(struct node*));
   struct node *p = front;
   while ( p  != NULL)
   {
     cout<<p->data<< "--->";
     p=p->next;
   }

}
int main()
{
    int op;
    while(1)
    {
      cout<<endl;
      display();
      cout<<endl;
      cout<<"choose  the option :"<<endl;
      cout<<"1) Enqueue operation."<<endl;
      cout<<"2) dequeue operation."<<endl;
      cout<<"3) is queue is full."<<endl;
      cout<<"4) is queue is empty."<<endl;
      cout<< " 5) display the elements."<<endl;
      cout<< "Enter the option :"<<endl;
      cin>>op;
      switch (op)
      {
        case 1:
        //enqueue();
        break;
        case 2:
        //dequeue();
        break;
        case 3:
        //isQOF();
        break;
        case 4:
        //isQIE();
        break;
        case 5:
        display();
        break;
        default:
        cout<<"option is invalid"<<endl;
        break;
      }

    }


}*/