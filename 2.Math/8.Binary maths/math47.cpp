// ### 35. XOR Range

// **Question:** Find the XOR of all numbers between two given numbers.
// **Example:** `[3, 5]` → `3 XOR 4 XOR 5` → **2**

#include <bits/stdc++.h>
using namespace std;

int prefixXor(int n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}

int main() {
    int L, R;
    cin >> L >> R;

    cout << (prefixXor(R) ^ prefixXor(L - 1)) << endl;

    return 0;
}

/*
Javascript 
function prefixXor(n) {
    if (n % 4 === 0) return n;
    if (n % 4 === 1) return 1;
    if (n % 4 === 2) return n + 1;
    return 0;
}

const L = 3;
const R = 5;

console.log(prefixXor(R) ^ prefixXor(L - 1)); // 2



*/