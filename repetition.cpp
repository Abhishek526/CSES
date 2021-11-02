#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    long long i,c=1,m=0;
    cin>>s;
    for(i=1;s[i]!='\0';i++)
    {
        if(s[i]==s[i-1])
        {
            c++;
        }
        else
        {
            c=1;

        }
       m=max(m,c);
        
    }
    m=max(m,c);
    cout<<m;
}