 #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    int main()
    {
        ll n,x;
        cin>>n>>x;
        ll a[n],i,j,f=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]+a[j]==x)
                {   f=1;
                    cout<<i+1<<" "<<j+1;
                    break;
                }
            }
            if(f==1)
            {
                break;
            }
        }
        if(f!=1)
        {
            cout<<"IMPOSSIBLE";
        }
    }