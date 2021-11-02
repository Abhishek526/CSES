 #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    int main()
    {ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,c=0;
        cin>>n;
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                c++;
            }
        }
        cout<<c+3<<endl;
    }
    }
