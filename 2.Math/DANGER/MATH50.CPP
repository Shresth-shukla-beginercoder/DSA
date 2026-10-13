// ## Advanced

// ### 38. Trailing Zeroes in Factorial

// **Question:** Find the number of zeros at the end of `n!`.
// **Example:** `10!` → **2 trailing zeroes**

#include <bits/stdc++.h>
using namespace std;

long long trailingZeroes(long long n) {
    long long ans = 0;

    while (n > 0) {
        n /= 5;
        ans += n;
    }

    return ans;
}

int main() {
    long long n;
    cin >> n;

    cout << trailingZeroes(n) << '\n';
    return 0;
}

/*
JavaScript

function trailingZeroes(n) {
    let ans = 0;

    while (n > 0) {
        n = Math.floor(n / 5);
        ans += n;
    }

    return ans;
}

console.log(trailingZeroes(30)); // 7

*/