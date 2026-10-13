// ### 33. Count Set Bits

// **Question:** Count the number of `1`s in the binary representation.
// **Example:** `5 = 101` → **2 set bits**

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    while (n > 0) {
        if (n % 2 == 1) {
            count++;
        }

        n = n / 2;
    }

    cout << count;
    return 0;
}
/*
Javascrpt 
let n = Number(prompt("Enter a number:"));
let count = 0;

while (n > 0) {
    if (n % 2 === 1) {
        count++;
    }

    n = Math.floor(n / 2);
}

console.log(count);


*/