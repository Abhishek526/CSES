#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {long long a,b;
        cin>>a>>b;
        while((a>1 && b>0)  ||  (a>0 && b>1))
        {
            if(a>b)
            {
                a-=2;
                b-=1;
            }
            else
            {
                b-=2;
                a--;
            }
            
        }
        if(a==0 && b==0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        
    }
}