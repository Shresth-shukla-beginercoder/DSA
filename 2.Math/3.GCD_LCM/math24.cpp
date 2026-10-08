
// ## GCD / LCM


// ### 12. GCD After Removing an Element

// **Question:** Remove one element and find the GCD of the remaining elements.
// **Example:** `[12, 18, 24]`, remove `12` → GCD of `[18, 24]` = **6**

#include <bits/stdc++.h>
using namespace std;

// Function to find GCD of two numbers
int gcdTwo(int a, int b)
{
    return gcd(a, b);
}

// Function to find GCD of the entire array
int gcdOfArray(const vector<int>& arr)
{
    if (arr.empty())
        return 0;

    int result = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        result = gcdTwo(result, arr[i]);

        // Once GCD becomes 1, it cannot become smaller
        if (result == 1)
            break;
    }

    return result;
}

// Function to remove the first occurrence of an element
bool removeElement(vector<int>& arr, int value)
{
    auto it = find(arr.begin(), arr.end(), value);

    if (it == arr.end())
        return false;

    arr.erase(it);
    return true;
}

int main()
{
    int n;

    cout << "Enter size of array => ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Array size must be greater than 0.";
        return 0;
    }

    vector<int> vec(n);

    cout << "Enter an array => ";

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    // GCD before removing
    cout << "GCD before removing element => "
         << gcdOfArray(vec) << endl;

    int rm;

    cout << "Enter the element to remove => ";
    cin >> rm;

    // Remove element
    if (!removeElement(vec, rm))
    {
        cout << "Element not found.";
        return 0;
    }

    // Check if array became empty
    if (vec.empty())
    {
        cout << "Array is empty after removing the element.";
        return 0;
    }

    // GCD after removing
    cout << "GCD after removing element => "
         << gcdOfArray(vec);

    return 0;
}