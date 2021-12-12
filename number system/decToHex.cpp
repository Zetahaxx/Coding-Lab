#include<iostream>
using namespace std;

void decToHex(int n)
{
    char hex[100];//to store both digits and  character in hex array
    int i=0;//indexing array
    while(n!=0)
    {
        int check=n%16;
        if(check<=9)
            hex[i]=48+check;//storing remainder to array //ASCII value of 0=48//(48+check)for hex digit
        else
            hex[i]=55+check;//storing remainder to array//ASCII value of A=65//(55+check) for hex character
        n/=16;
    i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<hex[j];
    }

}
int main(){
//enter decimal number
int n;
cin>>n;
decToHex(n);
}
