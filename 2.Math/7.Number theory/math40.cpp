
// ### 28. Euler Totient

// **Question:** Count numbers from `1` to `n` that are coprime with `n`.
// **Example:** `φ(6)` → **2** (`1, 5`)

#include <bits/stdc++.h>
    using namespace std;

    int main(){
int n;
cin>>n;
int count =0;
for(int i =1;i<=n;i++){
    if(gcd(i,n)==1){
        count++;
    }
}
cout<<count;
        return 0;
    }

/*
Javascript 

function gcd(a, b) {
    while (b !== 0) {
        let temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

function eulerTotient(n) {
    let count = 0;

    for (let i = 1; i <= n; i++) {
        if (gcd(i, n) === 1) {
            count++;
        }
    }

    return count;
}

console.log(eulerTotient(8)); // 4
console.log(eulerTotient(6)); // 2


*/