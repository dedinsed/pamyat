#include "employee.h"
#include <iostream>
Employee::Employee()
{

}

std::string Employee::getName(){
    return name;
}

void Employee::setName(std::string n){
    name = n;
}
