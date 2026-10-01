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

1        1
12      21
123    321
1234  4321
1234554321

*/
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<j;
    }
     for(int j = 1; j <= 2 * (n - i); j++){
        cout << " ";
    }
      for(int j = i; j >= 1; j--){
        cout << j;
    }
    cout<<endl;
}
        return 0;
    }
