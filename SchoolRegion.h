//
// Created by Daniil Kolesnik on 18/03/2021.
//
//Производный класс – школа региона. Переопределить функцию для вычисления величины
//финансирования школы с учётом региона и функцию для печати параметров. Внутри переопределенных
//функций вызывать соответствующие функции из базового класса.
//Каждый класс должен иметь свой заголовочный файл и файл с исходным кодом.
//Продемонстрировать работу всех реализованных классов и их методов.

#ifndef LR2_SCHOOLREGION_H
#define LR2_SCHOOLREGION_H

#include "School.h"
#include "Region.h"

class SchoolRegion : public School, public Region {
public:
    explicit SchoolRegion(std::string school_name, int n_teachers, float cash_per_school, std::string reg_name,
                          float reg_coef);

    float total_cash() override;

    void get_all_data();

};


#endif //LR2_SCHOOLREGION_H
