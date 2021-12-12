#include<bits/stdc++.h>
using namespace std;

void DecimalToBinary(int n)
{
   int binary[32];//to store binary number
   int i=0;//indexing
    while(n>0)
    {
        binary[i]=n%2;//storing remainder in binary array
        n/=2;
        i++;
    }
    //reverse the number
    for(int j=i-1;j>=0;j--){
        cout<<binary[j];
    }

}

int main(){
    int n;
    cin>>n;
    DecimalToBinary(n);

}
