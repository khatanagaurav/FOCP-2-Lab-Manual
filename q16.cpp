#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter number to checked if prime or not";
    cin>>n;
    bool f = true;
    if(n<=1)
        f = false;
    else
        {
            for(int i=2;i<=n/2;i++)
            {
                if(n%i==0)
                {
                    f = false;
                }
            }
        }
    if(f==true)
    {
        cout<<"A Prime";
    }
    else
    {
        cout<<" Not a Prime";
    }
}
