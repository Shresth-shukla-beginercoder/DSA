// ### 5. Largest Prime Factor

// **Question:** Find the largest prime factor of a number.
// **Example:** `60` → **5**

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter =>";
    cin >> n;

    int org = n;
    int mx = 0;
    for (int i = 2; i * i <= n; i++)
    {
        while (org % i == 0)
        {
            
           
            
                mx = i;
            
            org /= i;
        }
    }
    if (org > 1)
    {
        mx = org;
    }

    cout << "The largest prime factor of num " << n << " => " << mx;

    return 0;
}

/*

Javacript
function largestPrimeFactor(n) {
    let largest = 0;

    for (let factor = 2; factor * factor <= n; factor++) {
        while (n % factor === 0) {
            largest = factor;
            n /= factor;
        }
    }

    // If n > 1, the remaining n itself is prime
    if (n > 1) {
        largest = n;
    }

    return largest;
}

const n = Number(prompt("Enter number:"));

console.log(
    `The largest prime factor of ${n} => ${largestPrimeFactor(n)}`
);

*/