#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;

        long long a[n],i,c=1;
      

        for(i=0;i<n;i++)
        {

            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1])
            {
                c++;
            }
        }
        cout<<c;
        
    
}