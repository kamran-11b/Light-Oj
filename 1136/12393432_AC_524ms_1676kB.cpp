#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define ull             unsigned long long

#define  pi             2*acos(0.0)

int main()
{
    //freopen("A.txt","r",stdin);
    //freopen("A.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        ll a,b;
        cin>>a>>b;
        if(b<a)
        {
            swap(a,b);
        }
        ll p=b/3-a/3;
        int f=0;
        if(b%3==2)
        {
            f++;
        }
        if(a%3==0)
        {
            f++;
        }
        cout<<"Case "<<i<<": "<<(2*p)+f<<endl;
    }
}
