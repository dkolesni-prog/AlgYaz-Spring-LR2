#include <iostream>
#include "SchoolRegion.h"
#include "School.h"
#include "Region.h"

int main() {
    School my_school("42nd Alexander's college", 55, 300000);
    my_school.print_school();
    std::cout << my_school.total_cash() << std::endl;
    std::cout << "-------------------------" << std::endl;
    Region my_region("Akadem", 5);
    my_region.print_reg();
    std::cout << "-------------------------" << std::endl;
    SchoolRegion the_school("SESC NSU", 75, 1000, "Novosibirsk", 5);
    the_school.get_all_data();

    return 0;
}
