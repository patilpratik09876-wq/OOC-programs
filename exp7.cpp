#include<iostream>
using namespace std;
class vehicle {
public:
vehicle() {
cout<<"This is a vehicle\n";
}
};
class Fourwheeler{
public:
Fourwheeler(){
cout<<"This is a four wheeler\n";
}
};
class car: public vehicle, public Fourwheeler {
public:
car(){ cout<<"This four wheeler vehicle is car\n";}
};
int main()
{
car obj;
return 0;
}
