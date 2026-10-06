// You are given two integers n1 and n2. You need find the Lowest Common Multiple (LCM) of the two given numbers. Return the LCM of the two numbers.

// The Lowest Common Multiple (LCM) of two integers is the lowest positive integer that is divisible by both the integers.

// Example 1:
// Input: n1 = 4, n2 = 6

// Output: 12

// Explanation: 4 * 3 = 12, 6 * 2 = 12.

// 12 is the lowest integer that is divisible both 4 and 6.

// Example 2:
// Input: n1 = 3, n2 = 5

// Output: 15

// Explanation: 3 * 5 = 15, 5 * 3 = 15.

// 15 is the lowest integer that is divisible both 3 and 5.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int x = a, y = b;

    // Find GCD using Euclid's Algorithm
    while (y != 0) {
        int rem = x % y;
        x = y;
        y = rem;
    }

    // x = GCD
    int lcm = abs(a * b) / x;

    cout << "LCM = " << lcm;

    return 0;
}


/*
Javascript

function lcm(a, b) {
    let x = Math.abs(a);
    let y = Math.abs(b);

    // Euclidean Algorithm for GCD
    while (y !== 0) {
        let rem = x % y;
        x = y;
        y = rem;
    }

    // x = GCD
    return Math.abs((a / x) * b);
}

console.log(lcm(4, 6)); // 12
console.log(lcm(3, 5)); // 15

*/