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

    */
for(int i = 1; i <= n; i++) {


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
