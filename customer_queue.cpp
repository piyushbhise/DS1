#include<iostream>
using namespace std;

int main()
{
    int queue[5];
    int front = 0;
    int rear = 0;

    cout << "ENTER 5 CUSTOMER ID : " << endl;

    for ( int i = 0;i<5;i++)
    {
        cin >> queue[rear];
        rear++;

    }

    cout << "THE ORDER NUMBER ARE :" << endl;

        while (front < rear)
        {
           cout << "PROCESSING ORDER :" << queue[front] << endl;
           front++;
           
        }
    
        return 0;
}
