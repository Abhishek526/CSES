#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a[200000],i,s=0;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=1;i<n;i++)
{if(a[i]<a[i-1])
{
    s+=a[i-1]-a[i];
    a[i]=a[i-1];
}
}
cout<<s;
}

