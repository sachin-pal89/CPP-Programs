// Here we worked on pointers for creating array of objects and also on arrow operator
#include<iostream>
using namespace std;

class Multiply
{
    int a,b;
    public:
        void Multiples(int,int);
        void Result(void);
};

void Multiply::Multiples(int i,int j)
{
        a=i;
        b=j;
}
void Multiply::Result()
{
    cout<<"\n"<<a<<"*"<<b<<" = "<<(a*b)<<endl;
}

int main()
{   
    int a,b;
    cout<<"\nEnter Two values whose multiple is to be found "<<endl;
    cin>>a>>b;

    Multiply m1;
    //Multiply *point = &m1; --> This a pointer whose value is stored in object m1 and thus can operate on behalf of m1
    Multiply *point = new Multiply;  // here we had set a pointer by using new operator 

    (*point).Multiples(a,b);   // here we call Multiples() function by dereferencing pointer (*point)
    point->Result();           // here we can also do this by using arrow operator "->" it will also do the same
    cout<<endl;


    // Array of objects using pointers 
    Multiply *p = new Multiply[3];
    for(int i=0;i<3;i++)
    {
    (p+i)->Multiples(a,b);
    (p+i)->Result();
    cout<<endl;
    }
    return 0;
}
