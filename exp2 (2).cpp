#include<iostream>
 using namespace std;
class complex
{ private:
  int real1,real2;
  int img1,img2;
 public:
  void add()
{ cout<<"enter the real part of 1st complex  no:"<<endl;
  cin>>real1;
 cout<<"enter the imagnary part of 1st complex  no:"<<endl;
  cin>>img1;
 cout<<"enter the real part of 2nd complex  no:"<<endl;
  cin>>real2;
 cout<<"enter the imagnary part of 2nd complex  no:"<<endl;
  cin>>img2;

 cout<<" addition of complex no:  "<<real1 + real2<<"+"<<img1 + img2<<"i"<<endl;
}
};
int main()
{ complex comp;
 comp.add();
 return 0;
}

 
