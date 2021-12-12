#include<iostream>
using namespace std;
 class comparison
 {
 private:
    int a,b,c;
 public:
     void input_data()
     {
     cout<< "Enter three members:"<<endl;
     cin>>a>>b>>c;
     }
     void show_data()
     {
         cout<<"Entered three numbers are:"<<a<<","<<b<<","<<c<<endl;
     }
    void maximum()
    {
      if(a>b && a>c)
      cout<<"maximum:"<<a<<endl;
      else if(b>a && b>>c)
        cout<<"maximum:"<<b<<endl;
      else
        cout<<"maximum:"<<c<<endl;
    }
     void minimum()
    {
        if(a<b && a<c)
        cout<<"minimum:"<<a<<endl;
        else if(b<a && b<c)
        cout<<"minimum:"<<b<<endl;
        else
        cout<<"minimum:"<<b<<endl;

    }
 };

 int main()
 {
     comparison d1;
     d1.input_data();
     d1.show_data();
     d1.maximum();
     d1.minimum();
     return 0;
 }
