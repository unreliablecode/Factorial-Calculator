# Factorial Calculator

This repository contains a simple C++ program that calculates the factorial of a number.

## Description

The program defines a function `factorial` that takes an integer as input and returns the factorial of that number. The factorial of a number `n` is the product of all positive integers less than or equal to `n`. It's denoted by `n!`.

The `main` function demonstrates how to use the `factorial` function. It asks the user for a positive integer input, calculates the factorial of that number, and prints the result.

## Code

Here is the main part of the code:

```cpp
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
