#include<iostream>
using namespace std;

int main()
{
    int n1=3;
    int n=2;
    int n2=1;
    if(n>n1&&n>n2)
    {
        cout<<"n is lar"<<n;
    }
    else if(n1>n&&n1>n2)
    {
        cout<<"n1 is lar"<<n1;
    }
    else
    {
        cout<<"n2 is lar"<<n2;
    }
    return 0;
}