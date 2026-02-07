#include<iostream>
using namespace std;
int main()
{
    int s,n,max;
    cout<<"Enter no of sales figures";
    cin>>n;
    max = s;
    for(int i=1;i<=n;i++) 
    {    
        cout<<"\nEnter sales figures";
        cin>>s;
    }
    if (max < s)
    {
        max = s;
        cout << "Maximum sales figure is " << s;
    }
    return 0;
}
