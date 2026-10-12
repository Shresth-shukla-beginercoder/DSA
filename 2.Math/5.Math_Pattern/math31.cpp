// ### 19. Ugly Number

// **Question:** Check whether a number has only `2`, `3`, and `5` as its prime factors.
// **Example:** `12 = 2 × 2 × 3` → **Ugly number**

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter number => ";
    cin >> n;
    int org = n;
if(n==1||n==0){
    cout<<"Its not a ugly";
    return 0;

}
    for (int i = 2;i <= 5; i++)
    {
        if (i == 4)
        {
            continue;
        }
        while (n % i == 0)
        {
            n /= i;
        }
    }
    if (n == 1)
    {
        cout << "The number is ugly";
    }else{
        cout<<"Not ugly";
    }
    return 0;
}

/*
Javascript


let n = 12;
let org = n;

if (n <= 0) {
    console.log("Not an Ugly Number");
} else {
    while (n % 2 === 0) n /= 2;
    while (n % 3 === 0) n /= 3;
    while (n % 5 === 0) n /= 5;

    console.log(
        n === 1 ? "Ugly Number => " + org : "Not an Ugly Number => " + org
    );
}

*/