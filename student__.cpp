#include<iostream>
using namespace std;
class student
{
    public:
    int rollno;
    void input()
{
    cout<<"ROLL NO OF THE STUDENT IS :"<<endl;
    cin>>rollno;
}
    void display()
{
    cout<<"ROLL NO ->:"<<rollno<<endl;
}
};
int main()
{
    student s1,s2,s3,s4,s5;
      s1.input();
      s1.display();

      s2.input();
      s2.display();

      s3.input();
      s3.display();

      s4.input();
      s4.display();

      s5.input();
      s5.display();

      return 0;
}
