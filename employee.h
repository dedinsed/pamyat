#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>

class Employee
{
private:
    std::string name;
public:
    Employee();
    std::string getName();
    void setName(std::string n);
};

#endif // EMPLOYEE_H
