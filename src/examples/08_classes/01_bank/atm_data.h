#include<fstream>
#include<memory>
#include<string>
#include "customer.h"

#ifndef ATM_DATA_H
#define ATM_DATA_H

class ATMData{
    public:
        void save_customers(std::vector<std::unique_ptr<Customer>>& customers);
        std::vector<std::unique_ptr<Customer>>& get_customers();
};

#endif