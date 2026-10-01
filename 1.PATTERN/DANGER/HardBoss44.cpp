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

1 1 1 1 1 1
1 2 2 2 2 1
1 2 3 3 2 1
1 2 3 3 2 1
1 2 2 2 2 1
1 1 1 1 1 1

*/
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= n; j++)
    {
        int top = i - 1;
        int left = j - 1;
        int bottom = n - i;
        int right = n - j;

        int minimum_dst = min({top, left, bottom, right});

        int value = minimum_dst + 1;

        cout << value << " ";
    }

    cout << endl;
}

        return 0;
    }