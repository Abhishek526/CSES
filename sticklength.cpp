#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a[100],i,s=0,d=0;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>a[i];
    s+=a[i];
}
s=s/n;
for(i=0;i<n;i++)
{
    d=d+abs(s-a[i]);
 
}
 cout<<d<<endl;

}

