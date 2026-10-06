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

    1       5       9  // replace j+1 with * to get star pattern
      2   4   6   8
        3       7

    For reverse -:

    Top row (i=0) now uses j % 4 == 2 (it was j % 4 == 0).
    Bottom row (i=2) now uses j % 4 == 0 (it was j % 4 == 2).
    Middle row is unchanged: odd columns.
    */
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            bool on = (i == 0 && j % 4 == 0) || (i == 1 && j % 2 == 1) || (i == 2 && j % 4 == 2);
            if (on)
                cout << j + 1;
            else
                cout << " ";
            cout << " ";
        }
        cout << "\n";
    }

    return 0;
}