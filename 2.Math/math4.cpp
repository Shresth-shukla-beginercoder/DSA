// You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.

// A palindrome number is a number which reads the same both left to right and right to left.

// Example 1:
// Input: n = 121

// Output: true

// Explanation: When read from left to right : 121.

// When read from right to left : 121.

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


int org=n;
int rev=0;
while(org>0){
    int digit = org%10;
    rev = rev*10+digit;
    org = org/10;
}
if(rev==n){
    cout<<"This is palimdrome";
}
else{
    cout<<"This is not palimdrome";
}


        return 0;
    }



/*
Javascript

const n=prompt("Enter number for palindrome -:");
let org =n;
let rev = Number(String(n).split('').reverse().join(''));
if(n==rev){
console.log(`The number is ${rev} a palindrome`);}
else{
console.log(`The number is ${rev} not a palindrome`);
}
*/