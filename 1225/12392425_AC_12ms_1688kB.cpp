#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define ull             unsigned long long
#define pi              2*acos(0.0)

ll pal(ll n)
{
    ll a,b=0;
    while(n!=0)
    {
        a=n%10;
        b=b*10+a;
        n=n/10;
    }
    return b;
}
int main()
{
    //freopen("A.txt","r",stdin);
    //freopen("A.txt","w",stdout);
    ios_base::sync_with_stdio(0);

    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        ll a;
        scanf("%lld",&a);
        if(pal(a)==a)
            //cout<<"Case "<<i<<": "<<"Yes"<<endl;
            printf("Case %d: Yes\n",i);
        else
            // cout<<"Case "<<i<<": "<<"No"<<endl;
            printf("Case %d: No\n",i);
    }
}

