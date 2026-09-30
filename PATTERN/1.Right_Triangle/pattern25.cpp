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

*****
 ****
  ***
   **
    *
*/
for(int i=n;i>=1;i--){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
     for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}
