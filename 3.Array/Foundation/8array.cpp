// 9. Find All Duplicate Values
// Basic
// Problem: Return the distinct values that occur more than once.
// Input: arr = [1, 2, 3, 2, 4, 1, 1]
// Output: [1, 2]
// Explanation: Both 1 and 2 repeat; each should appear only once in the answer.
// Pattern: Hashing, frequency map, sets
#include <bits/stdc++.h>
    using namespace std;
void dub(vector<int>v){
    unordered_map<int,int>freq;

    for(int i =0;i<v.size();i++){
        freq[v[i]]++;
    }
cout<<"The dub are => "<<endl;
    for(auto it:freq){
        if(it.second>1){
            cout<<it.first<<endl;
        }
    }
}
    int main(){
int n ;
cout<<"Size of n array : ";
cin>>n;

vector<int>arr(n);
cout<<"Enter arr=>";
for(int i=0;i<n;i++){
    cin>>arr[i];
}

dub(arr);
        return 0;
    }

/*
function findDuplicates(arr) {
    const freq = new Map();

    // Step 1: Count the frequency of every element
    for (const x of arr) {
        freq.set(x, (freq.get(x) || 0) + 1);
    }

    // Step 2: Store distinct duplicate values
    const duplicates = [];

    for (const [value, count] of freq) {
        if (count > 1) {
            duplicates.push(value);
        }
    }

    return duplicates;
}

// Example
const arr = [1, 2, 3, 2, 4, 1, 1];

console.log(findDuplicates(arr)); // [1, 2]

*/