// 15. Find the Element with the Highest Frequency
// Easy
// Problem: Return the value that occurs most frequently. If tied, return the smallest value.
// Input: arr = [4, 2, 4, 3, 2, 4, 2]
// Output: 2
// Explanation: Both 2 and 4 occur three times, so the tie rule selects 2.
// Pattern: Hash map, frequency maximum, tie-breaking


// 16. Find the Element with the Lowest Frequency
// Easy
// Problem: Return the value that occurs least often. If tied, return the smallest value.
// Input: arr = [4, 2, 4, 3, 2, 4]
// Output: 3
// Explanation: Value 3 appears once, while 2 appears twice and 4 appears three times.
// Pattern: Frequency map, minimum frequency


#include <bits/stdc++.h>
using namespace std;

void freqhighAndLow(const vector<int>& vec) {
    if (vec.empty()) {
        throw invalid_argument("Array must not be empty");
    }

    unordered_map<int, int> freq;

    // Step 1: Count the frequency of each element
    for (int x : vec) {
        freq[x]++;
    }

    int maxFreq = 0;
    int minFreq = INT_MAX;
    int maxElement = INT_MAX;
    int minElement = INT_MAX;

    // Step 2: Find highest and lowest frequency elements
    for (const auto& it : freq) {
        int element = it.first;
        int count = it.second;

        // Highest frequency; ties select the smallest element
        if (count > maxFreq ||
            (count == maxFreq && element < maxElement)) {
            maxFreq = count;
            maxElement = element;
        }

        // Lowest frequency; ties select the smallest element
        if (count < minFreq ||
            (count == minFreq && element < minElement)) {
            minFreq = count;
            minElement = element;
        }
    }

    cout << "Highest frequency element: " << maxElement
         << ", frequency: " << maxFreq << '\n';

    cout << "Lowest frequency element: " << minElement
         << ", frequency: " << minFreq << '\n';


}

int main() {
    vector<int> v = {
        3, 5, 7, 2, 3, 4, 5, 6, 7, 8, 9,
        8, 8, 7, 66, 6, 7, 7, 7, 6, 6, 8, 8
    };

    freqhighAndLow(v);

    return 0;
}

/*
Javascript


const freqhighAndLow = (arr) => {
    if (arr.length === 0) {
        throw new Error("Array must not be empty");
    }

    const freq = new Map();

    // Step 1: Count frequencies
    for (const x of arr) {
        freq.set(x, (freq.get(x) || 0) + 1);
    }

    let maxFreq = 0;
    let minFreq = Infinity;
    let maxElement = Infinity;
    let minElement = Infinity;

    // Step 2: Find highest and lowest frequency elements
    for (const [element, count] of freq) {
        if (
            count > maxFreq ||
            (count === maxFreq && element < maxElement)
        ) {
            maxFreq = count;
            maxElement = element;
        }

        if (
            count < minFreq ||
            (count === minFreq && element < minElement)
        ) {
            minFreq = count;
            minElement = element;
        }
    }

    console.log(`Highest frequency element: ${maxElement}, frequency: ${maxFreq}`);
    console.log(`Lowest frequency element: ${minElement}, frequency: ${minFreq}`);

    
};

const arr = [
    3, 5, 7, 2, 3, 4, 5, 6, 7, 8, 9,
    8, 8, 7, 66, 6, 7, 7, 7, 6, 6, 8, 8
];

freqhighAndLow(arr);


*/