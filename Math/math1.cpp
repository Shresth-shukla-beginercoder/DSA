// You are given an integer n. You need to return the number of digits in the number.

// The number will have no leading zeroes, except when the number is 0 itself.

// Example 1:
// Input: n = 4

// Output: 1

// Explanation: There is only 1 digit in 4.
#include <bits/stdc++.h>
    using namespace std;

    int main(){
    int set_max = INT16_MAX;
    int n;
    do {
    cout<<"Enter a number - ";
    cin>>n;

    if(n<0||n>set_max){
        cout<<"Invalid Input"<<endl;
    }
}while(n<=0||n>set_max);

int count =0;
if(n==0){
    count=1;
} 
else{
    int org =n;
    while(org>0){
     org = floor(org/10);
     count++;
    }
}
cout<<"This is a digit "<<count<<" of number "<<n;
        
        return 0;
    }



    /*
    JavaScript
    /*

let a = 0;
let count = 0;

if (a === 0) {
    count = 1;
} else {
    let org = a;

    while (org > 0) {
        org = Math.floor(org / 10);
        count++;
    }
}

console.log(`Total digits in ${a} is ${count}`);
    */