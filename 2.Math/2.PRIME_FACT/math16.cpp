
// ## Prime / Factorization

// ### 4. Prime Factorization

// **Question:** Express a number as a product of prime numbers.
// **Example:** `12` → `2 × 2 × 3`

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cout << "Enter => ";
    cin >> n;

    int original = n;

    if (n == 1) {
        cout << "1 has no prime factorization";
        return 0;
    }

    cout << "Prime factors of " << original << " are: ";

    for (int i = 2; i * i <= n; i++) {

        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }

    // If n is still greater than 1, it itself is a prime factor
    if (n > 1) {
        cout << n;
    }

    return 0;
}

/*
Javascript
let n = 12;
let original = n;
let factors = [];

for (let i = 2; i * i <= n; i++) {
    while (n % i === 0) {
        factors.push(i);
        n = Math.floor(n / i);
    }
}

if (n > 1) {
    factors.push(n);
}

console.log(`Prime factors of ${original}: ${factors.join(" × ")}`);
*/