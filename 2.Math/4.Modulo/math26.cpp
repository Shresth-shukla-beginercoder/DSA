// ### 14. Large Power Modulo `m`

// **Question:** Find `(aᵇ) % m`.
// **Example:** `(2⁵) % 7` → **4**

#include <bits/stdc++.h>
using namespace std;

int main() {

    long long b, p, m;

    cout << "Enter b, p, m => ";
    cin >> b >> p >> m;

    long long ans = 1;

    while (p > 0) {

        if (p % 2 == 1) {
            ans = (ans * b) % m;
        }

        b = (b * b) % m;
        p = p / 2;
    }

    cout << "Large power modulo = " << ans;

    return 0;
}

/*
Javascript

function powerModulo(b, p, m) {
    let ans = 1;

    while (p > 0) {

        if (p % 2 === 1) {
            ans = (ans * b) % m;
        }

        b = (b * b) % m;
        p = Math.floor(p / 2);
    }

    return ans;
}

console.log(powerModulo(2, 5, 7)); // 4
*/