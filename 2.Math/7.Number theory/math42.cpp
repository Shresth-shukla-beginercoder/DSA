// ### 30. Chinese Remainder Theorem

// **Question:** Find a number satisfying multiple remainder conditions.
// **Example:** `x % 3 = 2`, `x % 5 = 3` → `x = 8`

#include <bits/stdc++.h>
using namespace std;

int main() {
    int m1, r1, m2, r2;

    cout << "Enter first modulus and remainder: ";
    cin >> m1 >> r1;

    cout << "Enter second modulus and remainder: ";
    cin >> m2 >> r2;

    int x = r1;

    while (x % m2 != r2) {
        x += m1;
    }

    cout << "Smallest solution: " << x << endl;

    return 0;
}

/*
Javascript

const m1 = Number(prompt("Enter first modulus:"));
const r1 = Number(prompt("Enter first remainder:"));
const m2 = Number(prompt("Enter second modulus:"));
const r2 = Number(prompt("Enter second remainder:"));

let x = r1;

while (x % m2 !== r2) {
    x += m1;
}

console.log("Smallest solution:", x);

*/