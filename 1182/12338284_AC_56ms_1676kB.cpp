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
        int tt;
        cin>>tt;
        int f=0;
        while(tt>=1)
        {
            if(tt%2==0)
            {
                tt=tt/2;
            }
            else if(tt%2==1)
            {
                f++;
                tt=tt/2;
            }
        }
        if(f%2==0)
            cout<<"Case "<<c++<<": even"<<endl;
        else
            cout<<"Case "<<c++<<": odd"<<endl;
    }
}

