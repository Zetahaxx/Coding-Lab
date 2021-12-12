//To swap two private data members using friend function
#include<iostream>
using namespace std;

class B;
class A
{
private:
    int a;
public:
    void setData(int x)
    {
        a=x;
    }
    void showData()
    {
     cout<<"\na="<<a<<endl;
    }
    friend class B;
};
class B
{
    int b;
public:
    void setData(int y)
    {
        b=y;
    }
    void showData()
    {
     cout<<"\nb="<<b<<endl;
    }
    void Swap(A a2)
    {
        int temp;
        temp=a2.a;
        a2.a=b;
        b=temp;
        cout<<"After swapping:"<<" a="<<a2.a<<" b="<<b;
    }
};

int main()
{
    A a1;
    B b1;
    a1.setData(1);
    a1.showData();
    b1.setData(4);
    b1.showData();
    b1.Swap(a1);
    return 0;
}
