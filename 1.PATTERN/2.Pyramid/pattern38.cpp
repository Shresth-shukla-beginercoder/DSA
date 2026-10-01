#include <iostream>
using namespace std;

int main()
{
    int set_max = 100;
    int n;
    do
    {
        cout << "Enter a number - ";
        cin >> n;

        if (n < 0 || n > set_max)
        {
            cout << "Invalid Input" << endl;
        }
    } while (n <= 0 || n > set_max);
    /*

      1
     121
    12321
   1234321
  123454321
 12345654321
1234567654321
 12345654321
  123454321
   1234321
    12321
     121
      1

    */
for(int i = 1; i <= n; i++) {
     //spaces
 for(int j = 1; j <= n-i; j++) {
        cout << " ";
    }
    // Increasing
    /*
    1
    12
    123
    1234
    12345
    
    */
    for(int j = 1; j <= i; j++) {
        cout << j;
    }

    // Decreasing
      /*

    1
    21
    321
    4321
    
    */
    for(int j = i-1; j >= 1; j--) {
        cout << j;
    }

    cout << endl;
}
for(int i = n-1; i >=1; i--) {
     //spaces
 for(int j = 1; j <= n-i; j++) {
        cout << " ";
    }
    // Increasing
    /*
    1
    12
    123
    1234
    12345
    
    */
    for(int j = 1; j <= i; j++) {
        cout << j;
    }

    // Decreasing
      /*

    1
    21
    321
    4321
    
    */
    for(int j = i-1; j >= 1; j--) {
        cout << j;
    }

    cout << endl;
}
    return 0;
}
