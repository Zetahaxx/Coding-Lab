#include<iostream>
using namespace std;
class pharmacy_store
{
private:
    int order_quantity,store_quantity;



public:
    void input_data()
    {
        cout<<"Enter the store quantity:";
        cin>>store_quantity;
        cout<<"Enter the order quantity:";
        cin>>order_quantity;

    }
    void check()
    {
       if(store_quantity>order_quantity)
        {
            if(store_quantity<=40 && order_quantity>16)
                cout<<"You cannot order more than 16 item.";
            else if(store_quantity>40)
                cout<<"Your order is accepted.";
        }
        else
            cout<<"No enough quantity";

    }



};

int main()
{
    pharmacy_store medicine;
    medicine.input_data();
    medicine.check();
    return 0;


}

