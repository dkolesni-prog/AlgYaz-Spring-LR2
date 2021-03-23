//
// Created by Daniil Kolesnik on 18/03/2021.
//

#include <iostream>
#include "Region.h"

Region::Region(std::string _reg_name, float _reg_coef) : reg_name(_reg_name), reg_coef(_reg_coef) {
    std::cout << "I'm region's constructor" << std::endl;
}

void Region::print_reg() {
    std::cout << "Region: " << reg_name << std::endl;
    std::cout << "Coef: " << reg_coef << std::endl;
}
