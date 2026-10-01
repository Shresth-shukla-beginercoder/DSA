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

12345
1234
123
12
1

*/
for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
        cout<<j;
    }
    cout<<endl;
}

        return 0;
    }
