#include <iostream>
using namespace std;

int main()
{
    int set_max = 5;
    int n;
    do
    {
        cout << "Enter a number - ";
        cin >> n;

        if (n <= 2 || n > set_max)
        {
            cout << "Invalid Input" << endl;
        }
    } while (n <= 2 || n > set_max);
    /*
    1    
   1 1   
  1   1  
 1     1 
123456789
 1     1 
  1   1  
   1 1   
    1    

    */

for (int i = 1; i <= 2 * n - 1; i++)
{
    int r;

    if (i <= n)
        r = i;
    else
        r = 2 * n - i;

    for (int j = 1; j <= 2 * n - 1; j++)
    {
        if (r == n)
        {
            cout << j;
        }
        else if (j == n - r + 1 || j == n + r - 1)
        {
            cout << 1;
        }
        else
        {
            cout << " ";
        }
    }

    cout << endl;
}
    return 0;
}