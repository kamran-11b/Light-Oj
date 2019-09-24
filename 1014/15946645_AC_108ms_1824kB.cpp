#include <bits/stdc++.h>
using namespace std;
#define  llu      unsigned long long
#define  ll       long long
#define  mx1  1000005


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,c=1;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        a=a-b;
        set<ll>p;
        for(int i=1; i<=sqrt(a); ++i)
        {
            if(a%i==0)
            {
                if(i>b)
                    p.insert(i);
                if(a/i>b)
                    p.insert(a/i);
            }
        }
        cout<<"Case "<<c++<<": ";

        if(p.size()==0)
            cout<<"impossible"<<endl;
        else
        {
            set<ll>:: iterator it;
            int k=0;
            for(it=p.begin(); it!=p.end(); it++)
            {
                if(k==p.size()-1)
                    cout<<*it<<endl;
                else
                    cout<<*it<<" ";
                k++;
            }

        }
    }

}

