//making use of pionters
#include<iostream>
using namespace std;

int main()
{
    int* p;
    int a[10],n;
    cout<<"Enter the elements of array "<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the position of the value whose address you want to know"<<endl;
    cin>>n;
    p=a;
    cout<<"address of first member of array : "<<a<<endl;
    cout<<"address of first member of array using pionters : "<<p<<endl;

    cout<<"\nThe value of first member of array : "<<a[0]<<endl;
    cout<<"The value of first member of array using pionters : "<<*p<<endl;

    cout<<"\nAddress of "<<n<<" element is : "<<(p+n)<<endl;
    cout<<"The value at "<<(p+n)<<" is : "<<*(p+n)<<endl;

    return 0;
}