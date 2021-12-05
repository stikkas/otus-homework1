#include "lib.h"
#include <iostream>

int main()
{
    std::cout << "build " << version() << std::endl;
    std::cout << message() << std::endl;

    return 0;
}
