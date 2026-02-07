#include<iostream>
using namespace std;
int main()
{
    int y;
    cout<<"which year is a leap year?";
    cin>>y;
    if((y%400==0) || (y%4==0&&y%100!=0))
        cout<<"A leap year";
    else
        cout<<"Not a leap year";
    return 0;
}
