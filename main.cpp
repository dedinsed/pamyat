#include <iostream>
#include "employee.h"
using namespace std;

int main()
{
    cout << "Запуск проги!" << endl;
    Employee emp;
    emp.setName("Иван");
    std::cout << emp.getName() << std::endl;
    int b;
    double* arr = nullptr;
    for(int i =0; i < 1000000; i++){
        if(i == 100){
            std::cout << "Пауза введи число ";
            std::cin >> b;
        }
        arr = new double[10000];
        delete[]  arr;
    }
    std::cout << "Конец программы пауза после просмотра памяти введи число и нажми ENTER " << std::endl;
    std::cin >> b;
    return 0;
}
