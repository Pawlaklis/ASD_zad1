#include <iostream>
#include "Array_class.h"



int main() {
    ARRAY_CLASS A1;
    int N, a, b;
    std::cout << "Enter size of wanted randomly generated array\n";
    std::cin >> N;
    std::cout << "Enter range of wanted randomly generated array\n";
    std::cin >> a;
    std::cin >> b;
    A1.generate_random(N, a, b);
    std::cout << "Unsorted array:\n";
    A1.print();
    std::cout << std::boolalpha << "Is sorting correct: " << A1.check_correctness() << std::endl;
    std::cout << "Sorted array:\n";
    A1.print();

    return 0;
}
