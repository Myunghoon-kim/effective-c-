#include "customer.h"

#include <iostream>

void logCall(const std::string& funcName) {
  std::cout << "funcName" << funcName << std::end;
}

//Customer
Customer::Customer(const Customer& rhs)
  :name(rhs.name) {
    logCall("Customer copy constructor");
}

Customer& operator=(const Customer& rhs) {
  logCall("Customer copy assignment operator");
  name = rhs.name;

  return *this;
}




