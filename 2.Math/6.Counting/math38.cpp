// ### 26. Lattice Paths

// **Question:** Count the number of paths through a grid when only allowed movements can be made.
// **Example:** `2 × 2` grid → **6 paths**

#include <bits/stdc++.h>
using namespace std;

long long factorial(int n) {
    long long ans = 1;

    for (int i = 1; i <= n; i++) {
        ans *= i;
    }

    return ans;
}

long long latticePaths(int m, int n) {
    return factorial(m + n) /
           (factorial(m) * factorial(n));
}

int main() {
    int m, n;
    cin >> m >> n;

    cout << latticePaths(m, n);
    return 0;
}

/*
Javascript

function factorial(n) {
    let ans = 1;

    for (let i = 1; i <= n; i++) {
        ans *= i;
    }

    return ans;
}

function latticePaths(m, n) {
    return factorial(m + n) /
           (factorial(m) * factorial(n));
}

console.log(latticePaths(2, 2)); // 6
console.log(latticePaths(3, 1)); // 4
*/