// You are given an integer n. You need to check if the number is a perfect number or not. Return true if it is a perfect number, otherwise, return false.

// A perfect number is a number whose proper divisors (excluding the number itself) add up to the number itself.
// Example 1:

// Input: n = 6

// Output: true

// Explanation: Proper divisors of 6 are 1, 2, 3.

// 1 + 2 + 3 = 6.
// Example 2:

// Input: n = 4

// Output: false

// Explanation: Proper divisors of 4 are 1, 2.

// 1 + 2 = 3.

#include <bits/stdc++.h>
    using namespace std;

    int main(){
  int set_max = INT_MAX;
    int n;
    do {
    cout<<"Enter a number - ";
    cin>>n;

    if(n<0||n>set_max){
        cout<<"Invalid Input"<<endl;
    }
}while(n<0||n>set_max);
  int sum = 0;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            int partner = n / i;

            // n itself is not a proper divisor
            if (i != n) {
                sum += i;
            }

            // Add the paired divisor, avoiding duplicate sqrt(n)
            if (partner != i && partner != n) {
                sum += partner;
            }
        }
    }

    if (sum == n) {
        cout << "The Number " << n << " is a Perfect Number";
    } else {
        cout << "The Number " << n << " is not a Perfect Number";
    }

        return 0;
    }

/*Javascript

let n = 28;
let sum = 0;

for (let i = 1; i * i <= n; i++) {
    if (n % i === 0) {
        let partner = n / i;

        // n itself is not a proper divisor
        if (i !== n) {
            sum += i;
        }

        // Add paired divisor, avoiding duplicate sqrt(n)
        if (partner !== i && partner !== n) {
            sum += partner;
        }
    }
}

if (sum === n) {
    console.log(`The Number ${n} is a Perfect Number`);
} else {
    console.log(`The Number ${n} is not a Perfect Number`);
}

*/