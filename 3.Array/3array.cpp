// Given an array arr of size n, the task is to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order. If the array is sorted then return True, else return False.

// Example 1:Input: n = 5,

// arr = [1,2,3,4,5]Output:

// TrueExplanation:

// The given array is sorted i.e Every element in the array is smaller than or equals to its next values, So the answer is True.


#include <bits/stdc++.h>
using namespace std;

int main() {
int n ;
cout<<"Size of n array : ";
cin>>n;

vector<int>arr(n);
cout<<"Enter arr=>";
for(int i=0;i<n;i++){
    cin>>arr[i];
}

    bool ascending = true;
    bool descending = true;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1])
            ascending = false;

        if (arr[i] > arr[i - 1])
            descending = false;

        if (!ascending && !descending)
            break;
    }

    cout << ((ascending || descending) ? "True" : "False");

    return 0;
}
/*
Javascript


const arr = [5, 4, 3, 2, 1];

let ascending = true;
let descending = true;

for (let i = 1; i < arr.length; i++) {
    if (arr[i] < arr[i - 1]) ascending = false;
    if (arr[i] > arr[i - 1]) descending = false;

    if (!ascending && !descending) break;
}

console.log(ascending || descending);

*/
