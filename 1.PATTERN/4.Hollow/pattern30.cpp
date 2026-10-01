#include <iostream>
using namespace std;

int main()
{
    int set_max = 49;
    int n;
    do
    {
        cout << "Enter a number - ";
        cin >> n;

        if (n <= 3 || n > set_max)
        {
            cout << "Invalid Input must be more than 3" << endl;
        }
    } while (n <= 3 || n > set_max);
    /*

    *
    **
    * *
    *  *
    *****

    */
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= i; j++)
    {
        if (j == 1 || j == i || i == 1 || i == 2 || i == n)
            cout << "*";
        else
            cout << " ";
    }

    cout << endl;
}
    return 0;
}