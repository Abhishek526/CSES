#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    float x1,x2,x3,y1,y2,y3,x=0,y=0,a=0,b=0;
    float t=0,m=0;
    cin>>x1>>x2>>x3>>y1>>y2>>y3;
    y=y2-y1;
    x=x2-x1;    
    m=y/x;
    a=x3-x1;
    b=y3-y1;
    t=m*a;
    t=t-b;
    
cout<<t;
    if(t==0)
    {
        cout<<"TOUCH";
    }
    else if(t>0)
    {
        cout<<"RIGHT";
    }
    else
    {
        cout<<"LEFT";
    }
}