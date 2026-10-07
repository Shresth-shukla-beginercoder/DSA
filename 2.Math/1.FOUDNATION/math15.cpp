// ### 2. Sum of Digits

// **Question:** Find the sum of all digits of a number.
// **Example:** `1234` → `1 + 2 + 3 + 4 = 10`

#include <bits/stdc++.h>
    using namespace std;

    int main(){
int n;
cout<<"Ente num =>";
cin>>n;
int org=n;
int sum=0;
while(org!=0){
    int dg = org%10;
    sum=sum+dg;
    org/=10;

}
cout<<"The sum of all digit of "<<n<<" is "<<sum;

        return 0;
    }
//Javascript
// let n = 1234;
// let original = n;
// let sum = 0;

// while (n > 0) {
//     let digit = n % 10;
//     sum += digit;
//     n = Math.floor(n / 10);
// }

// console.log(`The sum of all digits of ${original} is ${sum}`);