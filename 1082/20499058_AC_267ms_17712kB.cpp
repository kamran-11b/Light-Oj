#include<bits/stdc++.h>
using namespace std;
#define   ll   long long
#define   mx   500005

ll tree[3*mx];
ll ar[mx];
void tree_build(ll node,ll L,ll R)
{
    if(L==R)
    {
        tree[node]=ar[L];
        return;
    }
    ll mid=(L+R)/2;
    tree_build(2*node,L,mid);
    tree_build(2*node+1,mid+1,R);
    tree[node]=min(tree[2*node],tree[2*node+1]);
}
ll tree_query(ll node,ll L,ll R,ll l,ll r)
{
    if(l>R || r<L)
    {
        return 200000;
    }
    if(l<=L && R<=r)
    {
        return tree[node];
    }
    ll mid=(L+R)/2;
    ll LT=tree_query(2*node,L,mid,l,r);
    ll RT=tree_query(2*node+1,mid+1,R,l,r);
    return min(LT,RT);
}


int main()
{
   int t,f=1;
   scanf("%d",&t);
   while(t--)
   {
       ll x,q;
       scanf("%lld %lld",&x,&q);
       for(int i=1;i<=x;i++)
       {
           scanf("%lld",&ar[i]);
       }
       tree_build(1,1,x);
       printf("Case %d:\n",f++);
       while(q--)
       {
           ll l,r;
           scanf("%lld %lld",&l,&r);
           printf("%lld\n",tree_query(1,1,x,l,r));
       }
   }
}
