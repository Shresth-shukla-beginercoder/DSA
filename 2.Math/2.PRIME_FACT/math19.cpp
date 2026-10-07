// ### 7. Sieve of Eratosthenes

// **Question:** Find all prime numbers from `2` to `n`.
// **Example:** `n = 10` → **2, 3, 5, 7**

#include <bits/stdc++.h>
    using namespace std;

    int main(){
int n;
cout<<"Enter =>";
cin>>n;
vector<bool>p(n+1,true);
p[0]=p[1]=false;

for(int i=2;i*i<=n;i++){
    if(p[i]){
        for(int j=i*i;j<=n;j+=i){
            p[j]=false;
        }
    }
}
cout<<"Prime number from 1 to n=>  "<<endl;
for (int i = 2; i <=n; i++)
{
    if(p[i]){
        cout<<i<<" ";
    }
}


return 0;
    }

/*
Javascript

*/