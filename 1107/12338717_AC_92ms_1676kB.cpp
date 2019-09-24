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
        int x,y,x1,y1;
        cin>>x>>y>>x1>>y1;
        int n;
        cin>>n;
        cout<<"Case "<<c++<<":"<<endl;
        while(n--)
        {
            int a,b;
            cin>>a>>b;
            if((a>=x && b>=y) &&(a<=x1 && b<=y1))
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        //cout<<"Case "<<c++<<": "<<((2*m)+f)<<endl;
    }

}

