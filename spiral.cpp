#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{ll t;
cin>>t;
while(t--)
{
    ll i,j,x=0,m;
    cin>>i>>j;
    m=max(i,j)-1;
    if(m%2!=0)
    {
        if(i<=j)
        {
            x+=i;
        }
        else{
            x += (m*2+1)-(j-1);
        }
    }
    else{
        if(i>j)
        {
            x+=j;
        }
        else
        {
            x += (m*2+1)-(i-1);
        }
    }
    x+=m*m;
    cout<<x<<endl;
}
}