// Creating a simple and scientific calci and also a 
// hybrid calculator of both
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

class simple_calci
{
    protected:
       int n;
       float a,b;
    public:
        void set_numbers(float,float);
        void calculation(int);    
};

void simple_calci::set_numbers(float q,float p)
{
     a=q;
     b=p;  
}

void simple_calci::calculation(int e)
{   
    n=e;
    float result;
    switch(n)
    {
        case 1:
             result = a+b;
             cout<<"\nAddition "<<a<<"+"<<b<<" = "<<result<<endl;
             break;

        case 2:
             if(a>b)
             {
                 result = a-b;
                 cout<<"\nSubtraction "<<a<<"-"<<b<<" = "<<result<<endl;
                 break;
             }
             else if(b>a)
             {
                 result = b-a;
                 cout<<"\nSubtraction "<<b<<"-"<<a<<" = "<<result<<endl;
                 break;
             }
             else 
             {
                 result=0;
                 cout<<"\nSubtraction "<<a<<"-"<<b<<" = "<<result<<endl;
                 break;
             }
        
        case 3:
             result = a*b;
             cout<<"\nMultiplication "<<a<<"*"<<b<<" = "<<result<<endl;
             break;

        case 4:
             if(b!=0)
              {
                  result = a/b;
                  cout<<"\nDivision "<<a<<"/"<<b<<" = "<<result<<endl;
                  break;
              }
             else 
             {
                 cout<<"\nDivision "<<a<<"/"<<b<<" = Not defined "<<endl;
                 break;
             }
        default :
               break;
    }
}

class scientific_calci
{
    protected:
        float a2,angl;
    public:
        void set_values(float);
        void calci(int);
};

void scientific_calci::set_values(float s)
{
    a2= (s*3.142)/180;  // since trigo function take s2 as radian value and not in degree celcisus
    angl=s;             // we convert this value to radians so that we can use it
}

void scientific_calci::calci(int o)
{
    float result2;
    switch(o)
    {
        case 5:
            result2 = sin(a2);  // sin(x) treat x as a radian value thus we  converted our 
                               // degree input to radian and simmilar for all trigo function
            cout<<"\nSin("<<angl<<") = "<<result2<<endl;
            break;

        case 6:
            result2 = cos(a2);
            cout<<"\nCos("<<angl<<") = "<<result2<<endl;
            break;
        
        case 7:
            result2 = tan(a2);
            cout<<"\nTan("<<angl<<") = "<<result2<<endl;
            break;
        
        case 8:
            result2 = 1/tan(a2);
            cout<<"\nCot("<<angl<<") = "<<result2<<endl;
            break;

        case 9:
            result2 = 1/cos(a2);
            cout<<"\nSec("<<angl<<") = "<<result2<<endl;
            break;
        
        case 10:
            result2 = 1/sin(a2);
            cout<<"\nCosec("<<angl<<") = "<<result2<<endl;
            break;
        
        default :
            cout<<"\nPlease enter a valid number "<<endl;
            break;
    }
}

class Hybrid_calci : public simple_calci, public scientific_calci  
{
      public:
          void print(int);
};

void Hybrid_calci::print(int f)
{
      if(f<5)
      {
          calculation(f);
      }
      else
      {
          calci(f);
      }
}

int main()
{   
    float a,b,c;
    int n;
    
    cout<<"\n-------------------------- OPERATION CODES ---------------------------"<<endl;
    cout<<"\n1 :- Additon "<<endl;
    cout<<"\n2 :- Subtraction "<<endl;
    cout<<"\n3 :- Multiplication "<<endl;
    cout<<"\n4 :- Division "<<endl;

    cout<<"\n5 :- Sin(x) "<<endl;
    cout<<"\n6 :- Cos(x) "<<endl;
    cout<<"\n7 :- Tan(x) "<<endl;
    cout<<"\n8 :- Cot(x) "<<endl;
    cout<<"\n9 :- Sec(x) "<<endl;
    cout<<"\n10 :- Cosec(x) "<<endl;

    cout<<"\nEnter the operation code "<<endl;
    cin>>n;

    if(n<5)
    {
        cout<<"\nEnter two numbers "<<endl;
        cin>>a>>b;
    }
    else
    {
        cout<<"\nEnter value of angle "<<endl;
        cin>>c;
    }
    Hybrid_calci hc1;
    hc1.set_numbers(a,b);
    hc1.set_values(c);
    hc1.print(n);
    return 0;
}