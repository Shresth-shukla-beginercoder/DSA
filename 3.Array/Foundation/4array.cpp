// Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.

// Example 1:
// Input: n=5, arr = [1,2,3,4,5]

// Output: [5,4,3,2,1]

// Explanation: The reverse of the array [1,2,3,4,5] is [5,4,3,2,1]


#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    // Reverse the array in place
    reverse(arr.begin(), arr.end());

    cout << "Reversed array: ";
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}

/*

const arr = [1, 2, 3, 4, 5];

// Reverse the array in place
arr.reverse();

console.log("Reversed array:", arr);


*/