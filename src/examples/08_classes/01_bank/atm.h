//atm.h
#include<iostream>
#include "bank_account.h"
#include<vector>

void display_menu();
void run_menu(std::vector<BankAccount>& accounts);
void handle_option(BankAccount& account, int option);