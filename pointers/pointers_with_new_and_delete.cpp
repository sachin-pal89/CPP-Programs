// we will make use of new and delete operator
#include<iostream>
using namespace std;

int main()
{   
    int a=2;
    int* poi = &a;
    cout<<"\nValue of poi is "<<*poi<<endl;

    float* p= new float(87.13);          // new will help us to dynamically allocate value to pointer p
    cout<<"\nvalue of p is "<<*p<<endl;

    int* poin= new int(33);
    cout<<"\nValue of poin before deletion "<<*poin<<endl;
    delete poin;                                            // delte will clear the content of poin
    cout<<"\nValue of poin after deletion "<<*poin<<endl;

    return 0;
}