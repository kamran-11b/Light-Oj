#include <bits/stdc++.h>
using namespace std;

#define    ll     long long
#define    mx     10000002

bool ar[mx];
vector<ll>vl;

void sieve()
{
    memset(ar,1,sizeof(ar));
    for(ll i=4; i<=mx; i+=2)
    {
        ar[i]=0;
    }
    for(ll i=3; i<=sqrt(mx); i+=2)
    {
        if(ar[i])
        {
            for(ll j=i*i; j<=mx; j=j+(2*i))
            {
                ar[j]=0;
            }
        }
    }
    for(ll i=2; i<=mx; i++)
    {
        if(ar[i])
        {
            vl.push_back(i);
        }
    }
}


int main()
{
    //freopen("A.txt","r",stdin);
    //freopen("A.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    sieve();
    int t,f=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int c=0;
        for(ll i=0; vl[i]<=n-vl[i]; i++)
        {
                if(ar[n-vl[i]])
                    c++;
        }
        cout<<"Case "<<f++<<": "<<c<<endl;
    }

}
