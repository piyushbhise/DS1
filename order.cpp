#include<iostream>
using namespace std;
int main()
{
 int queue[5];
 int front = 0;
 int rear = 0;

 //Add orders
 cout<<"ENTER 5 CUSTOMER ORDER ID'S:\n"<<endl;
 for(int i=0; i<5; i++)
 {
  cin>>queue[i];
 }

 cout<<"ENTER CUSTOMER ID: "<<endl;
 for(int i=0; i<5; i++)
 {
  cin>>queue[rear];
  rear++;


 // Process orders
 cout<<"\nPROCESSING ORDERS:\n"<<endl;

 while(front<rear)
 {
  cout<<"CUSTEMER ADDED IN QUEUE: "<<queue[front]<<endl;

  front++;
 }
}
return 0;
}
