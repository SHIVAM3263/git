#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"enter first number: ";
    cin>> a;
    cout<<"\n enter second number: ";
    cin>> b;
temp=a;
a=b;
b=temp;

cout<<"\n first number after swap:"<<a;
cout<<"\n second number after swap:"<<b;

return 0;

}