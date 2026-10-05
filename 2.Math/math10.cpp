// You are given an integer n. You need to find out the number of prime numbers in the range [1, n] (inclusive). Return the number of prime numbers in the range.

// A prime number is a number which has no divisors except, 1 and itself.

// Example 1:
// Input: n = 6

// Output: 3

// Explanation: Prime numbers in the range [1, 6] are 2, 3, 5.

// Example 2:
// Input: n = 10

// Output: 4

// Explanation: Prime numbers in the range [1, 10] are 2, 3, 5, 7.




#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter a number - ";
    cin >> n;

    int count = 0;

    for (int i = 2; i <= n; i++) {

        bool isPrime = true;

        for (int j = 2; j * j <= i; j++) {

            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            count++;
        }
    }

    cout << "The number of prime are = " << count;

    return 0;
}


/*
Javascript

let n = 10;
let count = 0;

for (let i = 2; i <= n; i++) {

    let isPrime = true;

    for (let j = 2; j * j <= i; j++) {

        if (i % j === 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        count++;
    }
}

console.log("The number of primes are =", count);
*/