#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,temp,sum=0;
    int psum=0;
    cout<<"Enter number to check if perfect or armstrong";
    cin>>n;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
            psum+=i;
    }
    if(psum==n)
        cout<<"\nPERFECT";
    else
        cout<<"\nNOT PERFECT";
    int digit,digits=0;
    temp=n;
    while(temp!=0)
    {
        digits++;
        temp/=10;
    }
    temp = n;
    while(temp!=0)
    {
        digit = temp%10;
        sum += pow(digit,digits);
        temp/=10;
    }
    if(sum==n)
        cout<<"\nARMSTRONG";
    else
        cout<<"\nNOT ARMSTRONG";
    return 0;
}
