#include<iostream>
using namespace std;
struct node
{
    int sid;
    char name[8];
    char branch[8];
     int RegdNo ;

};
int main()
{
   node student1 ;
   cout<<"Enter the name of the student : ";
   cin>>student1.name;
   cout<< "Enter id of the student : ";
   cin>>student1.sid;
   cout<<" Enter the student Registered Number : ";
   cin>>student1.RegdNo;
   cout<<"Enter the branch of the student : ";
   cin>> student1.branch;
   printf("The detatils of student 1 ");
   cout<<student1.name;
    cout<<student1.branch;
   cout<<student1
   cout<<student1


}