
/*	Create a class called 'TIME' that has
- three integer data members for hours, minutes and seconds
- constructor to initialize the object to zero
- constructor to initialize the object to some constant value
- overload +,- to add and subtract two TIME objects
- overload > function to compare two time
- member function to display time in HH:MM:SS format*/

#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
class TIME
{
  int hr,min,sec;
public:
    TIME()
    {hr=0,min=0,sec=0;}
    TIME (int h,int m,int s)
    {
        hr=h;
        min=m;
        sec=s;
    }
    void read()
    {
        cout<<"Enter the values of hour min and sec:"<<endl;
        cin>>hr>>min>>sec;
    }
    void write()
    {
        cout<<hr<<":"<<min<<":"<<sec;
    }
    friend TIME operator +(TIME,TIME);
    friend TIME operator -(TIME,TIME);
    friend bool operator >(TIME,TIME);
    friend bool operator ==(TIME,TIME);
};
 TIME operator +(TIME t1,TIME t2)
 {
     TIME t3;
     t3.sec=t1.sec+t2.sec;
      t3.min=t1.min+t2.min+(t3.sec/60);
      t3.sec=t3.sec%60;
     t3.hr=t1.hr+t2.hr+(t3.min/60);
        t3.min=t3.min%60;
        return t3;

 }
  TIME operator -(TIME t1,TIME t2)
 {
     TIME t3;
     t3.sec=t1.sec-t2.sec;
      t3.min=t1.min-t2.min;
     t3.hr=t1.hr-t2.hr;
     if(t3.sec<0){
         t3.sec=60+t3.sec;
    t3.min--;
     }
    if(t3.min<0)
    {
        t3.min=60+t3.min;
        t3.hr--;

    }
       return t3;
 }
  bool operator >(TIME t1, TIME t2)
 {
      if((t1.sec+t1.min*60+t1.hr*3600)>(t2.sec+t2.min*60+t2.hr*3600))
        return true;
      else
        return false;

 }
  bool operator ==(TIME t1, TIME t2)
 {
     if((t1.sec+t1.min*60+t1.hr*3600)==(t2.sec+t2.min*60+t2.hr*3600))
        return true;
      else
        return false;
 }



 int main()
 {
     TIME t1,t2,t3,t4,t5(2,20,45);
     cout<<"t1 data"<<endl;
     t1.read();
      cout<<"t2 data"<<endl;
     t2.read();
     t3=t1+t2;
     t3.write();
     cout<<"\n";
     t4=t1-t2;
     t4.write();
      cout<<"\n";
      if(t1==t2)
         cout<<"Both are same";
     else  if(t1>t2)
         cout<<"t1 is greater";
     else
         cout<<"t2 is greater";
}


