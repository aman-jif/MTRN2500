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