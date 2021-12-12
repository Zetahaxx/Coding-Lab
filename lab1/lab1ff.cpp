#include<iostream>
#include<cstring>
using namespace std;


class Employee{
private:
    static int count1, count2;
    char emp_name[30], designation[30];
    int emp_id;

public:
    void input_data()
    {
        cout << "Enter the employee ID: " << endl;
        cin >> emp_id;
        cout << "Enter the employee name: " << endl;
        cin >> emp_name;
        cout << "Enter the designation: " << endl;
        cin >> designation;
    }

    void check()
    {
        if(strcmp(designation,"manager") == 0)
            count1++;
        if(strcmp(designation,"engineer") == 0)
            count2++;
    }

    static int manager()
     {
       return count1++;
     }

    static int engineer()
     {
       return count2++;
     }

};

int Employee::count1;//by default count1=0
int Employee::count2;

int main()
{
    cout<<"Enter total number of employees:"<<endl;
    int N;
    cin>>N;
    Employee e[N];
    int a, b, c;
    for(int i=0; i<N; i++)
    {
        e[i].input_data();
    }
    for(int i=0; i<N; i++)
    {
        e[i].check();
    }
    a = Employee::manager();
    b = Employee::engineer();
    c = N - a - b;
    cout << "The number of managers is: " << a << endl;
    cout << "The number of engineers is: " << b << endl;
    cout << "The number of remaining employees is: " << c << endl;
    return 0;
}













