#include<bits/stdc++.h>

using namespace std;
#define ll              long long

int main()
{
    int t,i=1;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll x=0,y=0;
        if(a>b && a>c)
        {
            x=pow(a,2);
            y=(pow(b,2)+pow(c,2));
        }
        else if(b>a && b>c)
        {
            x=pow(b,2);
            y=(pow(a,2)+pow(c,2));
        }
        else if(c>a && c>b)
        {
            x=pow(c,2);
            y=(pow(a,2)+pow(b,2));
        }
        if(x==y)
        {
            cout<<"Case "<<i++<<": yes"<<endl;
        }
        else
        {
            cout<<"Case "<<i++<<": no"<<endl;
        }

    }
}
