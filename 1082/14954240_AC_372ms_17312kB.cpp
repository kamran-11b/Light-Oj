#include<bits/stdc++.h>
using namespace std;
#define mx 1000005

int tree[mx*3];
int ar[mx];

void build(int node ,int b,int e)
{
    if(b==e)
    {
        tree[node]=ar[b];
        return;
    }
    int L=2*node;
    int R=2*node+1;
    int mid=(b+e)/2;

    build(L,b,mid);
    build(R,mid+1,e);
    tree[node]=min(tree[L],tree[R]);
    //cout<<tree[node]<<endl;
}

int query(int node ,int b,int e,int i,int j)
{
    if(i>e || j<b)
        return 1000000;
    if(b>=i && e<=j)
    {
        return tree[node];
    }
    int L=2*node;
    int R=(2*node)+1;
    int mid=(b+e)/2;
    int x=query(L,b,mid,i,j);
    int y=query(R,mid+1,e,i,j);
    //cout<<x<<" "<<y<<endl;
    return min(x,y);

}
int main()
{
    int t,f=1;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&ar[i]);
        }
        build(1,1,n);
        printf("Case %d:\n",f++);
        while(m--)
        {
            int xx,yy;
            scanf("%d %d",&xx,&yy);
            printf("%d\n",query(1,1,n,xx,yy));
        }

    }

}
