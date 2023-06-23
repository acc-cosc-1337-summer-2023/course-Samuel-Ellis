//atm.h
#include<iostream>
#include<memory>
#include "bank_account.h"
#include<vector>

void display_menu();
void run_menu(std::vector<std::unique_ptr<BankAccount>>& accounts);
void handle_option(BankAccount* account, int option);