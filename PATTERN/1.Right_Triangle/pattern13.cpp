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
2 3
4 5 6 
7 8 9 10 
11 12 13 14 15

*/
int count =1;
for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++) {
     cout<<count<<" "; //(i * (i - 1)) / 2 + j
     count++;
    }
    cout<<endl;
}
return 0;
}
