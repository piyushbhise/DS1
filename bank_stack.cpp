#include<iostream>
using namespace std;
int main()
{
int stack[5];
int top=-1;

cout<<"ENTER TOKEN NO: "<<endl;
for(int i=0;i<5;i++)
{
 cin>>stack[++top];
}
while(top>=0)
{
 cout<<"SERVICE HISTORY OF CUSTOMER: "<<stack[top]<<endl;
top--;
}
return 0;
}
