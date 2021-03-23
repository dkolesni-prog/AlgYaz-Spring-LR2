//
// Created by Daniil Kolesnik on 18/03/2021.
//

#include <iostream>
#include "School.h"


School::School(std::string name, int n_teachers, float cash_per_teacher)
        : name(name), n_teachers(n_teachers), cash_per_teacher(cash_per_teacher) {
    std::cout << "I'm School's constructor" << std::endl;
}


float School::total_cash() {
    return cash_per_teacher * float(n_teachers);
}

void School::print_school() {
    std::cout << "Name:" << name << std::endl;
    std::cout << "Cash_per_teacher:" << cash_per_teacher << std::endl;
    std::cout << "Personnel: " << n_teachers << std::endl;
    std::cout << "Total_cash: " << total_cash() << std::endl;
}





