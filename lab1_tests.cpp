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
// #include <iostream>
// #include <cmath>

// void intrep() {
//     long answer;
//     int input;
//     std::cin >> input;
//     answer = pow(16, (2*input));
//     std::cout << answer <<'\n';
// }

// int main() {
//     intrep();
//     return 0;
// }
// scope, Exercise 4
// #include <iostream>

// namespace Gibberish {
//     namespace MoreGibberish {
//         namespace SomeMoreGibberish {
//             int x{102};
//         }
//         namespace OtherGibberish {
//             int y{42};
//         }
//     }
//     int z{36};
// }

// int main() {
//     std::cout <<Gibberish::MoreGibberish::SomeMoreGibberish::x<< std::endl;
// }
// Exercise 5
// #include <iostream>
// #include <vector>

// void fizzbuzz() {
//     const std::vector<int> divisors {3, 5};
//     const std::vector<std::string> words {"Fizz", "Buzz"};
//     for (int i{1}; i <= 100; ++i) {
//             bool printed{false};
//             for (std::size_t j{0}; j<divisors.size(); j++) {
//                 if (i%divisors[j] == 0) {
//                     std::cout << words[j];
//                     printed = true;
//                 }
//             }
//         if (!printed) {
//             std::cout << i;
//         }
//         std::cout << std::endl;
        
//     }
// }

// int main () {
//     fizzbuzz();
//     return 0;
// }
// Exercise 6
// #pragma once
// #include <iostream> // This is part of main.cpp; included here for function testing
// #include <limits>

// double calculate(double lhs, double rhs, char op) {
//     double solution;
//     if (op == '+' || '0') {
//         solution = lhs + rhs;
//     };
//     if (op == '-') {
//         solution = lhs - rhs;
//     };
//     if (op == '*') {
//         solution = lhs * rhs;
//     };
//     if (op == '/') {
//         if (rhs == 0) {
//             solution = std::numeric_limits<double>::quiet_NaN();
//             return solution;
//         };
//         solution = lhs / rhs;
//     };
//     return solution;
// };

// int main () {
//     std::cout << calculate (1.00, 0.00, '/') << std::endl;
// }
// Exercise 7
// #include <iostream> // Same as exercise 6
// #pragma once
// void print(char input) { std::cout << input << std::endl; };
// void print (int input) {std::cout << input << std::endl; };
// void print (double input) {std::cout << input << std::endl; };
// int main() {
//     print(42);
//     print(42.2);
//     print('a');
// }
// Exercise 8
// #include <iostream>
// #pragma once

// bool isLeapYear(int year) {
//     if (year >= 1582 && year % 4 == 0 && year % 100 != 0) {
//         return true;
//     } else if (year % 100 == 0 && year % 400 == 0) {
//         return true;
//     };
//     return false;
// }

// int main() {
//     std::cout << isLeapYear(4000) << std::endl;
// }