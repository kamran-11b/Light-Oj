#include<bits/stdc++.h>
using namespace std;
#define   ll   long long
#define   mx   100005
ll ar[mx];
struct info
{
    ll sum,prop;
} tree[3*mx];


void tree_build(ll node,ll L,ll R)
{
    if(L==R)
    {
        tree[node].sum=ar[L];
        return;
    }
    ll mid=(L+R)/2;
    tree_build(2*node,L,mid);
    tree_build(2*node+1,mid+1,R);
    tree[node].sum=(tree[2*node].sum + tree[2*node+1].sum);
}

ll tree_query(ll node,ll L,ll R,ll l,ll r,ll carry=0)
{
    if(l>R || r<L)
    {
        return 0;
    }
    if(l<=L && R<=r)
    {
        return tree[node].sum+carry*(R-L+1);
    }
    ll mid=(L+R)/2;
    ll LT=tree_query(2*node,L,mid,l,r,carry+tree[node].prop);
    ll RT=tree_query(2*node+1,mid+1,R,l,r,carry+tree[node].prop);
    return (LT+RT);
}

void tree_update(ll node,ll L,ll R,ll l,ll r,ll x)
{
    if (l > R || r < L)
        return;
    if (L >= l && R <= r)
    {
        if(x==0)
        {
            tree[node].sum=0;
            tree[node].prop+=x;
            return;
        }
        else
        {
            tree[node].sum+=((R-L+1)*x);
            tree[node].prop+=x;
            return;
        }
    }
    ll mid = (L+R)/2;
    ll Left = node*2;
    ll Right = (node*2)+1;
    tree_update(Left,L,mid,l,r,x);
    tree_update(Right,mid+1,R,l,r,x);
    tree[node].sum=tree[Left].sum+tree[Right].sum+(R-L+1)*tree[node].prop;
}


int main()
{
    int t,f=1;
    scanf("%d",&t);
    while(t--)
    {
        ll x,y;
        scanf("%lld %lld",&x,&y);
        for(int i=0; i<x; i++)
        {
            scanf("%lld",&ar[i]);
        }
        tree_build(1,0,x-1);
        printf("Case %d:\n",f++);
        while(y--)
        {
            ll tp;
            scanf("%lld",&tp);
            if(tp==2)
            {
                ll l,v;
                scanf("%lld %lld",&l,&v);
                tree_update(1,0,x-1,l,l,v);
            }
            else if(tp==3)
            {
                ll l,r;
                scanf("%lld %lld",&l,&r);
                printf("%lld\n",tree_query(1,0,x-1,l,r));
            }
            else if(tp==1)
            {
                ll m;
                scanf("%lld",&m);
                printf("%lld\n",tree_query(1,0,x-1,m,m));
                tree_update(1,0,x-1,m,m,0);
            }
        }
        memset(tree,0,sizeof tree);
        memset(ar,0,sizeof ar);
    }
}
