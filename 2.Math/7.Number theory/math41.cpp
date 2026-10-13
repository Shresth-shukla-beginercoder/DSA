// ### 29. Diophantine Equation

// **Question:** Find integer solutions to an equation such as `ax + by = c`.
// **Example:** `3x + 5y = 11` → `x = 2, y = 1`


#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 2, b = 3, c = 7;

    for (int x = -10; x <= 10; x++) {
        for (int y = -10; y <= 10; y++) {

            if ((a*x+b*y)==c) {
                cout << "x = " << x
                     << ", y = " << y << endl;
            }

        }
    }

    return 0;
}

/*
Javascript


let a = 2, b = 3, c = 7;

for (let x = -10; x <= 10; x++) {
    for (let y = -10; y <= 10; y++) {

        if (a * x + b * y === c) {
            console.log(`x = ${x}, y = ${y}`);
        }

    }
}
*/