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

        if (n <= 2 || n > set_max)
        {
            cout << "Invalid Input" << endl;
        }
    } while (n <= 2 || n > set_max);
    /*

      *      
     * *     
    *   *    
   *     *   
  *       *  
 *         * 
*           *          
 *         * 
  *       *  
   *     *   
    *   *    
     * *     
      *  

    */

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            int left = n - i + 1;
            int right = n + i - 1;
            if (j <= n - i)
            {
                cout << " ";
            }
            else if (j == left)
            {
                cout << "*";
            }
            else if (j == right)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = n-1; i >=1; i--)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            int left = n - i + 1;
            int right = n + i - 1;
            if (j <= n - i)
            {
                cout << " ";
            }
            else if (j == left)
            {
                cout << "*";
            }
            else if (j == right)
            {
                cout << "*";
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