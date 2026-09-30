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

1   1
 2 2
  3
 4 4
5   5

*/
 for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            if (j == i || j == n - 1 - i) cout << i + 1;
            else cout << " ";
        cout << "\n";
    }

        return 0;
    }