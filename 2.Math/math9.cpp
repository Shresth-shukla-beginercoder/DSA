// You are given an integer n. You need to check if the number is prime or not. Return true if it is a prime number, otherwise return false.

// A prime number is a number which has no divisors except 1 and itself.

// Example 1:
// Input: n = 5

// Output: true

// Explanation: The only divisors of 5 are 1 and 5 , So the number 5 is prime.

// Example 2:
// Input: n = 8

// Output: false

// Explanation: The divisors of 8 are 1, 2, 4, 8, thus it is not a prime number.

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

if(n<=1){
    cout<<"The number is Not a Prime";
    return 0;
}

bool isprime = true;

for (int i = 2; i*i <=n; i++)
{
    if(n%i==0){
        isprime=false;
        break;
    }
}
if(isprime){
cout<<"The number is a Prime :Ture";
}else{
    cout<<"The number is Not a Prime";
}


        return 0;
    }


/*
Javascript 

let n = 5;

if (n <= 1) {
    console.log("The number is Not a Prime");
} else {
    let isPrime = true;

    for (let i = 2; i * i <= n; i++) {

        if (n % i === 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        console.log("The number is a Prime");
    } else {
        console.log("The number is Not a Prime");
    }
}

*/