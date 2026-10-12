// ### 20. Fibonacci

// **Question:** Find the Fibonacci number at a given position.
// **Example:** `F(7)` → **13**

#include <bits/stdc++.h>
    using namespace std;

    int main(){
int n;
cout<<"Enter n =>";
cin>>n;

int f1 = 0;
int f2 = 1;

for (int i = 0; i <=n; i++) {
    
    if(i==0){
    
        cout<<f1<<" ";
    }else if(i==1){
        cout<<f2<<" ";
    }else{


        int temp = f1 + f2;
        f1 = f2;
        f2 = temp;
        cout<<f2<<" ";
    }

}



        return 0;
    }

    /*
    Javascript

    
let n = 7;

let f1 = 0;
let f2 = 1;

console.log(f1);
console.log(f2);

for (let i = 2; i <= n; i++) {
    let temp = f1 + f2;
    f1 = f2;
    f2 = temp;

    console.log(f2);
}

    
    */