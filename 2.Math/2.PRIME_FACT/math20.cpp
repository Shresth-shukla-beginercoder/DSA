// ### 8. SPF Sieve

// **Question:** Find the smallest prime factor of every number up to `n`.
// **Example:** For `10` → SPF of `10` is **2**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter => ";
    cin >> n;

    vector<int> spf(n + 1);

    // Initially, every number is its own SPF
    for (int i = 2; i <= n; i++)
    {
        spf[i] = i;
    }

    // Build SPF
    for (int i = 2; i * i <= n; i++)
    {
        if (spf[i] == i) // i is prime
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (spf[j] == j) // SPF not assigned yet
                {
                    spf[j] = i;
                }
            }
        }
    }

    cout << "Smallest Prime Factor of " << n << " is " << spf[n];

    return 0;
}