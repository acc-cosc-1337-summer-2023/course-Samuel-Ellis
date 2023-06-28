//bank_account.h
#include<iostream>
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount //abstract class - can't be used directly
{

public://access specifier
    BankAccount(){std::cout<<"Using default constructor\n";}//default constructor
    BankAccount(int b) :balance(b) {std::cout<<"Using parameterized constructor\n";}//class constructor
    virtual int get_balance() const = 0; // pure virtual function
    void deposit(int amount);
    void withdraw(int amount);
private://access specifier
    int balance{0};//explicity init to 0

};
#endif