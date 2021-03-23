//exchaning data of two arrays in their simultaneous positions
#include<iostream>
using namespace std;

int main()
{
    int a[5]={1,2,3,4,5};
    int b[5]={6,7,8,9,10};
    for(int i=0;i<5;i++)
    {
        a[i]=b[i];
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
    return 0;
}