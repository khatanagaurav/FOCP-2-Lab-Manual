#include<iostream>
using namespace std;
int main()
{
    int e,n,d;
    cout<<"Total no of entries";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter your total expense";
        cin>>e;
        if(e>=1000)
        {
            d = 0.1*e;
            e = e-d;
            cout<<"Your order is above than 1000 thus you got 10per discount "<<e;
        }
        else
        {
            cout<<"No discount for less than 1000 rupee sales"<<e;
        }
    }
    return 0;
}
