// You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.

// An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.
// Example 1:

// Input: n = 153

// Output: true

// Explanation: Number of digits : 3.

// 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153.

// Therefore, it is an Armstrong number.
// Example 2:

// Input: n = 12

// Output: false

// Explanation: Number of digits : 2.

// 1^2 + 2^2 = 1 + 4 = 5.

// Therefore, it is not an Armstrong number.

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

int org =n;
int sum=0;
int  lenght = (n==0)?1:log10(abs(n))+1;
while (org>0)
{
    int dg =org%10;
    sum=round(pow(dg,lenght))+sum;
    org=org/10;

}

if(sum==n){
    cout<<"Its a armstrong number "<<n<<" sum is "<<sum;
}else{
    cout<<"Its not a armstrong number "<<n<<" sum is "<<sum;
}


            
        return 0;
    }

    /*
    javascript
    let n = Number(prompt("Enter number -:"));

// Find number of digits
let length = n === 0 ? 1 : Math.floor(Math.log10(n)) + 1;

let org = n;
let sum = 0;

while (org > 0) {
    let digit = org % 10;

    sum += digit ** length;

    org = Math.floor(org / 10);
}

if (sum === n) {
    console.log(`It is an Armstrong number: ${n}, sum is ${sum}`);
} else {
    console.log(`It is not an Armstrong number: ${n}, sum is ${sum}`);
}
    
    */