





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
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

    */

for (int i = 0; i < n; i++)
{
    // spaces
    for (int j = 0; j < n - i - 1; j++)
    {
        cout << " ";
    }

    int value = 1;

    // numbers
    for (int j = 0; j <= i; j++)
    {
        cout << value << " ";

        value = value * (i - j) / (j + 1);
    }

    cout << endl;
}

return 0;
}   