// In this code we will make use of parameterized constructor
#include<iostream>
using namespace std;

class calci
     {
         float a,b;
        public:
          calci(float,float); // This is a parameterized function with arguments of float type
          void print_result();
     };

calci::calci(float x,float y)
{
    a=x;
    b=y;
}

void calci::print_result()
{
    cout<<"\nAddition of two number is "<<a+b<<endl;
    cout<<"\nSubtraction of two number is "<<a-b<<endl;
    cout<<"\nMultiplication of two number is "<<a*b<<endl;
    cout<<"\nDivision of two number is "<<a/b<<endl;
}

int main()
{   
    float m,n,o,p;

    cout<<"\nEnter first two number "<<endl;
    cin>>m>>n;
    calci c1(m,n);   // Implict call of parameterized constructor
    c1.print_result();

    cout<<"\nEnter other two numbers "<<endl;
    cin>>o>>p;
    calci c2= calci(o,p);  // Explicit call of parameterized constructor
    c2.print_result();

    return 0;
}