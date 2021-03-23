//
// Created by Daniil Kolesnik on 18/03/2021.
//Базовый класс1 – школа. Компоненты класса: название, финансирование на год на 1 учителя (тыс.
//руб.), кол-во учителей, функция для вычисления величины финансирования на всю школу, функция печати
//параметров.

#ifndef LR2_SCHOOL_H
#define LR2_SCHOOL_H

#include <string>

class School {

public:
    School(std::string name, int n_teachers, float cash_per_teacher);

    virtual float total_cash();

    void print_school();

protected:

    std::string name;
    int n_teachers;
    float cash_per_teacher;
};


#endif //LR2_SCHOOL_H
