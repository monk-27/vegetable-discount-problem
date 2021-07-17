#include<iostream>
using namespace std;
  
class A
{
public:
  A()  { 
      cout << "Welcome to the Veggie Shop" << endl;
      cout << "Items" << endl;
      cout << "1.Potato         Rs.20/kg" << endl;
      cout << "2.Tomato         Rs.30/kg" << endl;
      cout << "3.Onion          Rs.30/kg" << endl;
      cout << "4.Corriander     Rs.80/kg" << endl;
      cout << "5.Green Chilli   Rs.100/kg" <<endl;
      cout << "Press 0 for Checkout" << endl;    
       }
  
};
  
class B
{
public: 
    int item;
    float weight,price=0;
    B()
    {
        for(int i = 1; i<8 ; i++)
        {
            cout << "Enter Item Serial Number"<<endl<< i <<" : ";
            cin >> item;
            if ( item == 0 )
            {
                break;
            }
            else
            {
                cout << "Enter Weight you want to purchase (if you want half kg please write 0.5) : "<<endl;
                cin >> weight; 
                switch (item)
                {
                    case 1 : price = price+(20*weight); continue;
                    case 2 : price = price+(30*weight); continue;
                    case 3 : price = price+(30*weight); continue;
                    case 4 : price = price+(80*weight); continue;
                    default : price = price+(100*weight);
                }
            }
        }
    }
};
  
class C: public A, public B  //inheriting both the classes
{
    float t_amt = 0;
public:
  C()
  {
      if (price <= 100)
      {
          t_amt = price;
          cout << "Total Amount of Cart is : "<<endl<< t_amt << endl;
      }
      else if (price > 100 && price <=150)
      {
          t_amt = price-(price*0.05);
          cout << "Total Amount of Cart is : "<<endl<< t_amt << endl;
      }
      else if (price > 150 && price <=200)
      {
          t_amt = price-(price*0.08);
          cout << "Total Amount of Cart is : " <<endl<< t_amt << endl;
      }
      else if (price > 200 && price <=300)
      {
          t_amt = price-(price*0.1);
          cout << "Total Amount of Cart is : "<<endl<< t_amt << endl;
      }
      else
      {
          t_amt = price-(price*0.125);
          cout << "Total Amount of Cart is : " << t_amt << endl;
      }
  }
};
  
int main()
{
    C c;
    return 0;
}
