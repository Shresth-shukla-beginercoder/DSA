// 13. Find the Second-Largest Distinct Element
// Easy
// Problem: Find the second-largest distinct value, or report that it does not exist.
// Input: arr = [12, 35, 1, 10, 34, 35]
// Output: 34
// Explanation: The largest distinct value is 35; the next-largest distinct value is 34.
// Pattern: Running maximum, distinct values


// 14. Find the Second-Smallest Distinct Element
// Easy
// Problem: Find the second-smallest distinct value.
// Input: arr = [4, 1, 1, 2, 6]
// Output: 2
// Explanation: The smallest distinct value is 1, so the next is 2.
// Pattern: Running minimum, distinct values


#include <bits/stdc++.h>
using namespace std;

int secondLargestDistinct(vector<int>& arr) {
    if (arr.size() < 2) return -1;

    int largest = arr[0];
    int secondLargest = INT_MIN;

    for (int i = 1; i < arr.size(); i++) {
        int x = arr[i];

        if (x > largest) {
            secondLargest = largest;
            largest = x;
        }
        else if (x < largest && x > secondLargest) {
            secondLargest = x;
        }
    }

    if (secondLargest == INT_MIN) return -1;

    return secondLargest;
}
bool secondSmallestDistinct(const vector<int>& arr, int& answer) {
    if (arr.size() < 2) return false;

    int smallest = arr[0];
    int secondSmallest = 0;
    bool found = false;

    for (int i = 1; i < arr.size(); i++) {
        int x = arr[i];

        if (x < smallest) {
            secondSmallest = smallest;
            smallest = x;
            found = true;
        }
        else if (x > smallest &&
                 (!found || x < secondSmallest)) {
            secondSmallest = x;
            found = true;
        }
    }

    if (!found) return false;

    answer = secondSmallest;
    return true;
}

int main() {
    vector<int> v = {3, 5, 7, 8, 8};
    int ans;
    cout << secondLargestDistinct(v)<<endl;
  if (secondSmallestDistinct(v, ans))
        cout << ans;
    else
        cout << "No second-smallest distinct element";
    return 0;
}

/*Javasrcipt 

const secondLargestDistinct = (arr) => {
    if (arr.length < 2) return -1;

    let largest = arr[0];
    let secondLargest = -Infinity;

    for (let i = 1; i < arr.length; i++) {
        const x = arr[i];

        if (x > largest) {
            secondLargest = largest;
            largest = x;
        } else if (x < largest && x > secondLargest) {
            secondLargest = x;
        }
    }

    return secondLargest === -Infinity ? -1 : secondLargest;
};


const secondSmallestDistinct = (arr) => {
    if (arr.length < 2) return null;

    let smallest = arr[0];
    let secondSmallest;
    let found = false;

    for (let i = 1; i < arr.length; i++) {
        const x = arr[i];

        if (x < smallest) {
            secondSmallest = smallest;
            smallest = x;
            found = true;
        } else if (
            x > smallest &&
            (!found || x < secondSmallest)
        ) {
            secondSmallest = x;
            found = true;
        }
    }

    return found ? secondSmallest : null;
};

const arr = [3, 5, 7, 8, 8];
console.log(secondLargestDistinct(arr));
const answer = secondSmallestDistinct(arr);

console.log(answer ?? "No second-smallest distinct element");


*/