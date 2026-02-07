#include<iostream>
using namespace std;
int main()
{
    int n , id;
    cout<<("Enter no of id's to be entered");
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<("Enter id ");
        cin>>id;
        if (id%3==0 && id%5==0)
            cout << "\nFUZZBUZZ";
        else if (id%5==0)
            cout << "\nBUZZ";
        else if (id%3==0)
            cout << "\nFUZZ";
    }
    return 0;
}
