// ### 10. LCM of Array

// **Question:** Find the LCM of all numbers in an array.
// **Example:** `[2, 3, 4]` → **12**


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array => ";
    cin >> n;

    vector<long long> vec(n);

    cout << "Enter an array => ";

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    long long result = vec[0];

    for (int i = 1; i < n; i++)
    {
        result = lcm(result, vec[i]);
    }

    cout << "The LCM of an array => " << result;

    return 0;
}

/*
Javascript
function gcd(a, b) {
    while (b !== 0) {
        [a, b] = [b, a % b];
    }

    return Math.abs(a);
}

function lcm(a, b) {
    return Math.abs((a / gcd(a, b)) * b);
}

function lcmOfArray(arr) {
    let result = arr[0];

    for (let i = 1; i < arr.length; i++) {
        result = lcm(result, arr[i]);
    }

    return result;
}

const arr = [2, 3, 4];

console.log("The LCM of an array =>", lcmOfArray(arr));

*/