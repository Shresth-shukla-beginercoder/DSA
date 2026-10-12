// ### 17. Extended Euclidean Algorithm

// **Question:** Find `x` and `y` such that `ax + by = gcd(a,b)`.
// **Example:** `30x + 20y = 10` → `x = 1, y = -1`


#include <bits/stdc++.h>
using namespace std;

int extendedGCD(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    int x1, y1;
    int g = extendedGCD(b, a % b, x1, y1);

    x = y1;
    y = x1 - (a / b) * y1;

    return g;
}

int main() {
    int x, y,a,b;
cout<<"Enter a,b => ";
cin>>a>>b;
    int g = extendedGCD(a, b, x, y);

    cout << "GCD = " << g << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}


/*
Javascript 


function extendedGCD(a, b) {
    if (b === 0) {
        return { gcd: a, x: 1, y: 0 };
    }

    let result = extendedGCD(b, a % b);

    let x = result.y;
    let y = result.x - Math.trunc(a / b) * result.y;

    return {
        gcd: result.gcd,
        x: x,
        y: y
    };
}

let result = extendedGCD(30, 20);

console.log("GCD =", result.gcd);
console.log("x =", result.x);
console.log("y =", result.y);

*/