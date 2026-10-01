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

A
AB
ABC
ABCD
ABCDE

*/
for(char i = 'A'; i < 'A' + n; i++) {
    for(char j = 'A'; j <= i; j++) {
        cout << j;
    }
    cout << endl;
}
return 0;
}
