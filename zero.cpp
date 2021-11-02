#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,x,c=0;
    cin>>n;
    for(i=5;i<=n;i+=5)
    {x=i;
        while(x%5==0 && x>0)
        {
            c++;
            x=x/5;
        }
    
    }
    cout<<c;
}