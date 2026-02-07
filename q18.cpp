#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int temp , sum = 0 , n,rev = 0,digit;
    cout<<"Enter number";
    cin>>n;
    temp =n;
    while(temp!=0)
    {
        digit = temp%10;
        rev = rev*10+digit;
        temp/=10;
    }
    if(rev==n)
        cout<<"PALINDROME";
    else
        cout<<"NOT A PALINDROME";
    return 0;
}
