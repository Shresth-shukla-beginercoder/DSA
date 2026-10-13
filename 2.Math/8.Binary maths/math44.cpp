// ## Binary / Math

// ### 32. Power of Two

// **Question:** Check whether a number is a power of `2`.
// **Example:** `16` → **Yes**

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "No";
        return 0;
    }

    while (n % 2 == 0) {
        n = n / 2;
    }

    if (n == 1) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}

/*
Jvascrript
let n = 16;

if (n <= 0) {
    console.log("No");
} else {
    while (n % 2 === 0) {
        n = n / 2;
    }

    if (n === 1) {
        console.log("Yes");
    } else {
        console.log("No");
    }
}


*/