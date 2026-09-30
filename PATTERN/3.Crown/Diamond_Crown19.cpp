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

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/

for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
        cout<<'*';
    }
     for(int j = 1; j <= 2 * (n - i); j++){
        cout << " ";
    }
      for(int j = i; j >= 1; j--){
        cout <<'*';
    }
    cout<<endl;
}

for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<'*';
    }
     for(int j = 1; j <= 2 * (n - i); j++){
        cout << " ";
    }
      for(int j = i; j >= 1; j--){
        cout <<'*';
    }
    cout<<endl;
}
        return 0;
    }
