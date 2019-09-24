#include <bits/stdc++.h>
using namespace std;

#define ll     long long
#define Mod    1000000007
#define  mx 10000005
vector<ll>v;

bool ar[mx];

void seive()
{
    memset(ar,1,sizeof(ar));
    ll i,j;
    for(i=4; i<=mx; i+=2)
    {
        ar[i]=0;
    }
    for(i=3; i*i<=mx; i+=2)
    {
        if(ar[i])
        {
            for(j=i*i; j<=mx; j=j+(2*i))
            {
                ar[j]=0;
            }
        }
    }

    for(i=2; i<=mx; i++)
    {
        if(ar[i])
        {
            v.push_back(i);
        }
    }
}

int main()
{
    seive();
    int t,f=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll c=0;
        for(ll i=0; v[i]<=n-v[i]; i++)
        {
            if(ar[n-v[i]])
            {
                c++;
            }
        }
        cout<<"Case "<<f++<<": "<<c<<endl;
        v.clear();
    }
    return 0;
}

