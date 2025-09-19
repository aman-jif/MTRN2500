// Exercise 1
// #include <iostream>

// int main() {
//     std::cout << "Hello World!\n";
//     return 0;
// }

// Exercise 2
// #include <iostream>

// int mult() {
//     float a{0.0};
//     float b{0.0};
//     float c{0.0};
//     std::cin >> a;
//     std::cin >> b;
//     c = a * b;
//     std::cout << static_cast<int>(c) <<"\n";
//     return 0;
// }

// int main() {
//     mult();
//     return 0;
// }
// Exercise 3
#include <iostream>
#include <cmath>

void intrep() {
    long answer;
    int input;
    std::cin >> input;
    answer = pow(16, (2*input));
    std::cout << answer <<'\n';
}

int main() {
    intrep();
    return 0;
}