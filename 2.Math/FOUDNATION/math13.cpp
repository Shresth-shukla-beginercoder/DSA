// You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.

// A number which completely divides another number is called it's divisor.

// Example 1:
// Input: n = 6

// Output = [1, 2, 3, 6]

// // Explanation: The divisors of 6 are 1, 2, 3, 6.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter => ";
    cin >> n;

    vector<int> divisors;
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            count++;

            if (i != n / i) {
                divisors.push_back(n / i);
                count++;
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    for (int x : divisors) {
        cout << x << " ";
    }
    cout<<"The count of divisors is: " << count << endl;
    return 0;
}