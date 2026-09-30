#include<bits/stdc++.h>
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
vector<string> a(n, string(n, ' '));
int t = 0, b = n - 1, l = 0, r = n - 1, c = 0;
/*

A B C D E
P Q R S F
O X Y T G
N W V U H
M L K J I

*/
    auto ch = [&]() { return char('A' + c++ % 26); };   // next letter, wraps after Z
    while (t <= b && l <= r) {
        for (int j = l; j <= r; j++) a[t][j] = ch();
        t++;
        for (int i = t; i <= b; i++) a[i][r] = ch();
        r--;
        if (t <= b) { for (int j = r; j >= l; j--) a[b][j] = ch(); b--; }
        if (l <= r) { for (int i = b; i >= t; i--) a[i][l] = ch(); l++; }
    }
    for (auto& row : a) {
        for (char x : row) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
