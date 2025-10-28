
#include<iostream>
#include<cmath>
using namespace std;
const double pi=3.1415;
class shape
{
public:
virtual double calculatearea() const=0;
virtual double calculateperimeter() const=0;
};
class circle:public shape
{
private:
double radius;
public:
circle (double rad):radius(rad){}
double calculatearea() const override{
return pi*pow(radius,2);
}
double calculateperimeter() const override{
return 2*pi*radius;
}
};
class rectangle:public shape{
private:
double length;
double width;
public:
rectangle(double len ,double wid):length(len),width(wid){}
double calculatearea() const override
{
return length*width;
}
double calculateperimeter() const override
{
return 2*(length + width);
}
};
class triangle:public shape{
private:
double side1;
double side2;
double side3;
public:
triangle(double s1,double s2, double s3):side1(s1),side2(s2),side3(s3){}
double calculatearea() const override{
double s=(side1+side2+side3)/2;
return sqrt (s*(s-side1)*(s-side2)*(s-side3));
}
double calculateperimeter() const override{
return side1+side2+side3;
}
};
int main()
{
circle circle(7);
rectangle Rectangle(4.2 , 8);
triangle  Triangle(4,4,3.2);
cout<<"circle"<<endl;
cout<<"area"<<circle.calculatearea()<<endl;
cout<<"perimeter"<<circle.calculateperimeter()<<endl;
cout<<"Rectangle"<<endl;
cout<<"area"<<Rectangle.calculatearea()<<endl;
cout<<"perimeter"<<Rectangle.calculateperimeter()<<endl;
cout<<"triangle"<<endl;
cout<<"area"<<Triangle.calculatearea()<<endl;
cout<<"perimeter"<<Triangle.calculateperimeter()<<endl;
return 0;
}

