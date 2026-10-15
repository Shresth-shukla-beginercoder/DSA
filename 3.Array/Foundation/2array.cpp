// Given an array of n elements. The task is to return the count of the number of odd numbers in the array.

// Example 1:
// Input: n=5, array = [1,2,3,4,5]

// Output: 3

// Explanation: The three odd elements are (1,3,5).

// Example 2:
// Input: n=6, array = [1,2,1,1,5,1]

// Output: 5

// Explanation: The five odd elements are one 5 and four 1's.

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
int count =0;

for(int  i=0;i<n;i++){
if(vec[i]%2!=0){
    count++;
}

}
cout<<"Odd number => "<<count;


        return 0;
    }
    /*
    javascript 
    const arr = [1, 2, 3, 4, 5];

const count = arr.filter(num => num % 2 !== 0).length;

console.log(count); // 3
    */