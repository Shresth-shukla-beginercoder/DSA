// ### 21. Fast Fibonacci

// **Question:** Find a Fibonacci number at a very large position efficiently.
// **Example:** `F(50)` → **12,586,269,025**


#include <bits/stdc++.h>
using namespace std;

// Fast Doubling Fibonacci Function
// Returns {F(n), F(n + 1)}
pair<unsigned long long, unsigned long long> fibo(unsigned long long n) {

    // Base Case
    if (n == 0) {
        return {0, 1};
    }

    // Recursive Call for Half Position
    pair<unsigned long long, unsigned long long> p = fibo(n / 2);

    // Extract Two Consecutive Fibonacci Numbers
    unsigned long long a = p.first;   // F(k)
    unsigned long long b = p.second;  // F(k + 1)

    // Calculate Fibonacci Numbers at Double Position
    unsigned long long c = a * (2 * b - a);  // F(2k)
    unsigned long long d = a * a + b * b;    // F(2k + 1)

    // If n is Even
    if (n % 2 == 0) {
        return {c, d};       // {F(n), F(n + 1)}
    }

    // If n is Odd
    else {
        return {d, c + d};   // {F(n), F(n + 1)}
    }
}

// Main Function
int main() {

    unsigned long long n;

    // Input
    cout << "Enter n => ";
    cin >> n;

    // Calculate and Display Fibonacci Number
    cout << "Fibonacci F(" << n << ") = " << fibo(n).first << '\n';

    return 0;
}

/*
Javascript


function fibo(n) {
    // Base case
    if (n === 0n) {
        return [0n, 1n];
    }

    // Calculate Fibonacci values for half the position
    const [a, b] = fibo(n / 2n);

    // Fast doubling formulas
    const c = a * (2n * b - a);
    const d = a * a + b * b;

    // If n is even
    if (n % 2n === 0n) {
        return [c, d];
    }

    // If n is odd
    return [d, c + d];
}

// Main program
const n = 50n;

const result = fibo(n);

console.log(`F(${n}) = ${result[0]}`);


*/