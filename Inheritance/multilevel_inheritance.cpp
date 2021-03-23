// In this program we will learn how we can use multilevel inheritance in C++
// The flow of classes in multilevel inheritance is 
/*                                   
                                     class A
                                        |
                                        |
                                     class B
                                        |
                                        |
                                     class C
                                        |
                                        |
                                     continue 
    Like this we can have multiple classes derived from other class and also deriving another class
*/
#include<iostream>
using namespace std;

// Base class i.e class A
class Company
{
      protected:
         int no_packages;
         float prices;
         float distrubution_area;
         float Total;
      public :
          void packages(int a);
          void Total_prices(float b);
          void distrubution(int c);   
};

void Company::packages(int a)
{
    no_packages=a;
}

void Company::Total_prices(float b)
{
    prices=b;
    Total=no_packages*prices;
}

void Company::distrubution(int c)
{
    distrubution_area=c;
}

// Derived class from company class i.e. class B
class Retailer:protected Company
{    
    protected:

     int id;
     int retailer_code;
     float percent_distributed;
     float Total_distrubution_area;
     float prices_of;
    public:
     void set_retailer_detail(int x,int y);
     void perctange_distrubution(float z);
     void prices_now(float m);
};

void Retailer::set_retailer_detail(int x,int y)
{
    id=x;
    retailer_code=y;
}

void Retailer::perctange_distrubution(float z)
{
      percent_distributed=z;
      Total_distrubution_area=distrubution_area-(((percent_distributed)/100)*distrubution_area);
}

void Retailer::prices_now(float m)
{        
         float per;
         per=m/100;
         prices_of=prices+(prices*per);
}

// Derived class of Retailer class i.e. class C
class Shopkeeper: public Retailer
{
     int shop_no;
     int demand;
     float price_now;
     public:
        void set_demand(int q,int o);
        void price_hike(float e);
        void display(int a,float b,int c,int x,int y,float z,int m);
};

void Shopkeeper::set_demand(int q,int o)
{
    demand=o;
    shop_no=q;
}

void Shopkeeper::price_hike(float e)
{   
    float pri=(e)/100;
    price_now=prices_of+(pri*prices_of);

    cout<<"Price of packages sold by shopkeepers to end users is "<<price_now<<" Rupees "<<endl;
    cout<<"\nDifference between actual and final price of packages is "<<abs(price_now-prices)<<" Rupees "<<endl;
}

void Shopkeeper::display(int a,float b,int c,int x,int y,float z,int m)
{
    packages(a);
    Total_prices(b);
    distrubution(c); 

    set_retailer_detail(x,y); 
    perctange_distrubution(z); 
    prices_now(m);
    
    cout<<"\nCompany produces "<<no_packages<<" packages in a day "<<endl;
    cout<<"\nPrice of one package is "<<prices<<" Rupees "<<endl;
    cout<<"Total prices of packages is "<<Total<<" Rupees "<<endl;
    cout<<"Company distrubute "<<no_packages<<" packages to "<<distrubution_area<<" distrubution centers "<<endl;

    cout<<"\nRetailer id is "<<id<<endl;
    cout<<"\nRetailer service code is "<<retailer_code<<endl;
    cout<<"Percentage distribution area cover by retailer "<<id<<" is "<<percent_distributed<<endl;
    cout<<"Total distribution centre coming under retailer "<<id<<" is "<<Total_distrubution_area<<endl;
    cout<<"The prices at which retailer sell packages to shopkeepers is "<<prices_of<<endl;

    cout<<"\nShopkeeper's shop id is "<<shop_no<<endl;
    cout<<"\nPackages order by shopkeeper is "<<demand<<endl;

}

int main()
{    
    int a,c,x,y;
    float b,z,m,e;
    int d,f;

    cout<<"\nEnter packages produces by Company "<<endl;
    cin>>a;
    cout<<"\nEnter the price of one package "<<endl;
    cin>>b;
    cout<<"\nEnter the number of distrubution centre operatated by company "<<endl;
    cin>>c;

    cout<<"\nEnter the retailer id "<<endl;
    cin>>x;
    cout<<"\nEnter the service code of retailer "<<endl;
    cin>>y;
    cout<<"\nEnter the percantage of distrubution handed to the retailer "<<endl;
    cin>>z;
    cout<<"\nEnter the percentage comission taken by retailer "<<endl;
    cin>>m;

    cout<<"\nEnter the shop no "<<endl;
    cin>>d;
    cout<<"\nEnter the packages shopkeeper ordered "<<endl;
    cin>>f;
    cout<<"\nEnter percentge margin taken by shopkeeper on packages "<<endl;
    cin>>e;

    Shopkeeper s1;
    s1.set_demand(d,f);
    s1.display(a,b,c,x,y,z,m);
    s1.price_hike(e);
    

    return 0;
}
