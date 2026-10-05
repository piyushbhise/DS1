#include<iostream>
using namespace std;
int main()
{
int queue[5];
int front = 0;
int rear = 0;

//Input tokens
cout<<"ENTER TOKEN NO: "<<endl;
for(int i = 0; i < 5; i++)
{
cin>>queue[rear];
rear++;
}

cout<<"TOKEN ID IN ORDER: "<<endl;
while(front<rear)
{
 cout <<"HERE ARE YOUR ORDER: "<<queue[front]<<endl;   
 front++;
}
return 0;
}
