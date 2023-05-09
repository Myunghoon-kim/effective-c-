#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

void logCall(const std::string& funcName);

class Customer {
  public:
    Customer(const Customer& rhs);
    Customer& operator=(const Customer& rhs);
  private:
    std::string name;

#endif //CUSTOMER_H

