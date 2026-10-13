
// ### 31. Fermat's Little Theorem

// **Question:** Use modular properties of powers when the modulus is prime.
// **Example:** `3⁶ % 7` → **1**

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 2, p = 5;
    int result = 1;

    for (int i = 1; i <= p - 1; i++) {
        result = (result * a) % p;
    }

    cout << result << endl;

    return 0;
}

/*
Javascript 

let a = 2, p = 5;
let result = 1;

for (let i = 1; i <= p - 1; i++) {
    result = (result * a) % p;
}

console.log(result); // 1


*/