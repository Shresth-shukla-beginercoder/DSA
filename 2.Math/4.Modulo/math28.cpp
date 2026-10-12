// ### 16. Modular Inverse

// **Question:** Find a number that gives remainder `1` when multiplied by the given number modulo `m`.
// **Example:** Inverse of `3 mod 7` → **5**


#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 3, m = 7;

    for (int x = 1; x < m; x++) {
        if ((a * x) % m == 1) {
            cout << x;
            break;
        }
    }

    return 0;
}

/*


Javascript


let a = 3;
let m = 7;

for (let x = 1; x < m; x++) {
    if ((a * x) % m === 1) {
        console.log(x);
        break;
    }
}
*/