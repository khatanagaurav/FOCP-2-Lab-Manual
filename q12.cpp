#include<iostream>
using namespace std;
int main()
{
    int s1,s2,s3;
    cout<<"Enter s1";
    cin>>s1;
    cout << "Enter s2";
    cin >> s2;
    cout << "Enter s3";
    cin >> s3;
    if(s1==s2&&s1==s3&&s2==s3)
        cout<<"Equilateral triangle";
    else if((s1==s2)||(s2==s3)||(s1==s3))
        cout<<"Isoceles triangle";
    else
        cout<<"Scalene triangle";
    return 0;
}
