#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<=6;i++)
    {
        for(int j=0;j<=3;j++)
        {
                if((i==1||i==2||i==3||i==4||i==5)&&(j==1||j==2))
                    cout<<" ";
                else
                    cout<<"*";
        }
        cout<<endl;
    }
    
}
