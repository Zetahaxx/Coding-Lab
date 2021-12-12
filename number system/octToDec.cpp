#include<iostream>
using namespace std;

void octToDec(int n)
{
    int dec=0;
    int base=1;
    while(n!=0)
    {
        int last_digit;
        last_digit=n%10;
        n/=10;
        dec+=last_digit*base;
        base=base*8;
    }
    cout<<dec;
}
int main(){
//enter octal number
int n;
cin>>n;
octToDec(n);
}
