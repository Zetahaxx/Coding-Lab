#include <iostream>

using namespace std;
class time
{
    int hr,min,sec;
public:
    friend void operator>>(istream&,time&);
    friend void operator<<(ostream&,time);
};
void operator>>(istream &in,time &t1)
{
    in>>t1.hr>>t1.min>>t1.sec;
}
void operator<<(ostream &out,time t1)
{
    cout<<t1.hr<<":"<<t1.min<<":"<<t1.sec;
}


int main()
{
    time t1;
    cout<<"Enter time in hr min and sec\n";
    cin>>t1;
    cout<<"The time is ";
    cout<<t1;

    return 0;
}
