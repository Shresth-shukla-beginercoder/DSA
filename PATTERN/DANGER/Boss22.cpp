#include<iostream>
#include<algorithm>
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

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5

*/
for(int i=1;i<=2*n-1;i++ ){
    for(int j=1;j<=2*n-1;j++){
        int top,bottom,left,right;
        top=i-1;
        left=j-1;
        bottom=(2*n-1)-i;
        right =(2*n-1)-j;

        int minimum_dst= min({top,left,bottom,right});
        int value = n-minimum_dst;

        cout<<value;

    }
    cout<<endl;
}

        return 0;
    }