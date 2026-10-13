// ### 24. Binary Strings Without Consecutive `1`s

// **Question:** Count binary strings of length `n` that don't contain `11`.
// **Example:** `n = 2` → `00, 01, 10` → **3**

#include <bits/stdc++.h>
using namespace std;

long long countStrings(int n) {
    if (n == 0) return 1;
    if (n == 1) return 2;

    long long a = 1, b = 2;

    for (int i = 2; i <= n; i++) {
        long long c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    int n;
    cin >> n;

    cout << countStrings(n);
    return 0;
}

/*
Javascript

function countStrings(n) {
    if (n === 0) return 1;
    if (n === 1) return 2;

    let a = 1;
    let b = 2;

    for (let i = 2; i <= n; i++) {
        let c = a + b;
        a = b;
        b = c;
    }

    return b;
}

const n = 4;
console.log(countStrings(n)); // Output: 8
*/