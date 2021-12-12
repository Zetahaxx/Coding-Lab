#include <iostream>
using namespace std;
class twelve_hour
{
    int hr;
    int min;
    int sec;
    string s1;
public:
    twelve_hour(){}
    twelve_hour(int h,int m,int s,int t)
    {
        if(h==0)
            hr=12;
        else{
          hr=h;
        }
        min=m;
        sec=s;
        if(t==1)
            s1="pm";
        else
            s1="am";
    }
     void displaytime()
        {
            cout<<"\t\t"<<hr<<"hour "<<min<<"min "<<sec<<"sec:"<<s1;
            cout<<"\n\n";
        }
};
class twentyfour_hour
{
    int hr;
    int min;
    int sec;
public:
    twentyfour_hour(){}
    void getdata()
    {
        cout<<"\n\n\t\t\t\tenter time the format of 24 hour system\n";
        cout<<"\t\t*******************************************************************\n";
        cout<<"\t\t\tenter hour::";
        cin>>hr;
        cout<<"\t\t\tenter minute::";
        cin>>min;
        cout<<"\t\t\tenter second::";
        cin>>sec;
    }
    operator twelve_hour()
    {
        int k;
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
        if(hr>13)
        {
            k=1;
            hr=hr-12;
        }
        else
            k=0;
        return twelve_hour(hr,min,sec,k);


    }
};

int main()
{
    twentyfour_hour t24;
    twelve_hour t12;
    t24.getdata();
    t12=t24;
    cout<<"\t\t\tequivalent of twentyfour hour system in twelve hour  system::\n";
    cout<<"\t\t*******************************************************************\n";
    t12.displaytime();

    return 0;
}
