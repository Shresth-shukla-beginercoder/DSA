// You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.

// The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.

// Example 1:
// Input: n1 = 4, n2 = 6

// Output: 2

// Explanation: Divisors of n1 = 1, 2, 4, Divisors of n2 = 1, 2, 3, 6

// Greatest Common divisor = 2.

// Example 2:
// Input: n1 = 9, n2 = 8

// Output: 1

// Explanation: Divisors of n1 = 1, 3, 9 Divisors of n2 = 1, 2, 4, 8.

// Greatest Common divisor = 1.


#include <bits/stdc++.h>
    using namespace std;

    int main(){

    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    while (n2 != 0) {
        int remainder = n1 % n2;
        n1 = n2;
        n2 = remainder;
    }

    cout << "The GCD is = " << n1;
    return 0;
}



/*
Javacript
function gcd(a, b) {
  a = Math.abs(a);
  b = Math.abs(b);

  while (b !== 0) {                         
    [a, b] = [b, a % b];
  }

  return a;
}

console.log(gcd(4, 6)); // 2
console.log(gcd(9, 8)); // 1
console.log(gcd(48, 18)); // 6

*/

//Destructuring open
// while (b != 0)
// {
//     int remainder = a % b;
//     a = b;
//     b = remainder;
// }