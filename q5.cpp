#include<iostream>
using namespace std;
int main()
{
    int a=10,b=5,c=0;
    c=a;
    a=b;
    b=a;
    return 0;
}
//without using a temporary variable

#include<iostream>
using namespace std;
int main()
{
    int a=10,b=5;
    a=a+b;
    b=a-b;
    a=a-b;
    return 0;
}
