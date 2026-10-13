
// ## Counting

// ### 22. nCr

// **Question:** Choose `r` objects from `n` objects where order does not matter.
// **Example:** `5C2` → **10**



#include <bits/stdc++.h>
using namespace std;

long long fact(int n) {
    long long ans = 1;

    for (int i = 1; i <= n; i++) {
        ans *= i;
    }

    return ans;
}

int main() {
    int n, r;
    cin >> n >> r;

    if (r < 0 || r > n) {
        cout << 0;
        return 0;
    }

    long long nCr = fact(n) / (fact(r) * fact(n - r));

    cout << nCr;

    return 0;
}


/*
Javascript


function fact(n) {
    let ans = 1;

    for (let i = 1; i <= n; i++) {
        ans *= i;
    }

    return ans;
}

function nCr(n, r) {
    if (r < 0 || r > n) {
        return 0;
    }

    return fact(n) / (fact(r) * fact(n - r));
}

let n = 5;
let r = 2;

console.log(nCr(n, r));


*/