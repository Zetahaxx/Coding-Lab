/*To write a C++ program to manipulate complex numbers using operator overloading. (addition,subtraction,multiplication,division)*/
#include <iostream>
#include<math.h>
using namespace std;
class complex
{
 float rl,img;
public:
 void setdata()
 {
 cin>>rl>>img;
 }
 void showdata()
 {
 if(img>0)
 cout<<rl<<"+"<<img<<"i\n";
 else
 cout<<rl<<img<<"i\n";
 }
 void operator +(complex c2)
 {
 complex temp;
 temp.rl=rl+c2.rl;
 temp.img=img+c2.img;
 cout<<"After addition result is:";
 temp.showdata();
 }
 void operator -(complex c2)
 {
 complex temp;
 temp.rl=rl-c2.rl;
 temp.img=img-c2.img;
 cout<<"After subtraction result is:";
 temp.showdata();
 }
 void operator*(complex c2)
 {
 complex temp;
 temp.rl=(rl*c2.rl-img*c2.img);
 temp.img=(rl*c2.img+img*c2.rl);
 cout<<"After multiplication result is:";
 temp.showdata();
 }
 void operator/(complex c2)
 {
 complex temp;
 temp.rl=(rl*c2.rl+img*c2.img)/(pow(c2.rl,2)+pow(c2.img,2));
 temp.img=(img*c2.rl-rl*c2.img)/(pow(c2.rl,2)+pow(c2.img,2));
 cout<<"After division result is:";
 temp.showdata();
 }
};
int main()
{
 complex c1,c2,c3;
 cout<<"Enter the first real number and imaginary \n";
 c1.setdata();
 cout<<"Enter the second real number and imaginary \n";
 c2.setdata();
 c1+c2;
 c1-c2;
 c1*c2;
 c1/c2;
 return 0;
}

