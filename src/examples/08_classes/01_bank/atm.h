//atm.h
#include<iostream>
#include<memory>
#include "bank_account.h"
#include "customer.h"
#include<vector>

void display_menu();
void run_menu(std::vector<std::unique_ptr<Customer>>& customers);
void handle_option(BankAccount* account, int option);
int scan_card(int max_value);