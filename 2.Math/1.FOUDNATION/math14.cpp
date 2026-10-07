// ### 1. Digit Frequency

// **Question:** Find how many times a particular digit appears in a number.
// **Example:** `122333`, digit `3` → **3 times**

#include <bits/stdc++.h>
    using namespace std;

    int main(){
unsigned long long n;
cout<<"Enter a number => ";
cin>>n;
vector<unsigned long long>v(10,0);

if(n==0){
    v[0]=1;
}
while (n!=0)
{
unsigned long long dg= n%10;
v[dg]++;
n/=10;
}
for(unsigned long long i =0;i<10;i++){
    if(v[i]>0){
        cout<<"Digit "<<i<<" appears "<<v[i]<<" times"<<endl;
    }
}

        return 0;
    }

/*

Javascript

let n = 122333;

let freq = new Array(10).fill(0);

if (n === 0) {
    freq[0] = 1;
}

while (n > 0) {
    let digit = n % 10;
    freq[digit]++;
    n = Math.floor(n / 10);
}

for (let i = 0; i < 10; i++) {
    if (freq[i] > 0) {
        console.log(`Digit ${i} appears ${freq[i]} times`);
    }
}
*/