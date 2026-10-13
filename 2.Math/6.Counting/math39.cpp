
// ### 27. Inclusion–Exclusion

// **Question:** Count elements in multiple groups without double-counting overlaps.
// **Example:** 20 like Cricket, 15 like Football, 5 like both → **30 like at least one**

// ---


// |A cup B|=|A|+|B|-|A cap B|

#include <bits/stdc++.h>
using namespace std;

int countAtLeastOne(int a, int b, int both) {
    return a + b - both;
}

int main() {
    int cricket = 20;
    int football = 15;
    int both = 5;

    cout << countAtLeastOne(cricket, football, both);

    return 0;
}/*
javscript

function countAtLeastOne(a, b, both) {
    return a + b - both;
}

let cricket = 20;
let football = 15;
let both = 5;

console.log(countAtLeastOne(cricket, football, both));

*/