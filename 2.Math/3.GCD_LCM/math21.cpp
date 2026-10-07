// ### 9. GCD of Array

// **Question:** Find the GCD of all numbers in an array.
// **Example:** `[12, 18, 24]` → **6**

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array => ";
    cin >> n;

    vector<int> vec(n);

    cout << "Enter an array => ";

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    int res = vec[0];

    for (int i = 1; i < n; i++)
    {
        res = gcd(res, vec[i]);

        if (res == 1)
        {
            break;
        }
    }

    cout << "The GCD of the given array is => " << res;

    return 0;
}


/*
Javascript

function gcd(a, b) {
    while (b !== 0) {
        [a, b] = [b, a % b];
    }

    return a;
}

function gcdOfArray(arr) {
    let result = arr[0];

    for (let i = 1; i < arr.length; i++) {
        result = gcd(result, arr[i]);

        // GCD can never become smaller than 1
        if (result === 1) {
            break;
        }
    }

    return result;
}

const arr = [12, 18, 24];

console.log("GCD of the array =>", gcdOfArray(arr));

*/