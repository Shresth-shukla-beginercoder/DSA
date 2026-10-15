// 8. Find All Indices of a Target
// Basic
// Problem: Return every index where the target occurs.
// Input: arr = [7, 3, 7, 4, 7], target = 7
// Output: [0, 2, 4]
// Explanation: Collect each index at which the value equals 7.
// Pattern: Traversal, result collection

#include <bits/stdc++.h>
    using namespace std;
vector<int> indexesOfTarget(vector<int>& arr, int target) {
        vector<int> indices;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == target) {
                indices.push_back(i);
            }
        }

        return indices;
    }
    int main(){
       int n ,target;
cout<<"Size of n array & target : ";
cin>>n>>target;

vector<int>arr(n);
cout<<"Enter arr=>";
for(int i=0;i<n;i++){
    cin>>arr[i];
}

        vector<int> result = indexesOfTarget(arr, target);
        for (int index : result) {
            cout << index << " ";
        }
        return 0;
    }