#include<iostream>
using namespace std;

class savingaccount{
private:
string accountholdername;
int accountnumber;
double balance;
double interestrate;
public:
savingaccount(string name,int accnumber,double intialbalance ,double rate)
{
accountholdername=name;
accountnumber=accnumber;
balance=intialbalance;
interestrate=rate;
}
void deposit(double amount)
{
if(amount>0)
{
balance+=amount;
cout<<"deposited: "<<amount<<endl;
}
}
void withdraw(double amount)
{
if(amount>0 && amount<=balance)
{
balance-=amount;
cout<<"withdrawn:"<<amount<<endl;
}else
{cout<<"insufficent balance!"<<endl;
}
}
void applyinterest()
{
double interest=balance*interestrate/100;
balance+=interest;
cout<<"Interst applied"<<interestrate<<endl;
}
void display()
{
cout<<"\n{saving Account}"<<endl;
cout<<"Account holder:"<<accountholdername<<endl;
cout<<"Account number:"<<accountnumber<<endl;
cout<<"balance :"<<balance<<endl;
cout<<"interest rate"<<interestrate<<"%"<<endl;
}
};

class checkingaccount{
private:
string accountholdername;
int accountnumber;
double balance;
double transactionfee;
public:
checkingaccount(string name, int accnumber,double initialbalance,double fee)
{ accountholdername=name;
accountnumber=accnumber;
balance=initialbalance;
transactionfee=fee;
}
void deposit(double amount)
{
if(amount>0)
{
balance+=amount;
cout<<"deposited:"<<amount<<endl;
}
}
void withdraw(double amount)
{
double total =amount+transactionfee;
if(total <=balance){
balance-=total;
cout<<"withdrawn:"<<amount<<"($"<<transactionfee<<"fee applied)"<<endl;
}
else{
cout<<"insufficient balance for withdrawal + fee!"<<endl;

}
}
void display()
{cout<<"\n{cheacking account}"<<endl;
cout<<"accountholder"<<accountholdername<<endl;
cout<<"accountnumber"<<accountnumber<<endl;
cout<<"balance:"<<balance<<endl;
cout<<"Transaction fee:"<<transactionfee<<endl;}

};

int main()
{
savingaccount saving("Sidd",1001,50000.0,3.0);
checkingaccount checking("bob",1002,30000,20.0);

saving.display();
saving.deposit(1000);
saving.withdraw(2000);
saving.applyinterest();
saving.display();


checking.display();
checking.deposit(1500);
checking.withdraw(1000);

checking.display();
return 0;
}

