#include <iostream>

// Function to calculate factorial
int factorial(int n) {
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int main() {
    int num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;
    std::cout << "Factorial of " << num << " = " << factorial(num);
    return 0;
}
