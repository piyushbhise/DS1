#include<iostream>
using namespace std;
void menu()
{
 int choice;
 cout<<"\n\n******* RESTAURANT MENU *******";
 cout<<"\n1. Pizza";
 cout<<"\n2. Burger";
 cout<<"\n3. Pasta";
 cout<<"\n4. Coffee";
 cout<<"\n5.Exit";

 cout<<"\nEnter your choice: ";
 cin>>choice;

 if(choice==1)
 {
  cout<<"Selected Item Pizza";
  menu();
 }
 else if(choice==2)
 {
  cout<<"Selected Item Burger";
  menu();
 }
 else if(choice==3)
 {
  cout<<"Selected Item Pasta";
  menu();
 }
 else if(choice==4)
 {
  cout<<"Selected Item Coffee";
  menu();
 }
 else if(choice==5)
 {
  cout<<"\nTHANKYOU !";
 }
 else
 {
  cout<<"\nInvalid Choice!";
  menu();
 }
}
int main()
{
 menu();

 return 0;
}
