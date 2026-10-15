// 20. Left-Rotate an Array by One Position
// Easy
// Problem: Move the first element to the end, shifting every other element one position left.
// Input: arr = [1, 2, 3, 4, 5]
// Output: [2, 3, 4, 5, 1]
// Explanation: Save the first element, shift the others left, then place the saved value at the end.
// Pattern: In-place shifting, temporary storage


// 21. Left-Rotate an Array by K Positions
// Easy
// Problem: Rotate the array left by k positions, where k may exceed the array length.
// Input: arr = [1, 2, 3, 4, 5, 6, 7], k = 3
// Output: [4, 5, 6, 7, 1, 2, 3]
// Explanation: The first three elements move to the end. For an array of length 7, a rotation of 10 would be equivalent to 3 because 10 % 7 = 3.
// Pattern: Rotation, modular arithmetic, reversal technique


// 22. Right-Rotate an Array by K Positions
// Easy
// Problem: Rotate the array right by k positions.
// Input: arr = [1, 2, 3, 4, 5], k = 2
// Output: [4, 5, 1, 2, 3]
// Explanation: The last two elements move to the front in their original order.
// Pattern: Rotation, modulo, reversal technique

#include <bits/stdc++.h>
using namespace std;

// 20. Left-Rotate by One Position
void leftRotate(vector<int>& arr) {
    if (arr.empty()) return;

    int first = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        arr[i - 1] = arr[i];
    }

    arr[arr.size() - 1] = first;
}

// Helper function for Problems 21 and 22
void reverseRange(vector<int>& arr, int left, int right) {
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

// 21. Left-Rotate by K Positions
void leftRotateK(vector<int>& arr, int k) {
    int n = arr.size();
    if (n == 0) return;

    k %= n;

    reverseRange(arr, 0, k - 1);
    reverseRange(arr, k, n - 1);
    reverseRange(arr, 0, n - 1);
}

// 22. Right-Rotate by K Positions
void rightRotateK(vector<int>& arr, int k) {
    int n = arr.size();
    if (n == 0) return;

    k %= n;

    reverseRange(arr, 0, n - 1);
    reverseRange(arr, 0, k - 1);
    reverseRange(arr, k, n - 1);
}

void printArray(const vector<int>& arr) {
    for (int x : arr) {
        cout << x << " ";
    }
    cout << '\n';
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    leftRotate(arr1);
    cout << "20. Left rotate by one: ";
    printArray(arr1);

    vector<int> arr2 = {1, 2, 3, 4, 5, 6, 7};
    leftRotateK(arr2, 3);
    cout << "21. Left rotate by k: ";
    printArray(arr2);

    vector<int> arr3 = {1, 2, 3, 4, 5};
    rightRotateK(arr3, 2);
    cout << "22. Right rotate by k: ";
    printArray(arr3);

    return 0;
}
/*
Javascript

// 20. Left-Rotate by One Position
const leftRotate = (arr) => {
    if (arr.length === 0) return;

    const first = arr[0];

    for (let i = 1; i < arr.length; i++) {
        arr[i - 1] = arr[i];
    }

    arr[arr.length - 1] = first;
};

// Helper function for Problems 21 and 22
const reverseRange = (arr, left, right) => {
    while (left < right) {
        [arr[left], arr[right]] = [arr[right], arr[left]];
        left++;
        right--;
    }
};

// 21. Left-Rotate by K Positions
const leftRotateK = (arr, k) => {
    const n = arr.length;
    if (n === 0) return;

    k %= n;

    reverseRange(arr, 0, k - 1);
    reverseRange(arr, k, n - 1);
    reverseRange(arr, 0, n - 1);
};

// 22. Right-Rotate by K Positions
const rightRotateK = (arr, k) => {
    const n = arr.length;
    if (n === 0) return;

    k %= n;

    reverseRange(arr, 0, n - 1);
    reverseRange(arr, 0, k - 1);
    reverseRange(arr, k, n - 1);
};

// Test all three problems
const arr1 = [1, 2, 3, 4, 5];
leftRotate(arr1);
console.log("20. Left rotate by one:", arr1);

const arr2 = [1, 2, 3, 4, 5, 6, 7];
leftRotateK(arr2, 3);
console.log("21. Left rotate by k:", arr2);

const arr3 = [1, 2, 3, 4, 5];
rightRotateK(arr3, 2);
console.log("22. Right rotate by k:", arr3);

*/