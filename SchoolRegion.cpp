//
// Created by Daniil Kolesnik on 18/03/2021.
//Производный класс – школа региона. Переопределить функцию для вычисления величины
//финансирования школы с учётом региона и функцию для печати параметров. Внутри переопределенных
//функций вызывать соответствующие функции из базового класса.
//Каждый класс должен иметь свой заголовочный файл и файл с исходным кодом.
//Пр

#include "SchoolRegion.h"
#include <iostream>

SchoolRegion::SchoolRegion(std::string school_name, int n_teachers, float cash_per_school, std::string reg_name,
                           float reg_coef)
        : School(school_name, n_teachers, cash_per_school),
          Region(reg_name, reg_coef) {
    std::cout << "I'm SchoolRegion's constructor" << std::endl;
}

float SchoolRegion::total_cash() {
    return reg_coef * School::total_cash();
}

void SchoolRegion::get_all_data() {
    print_reg();
    print_school();
    std::cout << "This school requires:" << total_cash() << "RUB" << std::endl;
}




