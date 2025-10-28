#include<iostream>
using namespace std;
class student
{ 
  private:
  int rollno;
  char name[20];
  float marks;
  public :
  void input()
  {
 cout<<"enter your roll no:";
  cin>>rollno;
  cout<<"enter your name:";
  cin>>name;
  cout<<"enter your marks:";
  cin>>marks;
  }
void display()
{ cout<<"your roll no is "<<rollno<<endl;
  cout<<"your name is "<<name<<endl;
  cout<<"your marks is "<<marks<<endl;
}
};
int main()
{ student s1;
 s1.input();
 s1.display();
 return 0;
}
