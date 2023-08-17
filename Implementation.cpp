#include"BankAccount.h"
#include<iostream>
using namespace std;

BankAccount :: BankAccount(){
name = " ";
balance = 0.0 ;			
}

BankAccount :: BankAccount(string name ,double amount ){
this->name = name ;
if(balance > 0){
this->balance = balance + amount ;
}
}

string BankAccount :: getName()const{
return name ;
}
double BankAccount :: getBalance()const{
return balance;
}

BankAccount :: ~BankAccount(){
	cout << " De-Allocating resources " << endl;
}
