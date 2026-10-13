// ### 23. nPr

// **Question:** Choose and arrange `r` objects from `n` objects where order matters.
// **Example:** `5P2` → **20**


#include <bits/stdc++.h>
using namespace std;

long long nPr(int n, int r) {
    if (r < 0 || r > n) {
        return 0;
    }

    long long ans = 1;

    for (int i = 0; i < r; i++) {
        ans *= (n - i);    // n * (n - 1) * (n - 2) * ... * (n - r + 1) where i = r-1
    }

    return ans;
}

int main() {
    int n, r;
    cin >> n >> r;

    cout << nPr(n, r);

    return 0;
}
/*Javascript



function nPr(n, r) {
    if (r < 0 || r > n) {
        return 0;
    }

    let ans = 1;

    for (let i = 0; i < r; i++) {
        ans *= (n - i);
    }

    return ans;
}

console.log(nPr(5, 2)); // 20
console.log(nPr(6, 3)); // 120
*/