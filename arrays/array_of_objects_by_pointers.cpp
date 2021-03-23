// here we will briefly learn about how we can make use of pointers to create arrays of objects
#include<iostream>
using namespace std;

class Item
{
    int id;
    float price;
    static int p;
    public:
        void Details(int, float);
        void PrintDetails(void);
};

int Item::p=1;

void Item::Details(int q,float w)
{
    id=q;
    price=w;
}

void Item::PrintDetails()
{
    cout<<"\nItem "<<p<<" id is "<<id<<endl;
    cout<<"\nItem "<<p<<" price is "<<price<<endl;
    p++;
}

int main()
{   
    int num,a;
    float b;
    cout<<"\nHow many item are there "<<endl;
    cin>>num;

    Item *point = new Item[num];
    for(int i=0;i<num;i++)                           // here we have accesses all objects by for loop thus using each object
    {   
        cout<<"\nEnter item "<<(i+1)<<" id "<<endl;
        cin>>a;
        cout<<"\nEnter price of item "<<(i+1)<<endl;
        cin>>b;
        (point+i)->Details(a,b);             // since we have not use the value in pointer but it's address thus it can access
                                            // all object by there address and also the starting address and value of pointer doesn't
                                           // change

    }

    for(int j=0;j<num;j++)
    {
        (point+j)->PrintDetails();
    }

    return 0;

}