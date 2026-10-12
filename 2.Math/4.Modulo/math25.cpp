// ## Modulo

// ### 13. Fast Exponentiation

// **Question:** Find a large power efficiently.
// **Example:** `2⁵` → **32**

#include <bits/stdc++.h>
    using namespace std;

    int main(){
int b,p;
cout<<"Enter a number base and power =>";
cin>>b>>p;


 long long ans = 1;

    while (p > 0) {

        if (p % 2 == 1) {
            ans = ans * b;
        }

        b = b * b;
        p = p / 2;
    }

    cout << ans;


        return 0;
    }

/*
Javascript

function fastPower(b, p) {
    let ans = 1;

    while (p > 0) {
        if (p % 2 === 1) {
            ans = ans * b;
        }

        b = b * b;
        p = Math.floor(p / 2);
    }

    return ans;
}

console.log(fastPower(2, 5)); // 32

*/