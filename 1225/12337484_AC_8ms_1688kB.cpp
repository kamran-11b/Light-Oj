#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define ull             unsigned long long

ll p(ll n)
{
    ll m=0;
    while(n>0)
    {
        ll p=n%10;
        m=m*10+p;
        n=n/10;
    }
    return m;
}

int main()
{
    //freopen("A.txt","r",stdin);
    //freopen("A.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    int t,c=1;
    scanf("%d",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        if(p(n)==n)
        {
            //cout<<"Case "<<c++<<": "<<"Yes"<<endl;
            printf("Case %d: Yes\n",c++);
        }
        else
        {
            // cout<<"Case "<<c++<<": "<<"No"<<endl;
            printf("Case %d: No\n",c++);
        }
    }

}

