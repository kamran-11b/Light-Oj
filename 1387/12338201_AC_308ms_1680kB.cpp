#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define ull             unsigned long long

int main()
{
    //freopen("A.txt","r",stdin);
    //freopen("A.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    int t,c=1;
    cin>>t;
    while(t--)
    {
        int ss=0;
        string s;
        int a;
        int tt;
        cin>>tt;
        cout<<"Case "<<c++<<":"<<endl;
        while(tt--)
        {
            cin>>s;
            if(s=="donate")
            {
                cin>>a;
                ss+=a;
            }
            else if(s=="report")
            {
                cout<<ss<<endl;
            }
        }
    }
}

