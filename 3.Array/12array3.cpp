// 17. Remove Duplicates from a Sorted Array In Place
// Easy
// Problem: Modify a sorted array so each distinct value appears once at the beginning; return the new logical length.
// Input: arr = [1, 1, 2, 2, 3]
// Output: arr prefix = [1, 2, 3], length = 3
// Explanation: Keep one copy of each consecutive value. Elements beyond the returned length need not matter.
// Pattern: Two pointers, in-place modification


// 18. Remove a Specified Value In Place
// Easy
// Problem: Remove all occurrences of a target by rearranging the array in place and return the new logical length.
// Input: arr = [3, 2, 2, 3, 4], target = 3
// Output: arr prefix = [2, 2, 4], length = 3
// Explanation: The remaining prefix contains only elements different from 3; their order is preserved.
// Pattern: Read/write pointers, in-place filtering

// 19. Move Zeroes to the End
// Easy
// Problem: Move every zero to the end while preserving the order of nonzero elements.
// Input: arr = [0, 1, 0, 3, 12]
// Output: [1, 3, 12, 0, 0]
// Explanation: Collect the nonzero values in their original order and place the zeros afterward.
// Pattern: Two pointers, stable in-place rearrangement


#include <bits/stdc++.h>
using namespace std;

// 17. Remove duplicates from a sorted array
int removeDuplicates(vector<int>& arr) {
    if (arr.empty()) return 0;

    int write = 1;

    for (int read = 1; read < arr.size(); read++) {
        if (arr[read] != arr[write - 1]) {
            arr[write] = arr[read];
            write++;
        }
    }

    return write;
}

// 18. Remove all occurrences of a target
int removeElement(vector<int>& arr, int target) {
    int write = 0;

    for (int read = 0; read < arr.size(); read++) {
        if (arr[read] != target) {
            arr[write] = arr[read];
            write++;
        }
    }

    return write;
}

// 19. Move zeroes to the end
void moveZeroes(vector<int>& arr) {
    int write = 0;

    // Move nonzero elements to the front, preserving order
    for (int read = 0; read < arr.size(); read++) {
        if (arr[read] != 0) {
            arr[write] = arr[read];
            write++;
        }
    }

    // Fill the remaining positions with zeroes
    while (write < arr.size()) {
        arr[write] = 0;
        write++;
    }
}

int main() {
    // Problem 17
    vector<int> arr1 = {1, 1, 2, 2, 3, 4, 4, 5, 5, 6, 6, 7, 8, 9};
    int k1 = removeDuplicates(arr1);

    cout << "Problem 17 - Length: " << k1 << '\n';
    cout << "Unique prefix: ";
    for (int i = 0; i < k1; i++) cout << arr1[i] << " ";
    cout << "\n\n";

    // Problem 18
    vector<int> arr2 = {3, 2, 2, 3, 4, 1, 1, 2, 2, 3, 4, 4, 5, 5, 6, 6, 7, 8, 9};
    int k2 = removeElement(arr2, 3);

    cout << "Problem 18 - Length: " << k2 << '\n';
    cout << "Remaining prefix: ";
    for (int i = 0; i < k2; i++) cout << arr2[i] << " ";
    cout << "\n\n";

    // Problem 19
    vector<int> arr3 = {1,1,1,1,1,1,1,1,1,1,1,1,1,0, 0, 0, 0, 0, 0, 0, 1, 23, 3, 4, 5, 6, 777, 6, 5};

    moveZeroes(arr3);

    cout << "Problem 19 - Array: ";
    for (int x : arr3) cout << x << " ";
    cout << '\n';

    return 0;
}

/*
Javascript 



const removeDuplicates = (arr) => {
    if (arr.length === 0) return 0;

    let write = 1;

    for (let read = 1; read < arr.length; read++) {
        if (arr[read] !== arr[write - 1]) {
            arr[write] = arr[read];
            write++;
        }
    }

    return write;
};

const removeElement = (arr, target) => {
    let write = 0;

    for (let read = 0; read < arr.length; read++) {
        if (arr[read] !== target) {
            arr[write] = arr[read];
            write++;
        }
    }

    return write;
};

const moveZeroes = (arr) => {
    let write = 0;

    // Move nonzero elements forward
    for (let read = 0; read < arr.length; read++) {
        if (arr[read] !== 0) {
            arr[write] = arr[read];
            write++;
        }
    }

    // Fill remaining positions with zeroes
    while (write < arr.length) {
        arr[write] = 0;
        write++;
    }
};

// Problem 17
const arr1 = [1, 1, 2, 2, 3, 4, 4, 5, 5, 6, 6, 7, 8, 9];
const k1 = removeDuplicates(arr1);

console.log("Problem 17 - Length:", k1);
console.log("Unique prefix:", arr1.slice(0, k1));

// Problem 18
const arr2 = [3, 2, 2, 3, 4, 1, 1, 2, 2, 3, 4, 4, 5, 5, 6, 6, 7, 8, 9];
const k2 = removeElement(arr2, 3);

console.log("Problem 18 - Length:", k2);
console.log("Remaining prefix:", arr2.slice(0, k2));

// Problem 19
const arr3 = [0, 0, 0, 0, 0, 0, 0, 1, 23, 3, 4, 5, 6, 777, 6, 5];

moveZeroes(arr3);

console.log("Problem 19 - Array:", arr3);



*/