// You are given an integer n. Return the value of n! or n factorial.

// Factorial of a number is the product of all positive integers less than or equal to that number.
// Example 1:

// Input: n = 2

// Output: 2

// Explanation: 2! = 1 * 2 = 2.
// Example 2:

// Input: n = 0

// Output: 1

// Explanation: 0! is defined as 1

#include <bits/stdc++.h>
#include<cstdint>
    using namespace std;

    int main(){
        int set_max = 66;
    unsigned long long n;
    do {
    cout<<"Enter a number - ";
    cin>>n;

    if(n<0||n>set_max){
        cout<<"Invalid Input"<<endl;
    }
}while(n<0||n>set_max);
unsigned long long f=1;


for(unsigned long long i =1;i<=n;i++){
    f=f*i;
}

cout<<"The number "<<n<<" Factorial "<<f;


        return 0;
    }

/*
Javascript

const n = Number(prompt("Enter a number:"));

if (!Number.isInteger(n) || n < 0 || n > 20) {
    console.log("Invalid Input");
} else {
    let factorial = 1;

    for (let i = 1; i <= n; i++) {
        factorial *= i;
    }

    console.log(`The factorial of ${n} is ${factorial}`);
}
*/