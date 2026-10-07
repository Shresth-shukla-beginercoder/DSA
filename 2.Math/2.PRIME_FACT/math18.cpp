// ### 6. Count Prime Factors

// **Question:** Count the prime factors of a number, including repeated factors.
// **Example:** `12 = 2 × 2 × 3` → **3 prime factors**

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
int count =0;
    for (int i = 2; i * i <= n; i++) {

        while (n % i == 0) {
            count++;
            n /= i;
        }
    }

    // If n is still greater than 1, it itself is a prime factor
    if (n > 1) {
        count++;
    }
cout<<"The number has total prime factor is "<<count;
    return 0;
}

/*

javascript


function countPrimeFactors(n) {
    if (n < 2) return 0;

    let count = 0;

    for (let factor = 2; factor * factor <= n; factor++) {
        while (n % factor === 0) {
            count++;
            n /= factor;
        }
    }

    // Remaining n is a prime factor
    if (n > 1) {
        count++;
    }

    return count;
}

const n = Number(prompt("Enter number:"));

console.log(`Total prime factors of ${n} => ${countPrimeFactors(n)}`);
*/