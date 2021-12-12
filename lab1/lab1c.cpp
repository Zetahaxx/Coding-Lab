#include<iostream>
using namespace std;
class shape
{
private:
    float R,l,b,h;
public:
    void circle()
    {
        cout<<"Enter radius:"<<endl;
        float R;
        cin>>R;
        cout<<"Area of circle="<<3.14*R*R;
    }
    void rectangle()
    {
        cout<<"Enter length and breadth"<<endl;
        cin>>l>>b;
        cout<<"Area of rectangle="<<l*b;

    }
    void square()
    {
        cout<<"Enter the length"<<endl;
        cin>>l;
        cout<<"Area of square="<<l*l;

    }
    void triangle()
    {
        cout<<"Enter base and height"<<endl;
        cin>>b>>h;
        cout<<"Area of triangle="<<0.5*b*h;
    }


};

int main()
{
    shape area;
    cout<<"Enter c for area of circle"<<endl;
    cout<<"Enter r for area of rectangle"<<endl;
    cout<<"Enter s for area of square"<<endl;
    cout<<"Enter t for area of triangle"<<endl;
    char ch;
    cin>>ch;

    switch(ch)
    {
        case 'c':
            area.circle();
            break;
        case 'r':
            area.rectangle();
            break;
        case 's':
            area.square();
            break;
        case 't':
            area.triangle();
            break;
        default:
            cout<< "Invalid input"<<endl;


    }


}
