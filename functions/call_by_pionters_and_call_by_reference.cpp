//we will how to get the arguments by using address and pionters
#include<iostream>
using namespace std;

void multiply(int*,int*);// this is call by pionters
void subtract(int&,int&);// this is call by refernce
int main()
{
    int a,b;
    cout<<"Enter two values "<<endl;
    cin>>a>>b;

    subtract(a,b);// in call by reference create a refernce variable of a and b
    multiply(&a,&b);// in call by pionters it takes the address of a and b and store in pionters variable
    return 0;
}

void subtract(int &x,int &y)
{
    int sub=(x-y);
    cout<<"subtraction "<<sub<<endl;
}

void multiply(int *m,int *n)
{   
    int multi;
    multi=(*m)*(*n);
    cout<<"Multiplication "<<multi<<endl;
}
