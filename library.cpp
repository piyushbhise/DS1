#include<iostream> 
#include<string>
using namespace std;
int main()
{
int id1,id2,id3;
string title1,title2,title3;

//Book1
cout<<"Enter the ID of Book: "<<id1;
cin>>id1;

cin.ignore();
cout<<"Enter the Title of Book: "<<title1;
getline(cin,title1);

//Book2
cout<<"Enter the ID of Book: "<<id2;
cin>>id2;

cin.ignore();
cout<<"Enter the Title Book: "<<title2;
getline(cin,title2);

//Book3
cout<<"Enter the ID of Book: "<<id3;
cin>>id3;

cin.ignore();
cout<<"Enter the ID of Book: "<<title3;
getline(cin,title3);
  
//Display Books
cout<<"\n***LIBRARY BOOKS***";

cout<<"\nBook ID: "<<id1;
cout<<"\nBook Title: "<<title1;

cout<<"\nBook ID: "<<id2;
cout<<"\nBook Title: "<<title2;

cout<<"\nBook ID: "<<id3;
cout<<"\nBook Title: "<<title3;
return 0;
}
