/* this program will let us known how we should  use constuctor for base and derived classes

 syntax:
         derivedconstuctor(a1,b1,c1): Baseclass1(a1),Baseclass2(b1)
            {
                .....................
            }
*/
#include<iostream>
using namespace std;

class A
{
    
    public:
       int price1;
       A(int a)
       {
           price1=a;
           cout<<"\n Base class A constructor is called "<<endl;
       }
       void printA(void)
       {
           cout<<"\n The price of A is "<<price1<<endl;
       }
};

class B
{
  
    public:
        int price2;
       B(int b)
       {
           price2=b;
           cout<<"\n Base class B constructor is called "<<endl;
       }
       void printB(void)
       {
           cout<<"\n The price of B is "<<price2<<endl;
       } 
};

class C :public B,public A       // here the order in which base class are written matters
                                  // as B is written before A thus constuctor of B would be called before that of A
{
    int price3;
    public:
        C(int a,int b,int c):A(a),B(b)    // here the sequence doesn't matter
        {
            price3=c;
            cout<<"\n Derived class C constructor is called "<<endl;
        }
        void printC(void)
        {
            cout<<"\n Price of C is "<<price3<<endl;
        }
};

int main()
{   
    int a,b,c;

    cout<<"\n Enter the prices of A,B,C that is to be printed "<<endl;
    cin>>a>>b>>c;

    C c1(a,b,c);
    c1.printA();
    c1.printB();
    c1.printC();
    return 0;
}