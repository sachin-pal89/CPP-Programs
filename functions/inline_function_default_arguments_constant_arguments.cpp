//here we will see inline function and  default,constant arguments
#include<iostream>
using namespace std;

inline int repeat(int ,int);
void square(int);
int multiplication(int,const int);
int main()
{
    int a,b,c,d,e;
    cout<<"\nEnter two values"<<endl;
    cin>>a>>b;
    cout<<"\nEnter the value whose square is to be found"<<endl;
    cin>>c;
    cout<<"\nEnter the two values whose multiplication is to be found"<<endl;
    cin>>d>>e;
    cout<<"Sum1 is  "<<repeat(a,b)<<endl;
    cout<<"\nSum2 is  "<<repeat(a,b)<<endl;
    cout<<"\nSum3 is  "<<repeat(a,b)<<endl;

    square(c);
    cout<<"Multiplication is"<<multiplication(d,e);
    
    return 0;
}

int repeat(int x,int y)//a inline function use many times
{
    int sum;
    sum=(x+y);
    return sum;

}

void square(int q=3)//this a default argument
{
    int squ;
    squ=q*q;
    cout<<"Square is"<<squ<<endl;
}

int multiplication(int z,const int x=5)//this a constant argument
{
    return z*x;
}