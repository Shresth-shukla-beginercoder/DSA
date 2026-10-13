
// ### 37. Two Non-Repeating Numbers

// **Question:** Find the two numbers that occur only once while all others occur twice.
// **Example:** `[1, 2, 1, 3, 2, 5]` → **3 and 5**

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {6, 10, 6, 14, 10, 18};

    int x = 0;

    // XOR all numbers
    for (int num : nums) {
        x ^= num;
    }

    // Isolate the rightmost set bit
    int mask = x & -x;

    int a = 0, b = 0;

    // Separate into two groups
    for (int num : nums) {
        if (num & mask)
            a ^= num;
        else
            b ^= num;
    }

    cout << a << " " << b << '\n';
    return 0;
}

/*&
JavaScript

function findUnique(nums) {
    let x = 0;

    for (const num of nums) {
        x ^= num;
    }

    const mask = x & -x;

    let a = 0;
    let b = 0;

    for (const num of nums) {
        if (num & mask) {
            a ^= num;
        } else {
            b ^= num;
        }
    }

    return [a, b];
}

console.log(findUnique([6, 10, 6, 14, 10, 18]));

*/