//Here we will learn about how to use friend function in a program
#include<iostream>
using namespace std;

class price
{
    int product_id;
    float prices,whole_cost;
   public:
    friend void total_cost(price p1, price p2); //here we declare the friend function 
    void product(int a);
    void pricing(float b);
    void print(void);
};

 void total_cost(price p1,price p2) //friend function can be of any data type
{   
    int n1,n2;
    cout<<"\nHow many kilo of product 1 is needed "<<endl;
    cin>>n1;
    cout<<"\nHow many kilo of product 2 is needed "<<endl;
    cin>>n2;
    p1.print();// we can use objects of class within a friend function
    p2.print();
    float x=n1*(p1.prices)+n2*(p2.prices);
    cout<<"\nThe total cost is "<<x<<endl; 

}

void price::product(int a)
{
    product_id=a;
}

void price::pricing(float b)
{
    prices=b;
}



void price::print()
{   int i=1;
    cout<<"\nThe product id of product"<<i<<" is "<<product_id<<endl;
    cout<<"\nThe cost of product "<<i<<" is "<<prices<<endl;
    i=i+1;
}



int main()
{   
    int id1,id2;
    float cost1,cost2;

    cout<<"Enter the product id of product 1 and product 2"<<endl;
    cin>>id1>>id2;

    cout<<"\nEnter the cost of product1 and product2"<<endl;
    cin>>cost1>>cost2;
    price pro1,pro2,tot;

    pro1.product(id1);
    pro1.pricing(cost1);

    pro2.product(id2);
    pro2.pricing(cost2);

    total_cost(pro1,pro2); // here we call the friend function // NOTE---> we can also save it in  a object and then print by  creating 
                           // print function in a class
    return 0;

}