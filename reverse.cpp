#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int rev=0;
    int last;
    while (n>0)
    {
        last = n%10;
        rev = rev*10 + last;
        n = n/10;
    }
    cout<<rev<<endl;
}