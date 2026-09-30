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

*
**
***
****
*****
****
***
**
*

*/
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}
for(int i=n-1;i>=1;i--){
    for(int j=i;j>=1;j--){
        cout<<"*";
    }
    cout<<endl;
}

        return 0;
    }
