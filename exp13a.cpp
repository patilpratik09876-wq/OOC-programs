#include<iostream>
using namespace std;

double division(int a, int b)
{
    if(b==0)
    {
        throw "Division by zero error!";
    }
    return (double)a/b;
}
int main()
{
    int x=50;
    int y=0;
    double z=0;

    try
    {
        z=division(x,y);
        cout<<"Result: "<<z<<endl;

    }
    catch(const char* msg)
    {
        cout<<msg<<endl;
    }
   return 0; 
}