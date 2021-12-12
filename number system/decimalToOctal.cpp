#include<iostream>
using namespace std;

void decimalToOctal(int n)
{
    int octal[100];//to store octal number
    int i=0;//counter for octal number array
    while(n!=0){
        octal[i]=n%8;//storing remainder to the octal array
        n/=8;
        i++;
    }
    //reversing the array
    for(int j=i-1;j>=0;j--){
        cout<<octal[j];
    }
}
int main(){
//enter decimal number
int n;
cin>>n;
decimalToOctal(n);
}

