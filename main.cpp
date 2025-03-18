#include <iostream>
#include "test.hpp"

int main(void)
{
    std::cout << "In main: " << std::endl;
    test(100);
    test(20);

    return 0;
}
