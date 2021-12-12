#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
    int temp=n;
    int decimal_num=0;
    int base = 1;// initializing base,2^0=1
    while(temp){
        int last_digit;
        last_digit = temp%10;
        decimal_num += last_digit*base;
        temp = temp/10;
        base = base*2;
    }
    return decimal_num;
}

int main(){
    //enter binary digit
    int n;
    cin>>n;
    cout<<binaryToDecimal(n);
}
