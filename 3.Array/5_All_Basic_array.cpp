// 1. Find the Largest Element
// Basic
// Problem: Return the maximum element in an array.
// Input: arr = [4, 9, 2, 7, 5]
// Output: 9
// Explanation: Compare the elements and keep track of the largest value found so far.
// Pattern: Linear traversal, running maximum


// 2\. Find the Smallest Element
// Basic
// Problem: Return the minimum element in an array.
// Input: `arr = [8, 3, 6, 1, 5]`
// Output: `1`
// Explanation: Compare each element against the smallest value found so far.
// Pattern: Linear traversal, running minimum


// 3\. Search for an Element (Linear Search)
// Basic
// Problem: Determine whether a target exists in the array and return its index, or `-1` if absent.
// Input: `arr = [10, 20, 30, 40]`, `target = 30`
// Output: `2`
// Explanation: Check indices 0 and 1, then find the target at index 2.
// Pattern: Linear search, indexing


// 4\. Find the Index of the First Occurrence
// Basic
// Problem: Return the index of the first occurrence of a target, even if it appears multiple times.
// Input: `arr = [5, 2, 5, 7]`, `target = 5`
// Output: `0`
// Explanation: The target appears at indices 0 and 2; the first index is 0.
// Pattern: Traversal, duplicate handling


// 5\. Count Occurrences of a Target
// Basic
// Problem: Count how many times a given value appears.
// Input: `arr = [2, 4, 2, 2, 7]`, `target = 2`
// Output: `3`
// Explanation: The value 2 occurs three times.
// Pattern: Counting, frequency


// 6\. Find the Second Occurrence of a Target
// Basic
// Problem: Return the index of the second occurrence of a target, or `-1` if it occurs fewer than twice.
// Input: `arr = [4, 8, 4, 2, 4]`, `target = 4`
// Output: `2`
// Explanation: The occurrences are at indices 0, 2 and 4. The second is at index 2.
// Pattern: Traversal, occurrence tracking



// connect this all question in one which i just solve the largest elemnt make fuction for all

#include <bits/stdc++.h>
using namespace std;

// 1. Find the largest element
int findLargest(vector<int>& arr) {
    int largest = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

// 2. Find the smallest element
int findSmallest(vector<int>& arr) {
    int smallest = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    return smallest;
}

// 3. Search for an element
int linearSearch(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;
        }
    }

    return -1;
}

// 4. Find the first occurrence
int firstOccurrence(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;
        }
    }

    return -1;
}

// 5. Count occurrences
int countOccurrences(vector<int>& arr, int target) {
    int count = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    return count;
}

// 6. Find the second occurrence
int secondOccurrence(vector<int>& arr, int target) {
    int count = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            count++;

            if (count == 2) {
                return i;
            }
        }
    }

    return -1;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be positive.";
        return 0;
    }

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    cout << "Largest element: " << findLargest(arr) << '\n';
    cout << "Smallest element: " << findSmallest(arr) << '\n';
    cout << "Linear search index: " << linearSearch(arr, target) << '\n';
    cout << "First occurrence: " << firstOccurrence(arr, target) << '\n';
    cout << "Count occurrences: " << countOccurrences(arr, target) << '\n';
    cout << "Second occurrence: " << secondOccurrence(arr, target) << '\n';

    return 0;
}

/*

function findLargest(arr) {
    let largest = arr[0];

    for (let i = 1; i < arr.length; i++) {
        if (arr[i] > largest) largest = arr[i];
    }

    return largest;
}

function findSmallest(arr) {
    let smallest = arr[0];

    for (let i = 1; i < arr.length; i++) {
        if (arr[i] < smallest) smallest = arr[i];
    }

    return smallest;
}

function linearSearch(arr, target) {
    for (let i = 0; i < arr.length; i++) {
        if (arr[i] === target) return i;
    }

    return -1;
}

function firstOccurrence(arr, target) {
    for (let i = 0; i < arr.length; i++) {
        if (arr[i] === target) return i;
    }

    return -1;
}

function countOccurrences(arr, target) {
    let count = 0;

    for (let i = 0; i < arr.length; i++) {
        if (arr[i] === target) count++;
    }

    return count;
}

function secondOccurrence(arr, target) {
    let count = 0;

    for (let i = 0; i < arr.length; i++) {
        if (arr[i] === target) {
            count++;

            if (count === 2) return i;
        }
    }

    return -1;
}

// Test all functions
const arr = [5, 2, 5, 7, 4];
const target = 5;

console.log("Largest:", findLargest(arr));
console.log("Smallest:", findSmallest(arr));
console.log("Linear search:", linearSearch(arr, target));
console.log("First occurrence:", firstOccurrence(arr, target));
console.log("Count occurrences:", countOccurrences(arr, target));
console.log("Second occurrence:", secondOccurrence(arr, target));



*/