#include<string>
using namespace std;

class BankAccount{
	private :
		string name;
		double balance;
	public :
		BankAccount();
		BankAccount(string,double);
		string getName()const;
		double getBalance()const;
		~BankAccount();
};
