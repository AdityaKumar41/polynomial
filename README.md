# Polynomial Root Finder using Newton-Raphson Method

This C++ program demonstrates the use of the Newton-Raphson method to find the root of a polynomial equation.

## Overview

The program consists of the following main components:

- `polynomial()`: Evaluates the polynomial given its coefficients and a value of x.
- `derivative()`: Evaluates the derivative of the polynomial.
- `newtonRaphson()`: Implements the Newton-Raphson method to find the root of the polynomial equation.
- `main()`: Example usage of the Newton-Raphson method to find the root of a polynomial equation.

## Requirements

- C++ compiler supporting C++11 or higher

## Usage

1. Clone the repository:

    ```bash
    git clone https://github.com/AdityaKumar41/polynomial.git
    ```

2. Navigate to the project directory:

    ```bash
    cd polynomial
    ```

3. Compile the program:

    ```bash
    g++ polynomial.cpp -o polynomial
    ```

4. Run the program:

    ```bash
    ./polynomial
    ```

## Example

The program is set to solve the polynomial equation:

\[ 2x^3 - 3x^2 + x - 5 = 0 \]

With the initial guess `x = 1.0`, tolerance `1e-6`, and a maximum of `100` iterations.

The program will output the root of the polynomial equation found using the Newton-Raphson method.

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.
