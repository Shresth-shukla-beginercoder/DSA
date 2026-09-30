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

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

    */
for(int i = 1; i <= n; i++) {

    // Spaces
    for(int j = 1; j <= n-i; j++) {
        cout << " ";
    }

    // Increasing
    /*

      A
     AB
    ABC
   ABCD
  ABCDE
    
    */
    for(int j = 1; j <= i; j++) {
        cout << char('A' + j - 1);
    }

    // Decreasing
      /*

    A
    BA
    CBA
    DCBA
    
    */
    for(int j = i-1; j >= 1; j--) {
        cout << char('A' + j - 1);
    }

    cout << endl;
}
    return 0;
}
