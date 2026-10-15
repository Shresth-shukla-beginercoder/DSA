// Given an array arr of size n, the task is to find the sum of all the elements in the array.

// Example 1:
// Input: n=5, arr = [1,2,3,4,5]

// Output: 15

// Explanation: Sum of all the elements is 1+2+3+4+5 = 15

// Example 2:
// Input: n=6, arr = [1,2,1,1,5,1]

// Output: 11

// Explanation: Sum of all the elements is 1+2+1+1+5+1 = 11

#include <bits/stdc++.h>
    using namespace std;

    int main(){
int n ;
cout<<"Size of n array : ";
cin>>n;

vector<int>vec(n);
cout<<"Enter arr=>";
for(int i=0;i<n;i++){
    cin>>vec[i];
}

int sum = reduce(vec.begin(),vec.end(),0);
cout<<"Sum of all =>"<<sum;
        return 0;
    }

    /*
    
const arr = [1, 2, 3, 4, 5];

const sum = arr.reduce((total, element) => total + element, 0);

console.log("Sum of all elements:", sum);

    
    */