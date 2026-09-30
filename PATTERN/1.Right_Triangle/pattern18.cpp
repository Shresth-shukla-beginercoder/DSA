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

E 
D E 
C D E 
B C D E 
A B C D E

*/
for(int i = 1; i <= n; i++) {
   for(int j = i; j >= 1; j--) {
        cout << char('E' -j + 1);
    }
    cout << endl;
}
return 0;
}
