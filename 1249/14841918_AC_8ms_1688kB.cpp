#include<bits/stdc++.h>
using namespace std;

#define   ll long long

bool sortbysec(const pair<string,int> &a,
               const pair<string,int> &b)
{
    return (a.second < b.second);
}
int main()
{
    ios_base::sync_with_stdio(0);
    int t,f=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector< pair<string,ll> >p;
        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            int a,b,c;
            cin>>a>>b>>c;
            ll m=a*b*c;
            p.push_back( make_pair(s,m));
        }
        sort(p.begin(),p.end(),sortbysec);

        if(p[0].second==p[n-1].second)
        {
            cout<<"Case "<<f++<<": "<<"no thief"<<endl;
        }
        else
        {
            cout<<"Case "<<f++<<": "<<p[n-1].first<<" took chocolate from "<<p[0].first<<endl;
        }
    }

}
