
// ### 34. XOR `1...n`

// **Question:** Find the XOR of all numbers from `1` to `n`.
// **Example:** `1 XOR 2 XOR 3` → **0**

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 4 == 0)
        cout << n;
    else if (n % 4 == 1)
        cout << 1;
    else if (n % 4 == 2)
        cout << n + 1;
    else
        cout << 0;

    return 0;
} 

/*
let n = Number(prompt("Enter n:"));

if (n % 4 === 0) {
    console.log(n);
} else if (n % 4 === 1) {
    console.log(1);
} else if (n % 4 === 2) {
    console.log(n + 1);
} else {
    console.log(0);
}

*/