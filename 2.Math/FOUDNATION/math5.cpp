// You are given an integer n. Return the largest digit present in the number.
// Example 1:

// Input: n = 25

// Output: 5

// Explanation: The largest digit in 25 is 5.
// Example 2:

// Input: n = 99

// Output: 9

// // Explanation: The largest digit in 99 is 9.

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
}while(n<=0||n>set_max);

int org=n;
int max=0;
while(org>0){
    int digit =org%10;
   if(digit>max){
    max=digit;
   }
    org=org/10;

}


cout<<"The largest digit is "<<max;

        return 0;
    }

/*
Javacript

const n = Number(prompt("Enter a number:"));

if (Number.isNaN(n)) {
    console.log("Invalid input. Please enter a number.");
} else {
    let temp = Math.abs(n);
    let maxDigit = 0;

    while (temp > 0) {
        const digit = temp % 10;
        maxDigit = Math.max(maxDigit, digit);
        temp = Math.floor(temp / 10);
    }

    console.log(`The largest digit is ${maxDigit}`);
}
*/