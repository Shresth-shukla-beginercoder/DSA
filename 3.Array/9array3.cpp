
// 10\. Find the First Repeating Element
// Basic
// Problem: Find the first element, scanning from left to right, that occurs more than once anywhere in the array.
// Input: `arr = [10, 5, 3, 4, 3, 5, 6]`
// Output: `5`
// Explanation: The first 10 does not repeat, nor does the first 5 appear again until later. The first element whose second occurrence is encountered earliest is 5 (at index 1, repeated at index 5).
// Pattern: Hashing, first-repeat semantics
// 11\. Check Whether Two Arrays Are Equal
// Basic
// Problem: Determine whether two arrays have the same elements in the same order.
// Input: `a = [1, 2, 3]`, `b = [1, 2, 3]`
// Output: `true`
// Explanation: Every corresponding pair of elements matches, and the lengths are equal.
// Pattern: Index-wise comparison
// 12\. Find the Common Elements of Two Arrays
// Basic
// Problem: Return the distinct values present in both arrays.
// Input: `a = [1, 2, 2, 3, 5]`, `b = [2, 2, 4, 5]`
// Output: `[2, 5]`
// Explanation: Values 2 and 5 occur in both arrays. The output contains each common value once.
// Pattern: Sets, hashing, intersection


#include <bits/stdc++.h>
using namespace std;

// 10. Find the first repeating element
int firstRepeating(vector<int>& arr) {
    unordered_map<int, int> freq;

    // Count frequency of every element
    for (int x : arr) {
        freq[x]++;
    }

    // Find the first repeating value from left to right
    for (int x : arr) {
        if (freq[x] > 1) {
            return x;
        }
    }

    return -1; // No repeating element
}

// 11. Check whether two arrays are equal
bool areEqual(vector<int>& a, vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

// 12. Find distinct common elements
vector<int> commonElements(vector<int>& a, vector<int>& b) {
    unordered_set<int> values(b.begin(), b.end());
    unordered_set<int> added;
    vector<int> result;

    for (int x : a) {
        if (values.count(x) && !added.count(x)) {
            result.push_back(x);
            added.insert(x);
        }
    }

    return result;
}

int main() {
    // Question 10
    vector<int> arr = {10, 5, 3, 4, 3, 5, 6};

    cout << "First repeating element: "
         << firstRepeating(arr) << '\n';

    // Question 11
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};

    cout << boolalpha;
    cout << "Arrays equal: " << areEqual(a, b) << '\n';

    // Question 12
    vector<int> c = {1, 2, 2, 3, 5};
    vector<int> d = {2, 2, 4, 5};

    vector<int> common = commonElements(c, d);

    cout << "Common elements: ";
    for (int x : common) {
        cout << x << " ";
    }
    cout << '\n';

    return 0;
}

/*
Javascript 

 // 10. Find the first repeating element
const firstRepeating = (arr) => {
    const freq = new Map();

    // Count frequencies
    for (const x of arr) {
        freq.set(x, (freq.get(x) || 0) + 1);
    }

    // Scan from left to right
    for (const x of arr) {
        if (freq.get(x) > 1) {
            return x;
        }
    }

    return -1;
};

// 11. Check whether two arrays are equal
const areEqual = (a, b) => {
    if (a.length !== b.length) {
        return false;
    }

    for (let i = 0; i < a.length; i++) {
        if (a[i] !== b[i]) {
            return false;
        }
    }

    return true;
};

// 12. Find distinct common elements
const commonElements = (a, b) => {
    const values = new Set(b);
    const added = new Set();
    const result = [];

    for (const x of a) {
        if (values.has(x) && !added.has(x)) {
            result.push(x);
            added.add(x);
        }
    }

    return result;
};

// Test all three functions
const arr = [10, 5, 3, 4, 3, 5, 6];
console.log("First repeating:", firstRepeating(arr));

const a = [1, 2, 3];
const b = [1, 2, 3];
console.log("Arrays equal:", areEqual(a, b));

const c = [1, 2, 2, 3, 5];
const d = [2, 2, 4, 5];
console.log("Common elements:", commonElements(c, d));

*/