#include <iostream>
unsigned long long factorialIterative(int n) {
    if (n < 0) return 0;
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}
unsigned long long factorialRecursive(int n) {
    if (n < 0) return 0;      
    if (n == 0 || n == 1) {  
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

int main() {
    int num;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else if (num > 20) {
        std::cout << "Result will overflow. Please enter a number <= 20." << std::endl;
    } else {
        std::cout << "Iterative Factorial of " << num << " is: " 
                  << factorialIterative(num) << std::endl;
                  
        std::cout << "Recursive Factorial of " << num << " is: " 
                  << factorialRecursive(num) << std::endl;
    }

    return 0;
}
