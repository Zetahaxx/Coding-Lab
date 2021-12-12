/*To write a C++ program to overload all relational operators to compare US currency with Nepalese currency.
 Use conversion rate $1=NRs 101.36
(Note: make two classes to represent each currency)*/

#include<iostream>
using namespace std;
class us_currency;
class nepal_currency
{
    float rs;
public:
    void read_rs()
    {
    cout<<"Enter amount(Rs):"<<endl;
    cin>>rs;
    }

    friend bool operator >(nepal_currency,us_currency);
    friend bool operator ==(nepal_currency,us_currency);
};

class us_currency
{
    float dollar;
public:
    void read_usd()
    {
    cout<<"Enter amount(USD):"<<endl;
    cin>>dollar;
    }

    friend bool operator >(nepal_currency,us_currency);
    friend bool operator ==(nepal_currency,us_currency);
};

bool operator >(nepal_currency np, us_currency usd)
{
    if((usd.dollar*101.36)<np.rs)
        return true;
    else
        return false;
}


bool operator ==(nepal_currency np,us_currency usd)
{
    if((usd.dollar*101.36)==np.rs)
        return true;
    else
        return false;
}


int main()
{
    nepal_currency np;
    us_currency usd;
    np.read_rs();
    usd.read_usd();
    if(np==usd)
        cout<<"Both amount are equal."<<endl;
    else if(np>usd)
        cout<<"Rupees is greater than USD"<<endl;
    else
        cout<<"USD is greater than Rupees"<<endl;
    return 0;
}

