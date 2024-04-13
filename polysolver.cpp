#include <iostream>
#include <cmath>

using namespace std;

// Function to evaluate the polynomial
double polynomial(double coeff[], int n, double x) {
    double result = 0;
    for (int i = 0; i <= n; i++) {
        result += coeff[i] * pow(x, n - i);
    }
    return result;
}

// Function to evaluate the derivative of the polynomial
double derivative(double coeff[], int n, double x) {
    double result = 0;
    for (int i = 0; i < n; i++) {
        result += (n - i) * coeff[i] * pow(x, n - i - 1);
    }
    return result;
}

// Newton-Raphson method to find the root of the polynomial
double newtonRaphson(double coeff[], int n, double initial_guess, double tolerance, int max_iterations) {
    double x = initial_guess;
    int iteration = 0;

    while (iteration < max_iterations) {
        double fx = polynomial(coeff, n, x);
        double dfx = derivative(coeff, n, x);
        
        if (abs(dfx) < tolerance) {
            cout << "Derivative is close to zero. Newton-Raphson method failed." << endl;
            return -1;
        }

        double x_new = x - fx / dfx;

        if (abs(x_new - x) < tolerance) {
            cout << "Root found after " << iteration << " iterations." << endl;
            return x_new;
        }

        x = x_new;
        iteration++;
    }

    cout << "Max iterations reached. Root not found." << endl;
    return -1;
}

int main() {
    // Example: Solve the polynomial equation 2x^3 - 3x^2 + x - 5 = 0
    int n = 3; // degree of the polynomial
    double coeff[] = {2, -3, 1, -5}; // coefficients of the polynomial
    double initial_guess = 1.0; // initial guess
    double tolerance = 1e-6; // tolerance
    int max_iterations = 100; // maximum number of iterations

    double root = newtonRaphson(coeff, n, initial_guess, tolerance, max_iterations);

    if (root != -1) {
        cout << "Root of the polynomial equation: " << root << endl;
    }

    return 0;
}
