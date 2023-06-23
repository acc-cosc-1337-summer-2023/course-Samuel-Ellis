#include "bank_account.h"
#include<iostream>
#include "atm.h"
#include "checking_account.h"
#include "savings_account.h"
#include<vector>
#include<memory>

using std::cin;using std::cout;
using std::make_unique; using std::unique_ptr;
using std::vector;

int main()
{
	std::vector<unique_ptr<BankAccount>> accounts;
	CheckingAccount checking(100) ;

	accounts.push_back(make_unique<CheckingAccount>(100));
	accounts.push_back(make_unique<SavingsAccount>(300));

	run_menu(accounts);

	cout<<accounts[0]->get_balance()<<"\n";
	cout<<accounts[1]->get_balance()<<"\n";

	return 0;
}