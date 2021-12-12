#include<iostream>
using namespace std;
#include<string.h>
class twelve_hour
{
    int hr;
    int min;
    int sec;
    char s[5];
public:
    twelve_hour(){}
   void gettime()
    {
        cout<<"\n\n\t\t\t\tenter time the format of 12 hour system\n";
        cout<<"\t\t*******************************************************************\n";
        cout<<"\t\t\tenter hour::";
        cin>>hr;
        cout<<"\t\t\tenter minute::";
        cin>>min;
        cout<<"\t\t\tenter second::";
        cin>>sec;
        cout<<"\t\t\tenter am or pm::";
        cin>>s;
        cout<<"\t\t*******************************************************************\n";
    }
    int hour()
    {
        return hr;
    }
     int minute()
    {
        return min;
    }
     int second()
    {
        return sec;
    }
    char* pmoram()
    {
        return s;
    }

};
class twentyfour_hour
{
    int hr;
    int min;
    int sec;
public:
    twentyfour_hour(){}
    twentyfour_hour(twelve_hour t12)
    {
        hr=t12.hour();
        min=t12.minute();
        sec=t12.second();
        if(hr>=24)
        {
            hr=0;
        }
        if(sec>=60)
        {
            int a=sec/60;
            sec=sec%60;
            min=min+a;}
            if(min>=60){
            int b=min/60;
            hr=hr+b;
            min=min%60;
            }
            if(strcmp(t12.pmoram(),"pm")==0)
            {

                hr=hr+12;
            }
            else
              hr=0;

                }
         void displaytime()
        {
            cout<<"\t\t\thour:: "<<hr<<"\n\t\t\t\minute:: "<<min<<"\n\t\t\tsecond:: "<<sec;
            cout<<"\n\n";
        }

};
int main()
{
    twelve_hour t12;
    twentyfour_hour t24;
    t12.gettime();
    cout<<"\t\t\tequivalent of twelve hour system in twenty four hour system::\n";
    cout<<"\t\t*******************************************************************\n";
    t24=t12;
    t24.displaytime();

    return 0;

}
