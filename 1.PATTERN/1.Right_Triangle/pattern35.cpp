
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

1
32
543
7654
98765

*/
for(int i=1;i<=n;i++){
    for(int j=2*i-1;j>=i;j--){
       
           cout<<j;
       
        
    }
    cout<<endl;
}

        return 0;
    }
