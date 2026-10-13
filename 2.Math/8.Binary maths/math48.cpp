// ### 36. Missing Number

// **Question:** Find the missing number from `0` to `n`.
// **Example:** `[0, 1, 3]` → **2**


#include <bits/stdc++.h>
using namespace std;

vector<int> findMissing(vector<int>& nums) {
    vector<int> missing;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1]) {
            continue;  // Ignore duplicates
        }

        for (int j = nums[i - 1] + 1; j < nums[i]; j++) {
            missing.push_back(j);
        }
    }

    return missing;
}

int main() {
    vector<int> nums = {1, 2, 2, 5, 7};

    vector<int> result = findMissing(nums);

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}

/*
Jaavscript

function findMissing(nums) {
    const missing = [];

    for (let i = 1; i < nums.length; i++) {
        if (nums[i] === nums[i - 1]) {
            continue; // Ignore duplicates
        }

        for (let j = nums[i - 1] + 1; j < nums[i]; j++) {
            missing.push(j);
        }
    }

    return missing;
}

const nums = [1, 2, 2, 5, 7];
console.log(findMissing(nums));
*/