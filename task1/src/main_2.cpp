#include <iostream>
#include <limits>

int main() {
    std::cout << "int: " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "unsigned int: " << std::numeric_limits<unsigned int>::min() << " to " << std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << "float: " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "double: " << std::numeric_limits<double>::min() << " to " << std::numeric_limits<double>::max() << std::endl;
    return 0;
}
