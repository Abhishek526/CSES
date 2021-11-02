#include<bits/stdc++.h>
using namespace std;
int main()
{long long n,i,s1=0,s2=0,x;
cin>>n;
s1=n;
for(i=1;i<n;i++)
{
    cin>>x;
    s1+=i;
    s2+=x;
}
cout<<s1-s2;
}