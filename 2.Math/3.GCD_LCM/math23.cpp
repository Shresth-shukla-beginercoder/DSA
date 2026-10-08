// ### 11. Coprime Check

// **Question:** Check whether two numbers have GCD equal to `1`.
// **Example:** `8, 15` → **Coprime**


#include <bits/stdc++.h>
    using namespace std;

    int main(){
int a,b;
cout<<"Enter =>";
cin>>a>>b;
int gc= gcd(a,b);

if(gc==1){
    cout<<"The 2 number is co prime";
}else{
 cout<<"The 2 number is not co prime";
}

        return 0;
    }

/*
Javascript

function gcd(a, b) {
    while (b !== 0) {
        [a, b] = [b, a % b];
    }

    return Math.abs(a);
}

function isCoprime(a, b) {
    return gcd(a, b) === 1;
}

const a = Number(prompt("Enter first number => "));
const b = Number(prompt("Enter second number => "));

if (isCoprime(a, b)) {
    console.log("The 2 numbers are coprime");
} else {
    console.log("The 2 numbers are not coprime");
}

*/