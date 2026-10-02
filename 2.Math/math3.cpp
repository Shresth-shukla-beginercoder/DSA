// You are given an integer n. Return the integer formed by placing the digits of n in reverse order.

// Example 1:
// Input: n = 25

// Output: 52

// Explanation: Reverse of 25 is 52.

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
    int sh =org%10;
    
        
        rev=rev*10+sh;
    
    org=floor(org/10);

}
cout<<"The reverse of number "<<n<<" is "<<rev;

        return 0;
    }

/*
Javascript
let n=1200
let org =n;
let rev = Number(String(n).split('').reverse().join(''));
console.log(`The reverse of a number is ${rev}`);

*/