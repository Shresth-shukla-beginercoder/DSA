// ### 25. Subset Counting

// **Question:** Find the number of possible subsets of `n` elements.
// **Example:** `{A, B}` → **4 subsets**
#include <bits/stdc++.h>
using namespace std;

long long countSubsets(int n) {
    long long count = 1;

    for (int i = 1; i <= n; i++) {
        count = count * 2;
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    cout << countSubsets(n);
    return 0;
}/*
Javascript 
function countSubsets(n) {
    let count = 1;

    for (let i = 1; i <= n; i++) {
        count = count * 2;
    }

    return count;
}

console.log(countSubsets(3)); // 8


*/