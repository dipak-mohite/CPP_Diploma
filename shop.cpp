#include<iostream>

void main()
{
    int total=0, n, price, qty, i;
    char iname[30];
    cout<<"Enter no. of items: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter Name: ";
        cin>>iname;
        cout<<"Enter Price: ";
        cin>>price;
        cout<<"Enter Quantity";
        cin>>qty;
        total=price*qty;
    }
    cout<<"\nTotal Bill: "<<total;

    

}