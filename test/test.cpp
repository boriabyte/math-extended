#include "mathext.h"

int main(){

    std::cout << mathext::add(2, 1.2, 2) << std::endl;
    std::cout << mathext::sub(3, 10.01, 9, 1) << std::endl;
    std::cout << mathext::mul(2, 1.2, 2) << std::endl;
    std::cout << mathext::div(2, 1.2, 2) << std::endl;

    return 0;
}

