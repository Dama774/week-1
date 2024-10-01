#include <iostream>
#include <cmath>

double volumeIcosahedron(double edgeLength) {
    return (5.0 * (3.0 + sqrt(5.0)) / 12.0) * pow(edgeLength, 3);
}

int main() {
    double edgeLength;

    std::cout << "Введите длину ребра икосаэдра: ";
    std::cin >> edgeLength;

    double volume = volumeIcosahedron(edgeLength);
    std::cout << "Объем икосаэдра с длиной ребра " << edgeLength << " равен " << volume << std::endl;

    return 0;
}
