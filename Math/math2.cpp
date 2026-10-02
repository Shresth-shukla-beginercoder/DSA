// You are given an integer n. You need to return the number of odd digits present in the number.

// The number will have no leading zeroes, except when the number is 0 itself.

// Example 1:
// Input: n = 5

// Output: 1

// Explanation: 5 is an odd digit.

// Example 2:
// Input: n = 25

// Output: 1

// Explanation: The only odd digit in 25 is 5.

#include <bits/stdc++.h>
    using namespace std;

    int main(){
   int set_max = INT_MAX;
    int n;
    do {
    cout<<"Enter a number - ";
    cin>>n;

    if(n<0||n>set_max){
        cout<<"Invalid Input"<<endl;
    }
}while(n<0||n>set_max);

vector<int> vec;
int count = 0;

if (n == 0) {
    cout << n << " has no odd digits. Count = " << count;
    return 0;
}

int org = n;

while (org > 0) {
    int sh = org % 10;
    org = org / 10;

    if (sh % 2 != 0) {
        vec.push_back(sh);
        count++;
    }
}
sort(vec.begin(), vec.end());
cout << "The number " << n << " has odd digits: ";

for (int val : vec) {
    cout << val << " ";
}

cout << "\nNumber of odd digits: " << count;

        return 0;
    }

/*
JAVASCRIPT


let a = 0;
let count = 0;
let org = Math.abs(a);

while (org > 0) {
    let containLastdgit = org % 10;

    if (containLastdgit % 2 !== 0) {
        count++;
    }

    org = Math.floor(org / 10);
}

console.log(`The number ${a} has ${count} odd digits.`);
*/