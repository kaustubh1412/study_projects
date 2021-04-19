#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a==b && b==c)
    {
        cout<<"triangle is equi";    
    }

    else if (a==b || b==c)
    {
        cout<<"triangle is isco";/* code */
    }

    else
    {
        cout<<"traingle is scalene";
    }
    
    
    
}