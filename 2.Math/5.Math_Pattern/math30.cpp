// ## Mathematical Patterns

// ### 18. Happy Number

// **Question:** Check whether repeatedly summing the squares of digits eventually gives `1`.
// **Example:** `19` → **Happy number**


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cout << "Enter => ";
    cin >> n;

    int org = n;
    int sum = 0;

    while (n != 1 && n != 4) {
        sum = 0;

        while (n > 0) {
            int dg = n % 10;
            sum = sum + dg * dg;
            n = n / 10;
        }

        n = sum;
    }

    if (n == 1) {
        cout << "Happy number => " << org;
    } else {
        cout << "Not a Happy number => " << org;
    }

    return 0;
}
/*
Javascirpt

let n = 19;
let org = n;

while (n !== 1 && n !== 4) {
    let sum = 0;

    while (n > 0) {
        let digit = n % 10;
        sum += digit * digit;
        n = Math.floor(n / 10);
    }

    n = sum;
}

if (n === 1) {
    console.log("Happy Number =>", org);
} else {
    console.log("Not a Happy Number =>", org);
}

*/