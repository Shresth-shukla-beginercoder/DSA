// 7. Find the Frequency of Every Distinct Element
// Basic
// Problem: Report the number of occurrences of each distinct value.
// Input: arr = [2, 3, 2, 5, 3, 2]
// Output: 2 → 3, 3 → 2, 5 → 1
// Explanation: Count each distinct value instead of counting only one specified target.
// Pattern: Hash map, frequency counting


#include <bits/stdc++.h>
using namespace std;

void freq(vector<int>& arr) {
    unordered_map<int, int> frequency;

    // Count each element
    for (int x : arr) {
        frequency[x]++;
    }

    // Print each distinct element and its frequency
    for (auto& p : frequency) {
        cout << p.first << " => " << p.second << '\n';
    }
}

int main() {
    int n;
    cin >> n;

    if (n <= 0) return 0;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    freq(arr);

    return 0;
}

/*
Javascript


function freq(arr) {
    const frequency = new Map();

    for (const x of arr) {
        frequency.set(x, (frequency.get(x) || 0) + 1);
    }

    for (const [value, count] of frequency) {
        console.log(`${value} => ${count}`);
    }
}

const arr = [2, 3, 2, 5, 3, 2];
freq(arr);


*/