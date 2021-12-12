/* Modify above class to work with compile time memory allocation i.e. with char [].*/
#include <iostream>
#include <cstring>
using namespace std;

class String
{
    int l;
    char string[100];
public:
    String()
    {

    }
    void getdata()
    {
        cout<<"Enter number of characters:"<<endl;
        cin>>l;
        cout<<"Enter character:"<<endl;
        cin>>string;
        string[l]='\0';
    }

    void showdata()
    {
        cout<<"Final string is: "<<endl;
        cout<<string<<endl;
    }

    String operator +(String s2)
    {
        String s;
        s.l=l+s2.l;
        strcpy(s.string,string);
        strcat(s.string,s2.string);
        return s;
    }
    void operator ==(String s2)
    {
        if (strcmp(string,s2.string)>0)
            cout<<"1st string is greater"<<endl;
        else if(strcmp(string,s2.string)<0)
            cout<<"2nd string is greater"<<endl;
        else
            cout<<"Both are equal"<<endl;
    }

};

int main()
{
    String s1,s2,s3;
    s1.getdata();
    s2.getdata();
    s3=s1+s2;
    s3.showdata();
    s1==s2;
    return 0;
}
