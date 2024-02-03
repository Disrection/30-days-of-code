#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number:"<<endl;
    cin>>a;

    if(a % 2==0)
    {
        cout<<"the entered number is even that is:";
        cout<<a<<endl;
    }
    else{
        cout<<"The entered number is odd that is:";
        cout<<a<<endl;
    }
    return 0;
}
