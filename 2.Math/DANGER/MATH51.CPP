// ### 39. Last Non-Zero Digit of Factorial

// **Question:** Find the last digit of `n!` that is not zero.
// **Example:** `10!` → **8**


#include <bits/stdc++.h>
using namespace std;

// Returns the last non-zero digit of n!
int lastNonZeroDigit(long long n) {
    // Base cases:
    // Last non-zero digits of 0!, 1!, 2!, 3!, 4!
    int small[] = {1, 1, 2, 6, 4};

    // Last digits of 2^0, 2^1, 2^2, 2^3
    int power2[] = {1, 2, 4, 8};

    // Stop recursion for small factorials
    if (n < 5) {
        return small[n];
    }

    // Reduce the problem size
    long long q = n / 5;

    // Recursively calculate the smaller factorial
    int a = lastNonZeroDigit(q);

    // Get the small-factorial contribution
    int b = small[n % 5];

    // Get the power-of-2 contribution
    int c = power2[q % 4];

    // Combine the contributions and keep one digit
    return (a * b * c) % 10;
}

int main() {
    long long n;

    // Read input from the user
    cout << "Enter n: ";
    cin >> n;

    // Validate input
    if (n < 0) {
        cout << "Please enter a non-negative integer.\n";
        return 0;
    }

    // Calculate and display the result
    cout << "Last non-zero digit of " << n << "! is: "
         << lastNonZeroDigit(n) << '\n';

    return 0;
}
/*
JavaScript


function lastNonZeroDigit(n) {
    // Last non-zero digits of 0!, 1!, 2!, 3!, and 4!
    const small = [1, 1, 2, 6, 4];

    // Last digits of powers of 2: 2^0, 2^1, 2^2, 2^3
    const power2 = [1, 2, 4, 8];

    // Base case: return the precomputed answer for n < 5
    if (n < 5) {
        return small[n];
    }

    // Reduce the problem size
    const q = Math.floor(n / 5);

    // Recursively calculate the smaller factorial's contribution
    const a = lastNonZeroDigit(q);

    // Get the contribution from the remainder
    const b = small[n % 5];

    // Get the power-of-2 contribution using its cycle
    const c = power2[q % 4];

    // Combine the contributions and keep the last digit
    return (a * b * c) % 10;
}

// Example
const n = 10;

console.log(
    `Last non-zero digit of ${n}! is:`,
    lastNonZeroDigit(n)
);


*/