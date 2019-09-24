#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define ull             unsigned long long
#define pi              2*acos(0.0)

int bi(int a)
{
    int n=0,c=0;
    while(a>0)
    {
        int p=a%10;
        n=n+(p*(pow(2,c)));
        a/=10;
        c++;
    }
    return n;
}


int main()
{
    //freopen("A.txt","r",stdin);
    //freopen("A.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        char m;
        int a,b,c,d;
        int e,f,g,h;
        cin>>a>>m>>b>>m>>c>>m>>d;
        cin>>e>>m>>f>>m>>g>>m>>h;
        if((bi(e)==a && bi(f)==b && bi(g)==c && bi(h)==d))
        {
            cout<<"Case "<<i<<": "<<"Yes"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": "<<"No"<<endl;
        }
    }
}

