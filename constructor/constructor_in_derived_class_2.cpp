// Here we will se some more variation in using a constuctor in base and multiple classes

#include<iostream>
using namespace std;

class Car1
{   
    protected:
       int buying_year,car_no,price;
    public:
       Car1(int, int, int); 
};

Car1::Car1(int a,int b,int c)
{
     buying_year=a;
     car_no=b;
     price=c;
     cout<<"Car1 \n"<<endl;
}

class Car1Details 
{
    protected:
       int current_price,age_of_car;
    public:
        Car1Details(int ,int);
};

Car1Details::Car1Details(int a,int b)
{
    current_price=a;
    age_of_car=b;
    cout<<"Car1Details \n"<<endl;
}

class Car1Display : public Car1, virtual public Car1Details  // Though we have written Car1 first but since Car1Detail is been 
                                                             // declared as virtual ,Car1Details constructor would be called first 
                                                             // and then constructor of Car1
   {
   protected:
       int price_drop,rating;
    public:
        Car1Display(int a1,int a2,int a3,int a4,int a5,int a6): Car1(a1,a2,a3),Car1Details(a4,a5)
        {
            price_drop=price-current_price;
            rating=a6;
        }
        void Display(void)
        {
            cout<<"\n The price of the car is dropped upto "<<price_drop<<" Rupee in "<<age_of_car<<" years \n"<<endl;
            cout<<"\n Your satisfaction rating for car is "<<rating<<endl;
        }
};

int main()
{   
    int q,w,e,r,t,y;
    cout<<"\n Enter the year in which this car was launch "<<endl;
    cin>>q;
    cout<<"\n whats the number of car "<<endl;
    cin>>w;
    cout<<"\n Enter price at which you bought the car "<<endl;
    cin>>e;
    cout<<"\n Enter the current price of the car in market "<<endl;
    cin>>r;
    cout<<"\n How old is your car "<<endl;
    cin>>t;
    cout<<"\n Give your rating for the car "<<endl;
    cin>>y;
    Car1Display c1D(q,w,e,r,t,y);
    c1D.Display();
    return 0;
}