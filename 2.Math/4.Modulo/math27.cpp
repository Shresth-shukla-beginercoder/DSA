
// ### 15. Large Number Modulo `m`

// **Question:** Find the remainder when a large number is divided by `m`.
// **Example:** `12345 % 7` → **4**
#include <bits/stdc++.h>
using namespace std;

int main() {

    string n;
    int m;

    cout << "Enter a number & m => ";
    cin >> n >> m;

    int rem = 0;

    for (char digit : n) {

        int dg = digit - '0';

        rem = (rem * 10 + dg) % m;
    }

    cout << "The remainder => " << rem;

    return 0;
}

/*
Javascript 

function largeModulo(n, m) {
    let rem = 0;

    for (let digit of n) {
        let dg = Number(digit);

        rem = (rem * 10 + dg) % m;
    }

    return rem;
}

console.log(largeModulo("12345", 7)); // 4

*/