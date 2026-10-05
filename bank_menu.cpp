#include<iostream>
using namespace std;
int main()
{
int queue[5];
int front = 0;
int rear = 0;
int choice;

do
{
cout<<"\n**BANK TOKEN SYSTEM**"<<endl;
cout<<"1. ISSUE TOKEN"<<endl;
cout<<"2. DISPLAY TOKENS"<<endl;
cout<<"3. SERVE CUSTOMERS"<<endl;
cout<<"4. EXIT"<<endl;
cout<<"ENTER YOUR CHOICE: ";
cin>>choice;
switch(choice)
{
case 1:
if(rear < 5)
{
queue[rear] =rear + 1;
cout<<"TOKEN ISSUED: "<<queue[rear]<<endl;
rear++;
}
else
{
cout<<"QUEUE IS FULL"<<endl;
}
break;

case 2:
if(front < rear)
{
cout<<"TOKENS: ";
for(int i = front; i < rear; i++)
{
cout<<queue[i]<<" ";
}
cout<<endl;
}
else
{
cout<<"NO TOKEN AVAILABLE"<<endl;
}
break;

case 3:
if(front < rear)
{
cout<<"SERVING CUSTOMER WITH TOKEN: "<<queue[front]<<endl;
front++;
}
else
{
cout<<"NO CUSTEMER TO SERVE"<<endl;
}
break;

case 4:
cout<<"EXITING PROGRAM..."<<endl;
break;
default:
cout<<"INVALID CHOICE"<<endl;
}
}
while(choice != 4);
return 0;
}
