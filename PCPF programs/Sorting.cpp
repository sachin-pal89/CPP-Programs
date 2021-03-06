// Sachin Pal - IT - 37
#include<iostream>
using namespace std;

void swap(int &x,int &y)
{
    int temp = x;
    x=y;
    y=temp;
}

int main()
{
    int a[] = {1,4,22,4,56,89,23,55,34,66,12,34,65,11,56,32,55,6,67,89};

    int size = sizeof(a)/sizeof(a[0]);
    
    // Sort array in ascending order
    for(int i=0;i<size;i++)
    {   
        int flag=0;
        for(int j=0;j<size-i-1;j++)
        {
               if(a[j]>a[j+1])
               {   
                   flag=1;
                   swap(a[j],a[j+1]);
               }
        }

        if(flag==0)
           break;
    }
    
    cout<<"Array in ascending order is "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    // Sort array in descending order
     for(int i=0;i<size;i++)
    {   
        int flag=0;
        for(int j=0;j<size-i-1;j++)
        {
               if(a[j]<a[j+1])
               {   
                   flag=1;
                   swap(a[j],a[j+1]);
               }
        }

        if(flag==0)
           break;
    }

    cout<<"\nArray in descending order is "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}