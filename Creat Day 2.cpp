#include<iostream>
using namespace std;
int main()
{
string s;
int a;
cout<<"Enter the string:"
<<endl;
cin>>s;
cout<<"Enter the age:"
<<endl;
cin>>a;
if(a<=100)
{
cout<<"Congratulations! Your age is:";
cout<<a<<endl;
}
else
{
cout<<"Sorry! your are out of the Universe";
}
return 0;
}