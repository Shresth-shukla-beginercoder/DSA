#include<iostream>

    using namespace std;

int main(){
    int set_max = 10;
    int n;
    do {
    cout<<"Enter a number - ";
    cin>>n;

    if(n<0||n>set_max){
        cout<<"Invalid Input"<<endl;
    }
}while(n<=0||n>set_max);
/*

  1  2  3  4
  8  7  6  5
  9 10 11 12
 16 15 14 13

*/
  for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int v = (i % 2 == 0) ? i * n + j + 1 : i * n + n - j;
            if (v < 10) cout << " ";
            cout << v << " ";
        }
        cout << "\n";
    }

        return 0;
    }