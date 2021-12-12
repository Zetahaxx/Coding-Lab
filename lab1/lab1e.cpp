#include<iostream>
using namespace std;

class employee
{
private:
    int emp_num;
    char emp_name[50];
    float basic_sal,gross_sal,net_sal;
public:
    void input_data()
    {
    cout<<"Enter the employee number:"<<endl;
    cin>>emp_num;
    cout<<"Enter the employee name:"<<endl;
    cin>>emp_name;
    cout<<"Enter the basic salary:"<<endl;
    cin>>basic_sal;
    }
    void net_salary()
    {
        gross_sal=basic_sal+0.52*basic_sal;
        net_sal=gross_sal-0.3*gross_sal;
    }
    void display()
    {
        cout<<"\nEmployee Number:"<<emp_num<<"\nEmployee Name: "<<emp_name<<"\nNet Salary: "<<net_sal<<endl<<endl;
    }

};

int main()
{
    cout<<"Enter the total no. of employees:"<<endl;
    int N;
    cin>>N;
    employee e[N];
    for(int i=0;i<N;i++)
    {
        e[i].input_data();
        e[i].net_salary();
        e[i].display();
    }
    return 0;


}
