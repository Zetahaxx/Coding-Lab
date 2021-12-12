/* Create a 'STRING' class which char* and length as data member and  overloads  ‘+’ ,'=' and ' = ='
 * to perform respective operations. Use constructor and destructor whenever suitable.*/

#include <iostream>
#include<cstring>
using namespace std;
class STRING
{
    char *s;
    int l;
public:
    STRING ()
    {s=new char('\0');}
    STRING(char s1[])
    {
       l=strlen(s1);
       s=new char[l+1];
       strcpy(s,s1);
    }
    void display()
    {
        cout<<s<<endl;
    }
    STRING operator+(STRING s2)
    {
        STRING t1;
        t1.s=new char[l+s2.l];
        strcpy(t1.s,s);
        strcat(t1.s,s2.s);
        return t1;
    }
    void operator =(STRING s1)
    {
        STRING t1;
        t1.s=new char[s1.l];
        strcpy(t1.s,s1.s);
        t1.display();

    }
    bool operator==(STRING s6)
    {
        if(strcmp(s,s6.s)==0)
            return true;
        else
            return false;
    }
    ~STRING()
    {
        delete []s;
    }

};

int main()
{
    STRING s1("Hi.");
    STRING s2("Welcome to code life.");
    STRING s3;
    s3=s1+s2;
    s3.display();
    s2=s1;
    if(s2==s1)
        cout<<"strings are same\n";
    else
        cout<<"strings are different\n";


    return 0;
}
