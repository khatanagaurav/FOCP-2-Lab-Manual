#include<iostream>
using namespace std;
int main()
{
    int n , bonus , b , net;
    cout<<"Enter the no of employees";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter the basic salary";
        cin>>b;
        bonus = (0.12*b);
        net = bonus+b;
        cout<<"\nbase =" << b;
        cout << "\nBonus =" << bonus;
        cout << "\nNet Salary =" << net;
    }
    return 0;
}
