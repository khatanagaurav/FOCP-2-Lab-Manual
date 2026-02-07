#include<iostream>
using namespace std;
int main()
{
    int s1 , s2 , s3;
    cout<<"Enter score 1";
    cin>>s1;
    cout << "Enter score 2";
    cin >> s2;
    cout << "Enter score 3";
    cin >> s3;
    if(s1>s3&&s1>s2)
        cout<<"1st player is the winner"<<s1;
    else if(s2 > s1 && s2 > s3)
        cout << "2nd player is the winner" << s2;
    else if(s3 > s2 && s3 > s2)
        cout << "3rd player is the winner" << s3;
    return 0;
}
