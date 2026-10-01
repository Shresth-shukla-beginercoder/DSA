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
*   *
*   *
*****

*/
for(int i=1;i<=n;i++){

  

    for(int j=1;j<=n;j++){
          if((i==n||i==1)||(j==n||j==1)){
            cout<<"*";
        }else{
            cout<<" ";
        }
    }
    cout<<endl;
}

        return 0;
    }