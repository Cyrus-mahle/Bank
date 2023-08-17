#include"BankAccount.h"
#include<iostream>
using namespace std;

int main(){
	BankAccount acc1("Nyakama Mahle",2000);
	cout << " Welcome " << acc1.getName() << endl;
	cout << " Your Balance is R" << acc1.getBalance() << endl;
	return 0;
} 

