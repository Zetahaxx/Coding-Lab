#include<iostream>
using namespace std;

/*void hexToDec(string hex)
{
   int dec=0;
   int base=1;
   while(hex!=0) {
    last_digit=hex%10;
    if(last_digit>=10)
        last_digit=last_digit-55;
    hex/=10;
    dec+=last_digit*base;
    base=base*16;
   }
    cout<<dec;
}


int main(){
//enter hex
char hex[100];
cin>>hex;
hexToDec(hex);}
