#include<iostream>
    using namespace std;

int main(){
    int set_max = 100;
    int n;
    do {
    cout<<"Enter a number - ";
    cin>>n;

    if(n<0||n>set_max){
        cout<<"Invalid Input"<<endl;
    }
}while(n<=0||n>set_max);
/*

1       1
 2     2
  3   3
   4 4
    5
*/
  for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 2 * n - 1; j++)
            if (j == i - 1 || j == 2 * n - 1 - i) cout << i;
            else cout << " ";
        cout << "\n";
    }

        return 0;
    }