#include<iostream>
using namespace std;

class DISTANCE
{
private:
    int feet,inches;
public:
    void input_distance()
    {
        cout<< "Enter the feet:";
        cin>> feet;
        cout<< "Enter the inches:";
        cin>> inches;
    }
    void output_distance()
    {
        cout<<"feet:"<<feet<<endl<<"inches:"<<inches<<endl;

    }
    DISTANCE add_distance(DISTANCE d2)
    {
        DISTANCE temp;
        temp.feet=feet+d2.feet;
        temp.inches=inches+d2.inches;
        if(temp.inches>=12)
        {
            int plusFt=temp.inches/12;
            temp.feet=temp.feet+plusFt;
            temp.inches=temp.inches%12;
        }
            return temp;
    }
    void show_result()
    {
    cout<< "The sum is "<<feet<<" feet "<<"and "<<inches<<" inches."<<endl;
    }
};

int main()
{
    DISTANCE d1,d2,d3;
    cout<<"Enter the first distance\n";
    d1.input_distance();
    d1.output_distance();
    cout<< "Enter the second distance\n";
    d2.input_distance();
    d2.output_distance();
    d3=d1.add_distance(d2);
    d3.show_result();

}
