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

1    for this j%2
10
101
1010
10101
101010
1010101

1
01     cout << (i + j) % 2;
010    
1010
10101
010101
0101010

*/
int count =1;
for(int i = 1; i <= n; i++) {

    for(int j = 1; j <= i; j++) {
        if(count==1){

            cout<<count;
            count--;
        }else{
            cout<<count;
            count++;
        }

    }

    cout << endl;
}

        return 0;
    }
