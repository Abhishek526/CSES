#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i;
cin>>n;
int a[100],e=0,s=0;
for(i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a,a+n);
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
int k=n-1;
i=0;
while(n!=0)
{
    if(e<=s)
    {
        e+=a[k];
        k--;
        cout<<"e="<<e<<k<<endl;
    }
    else
    {
        s+=a[i];
        i++;
        cout<<"s="<<s<<i<<endl;
    }
    n--;
   
}

}