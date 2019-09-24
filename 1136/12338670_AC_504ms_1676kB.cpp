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
        ll a,b;
        cin>>a>>b;
        if(b<a)
        {
            swap(a,b);
        }
        ll m=b/3-a/3;
        int f=0;
        if(a%3==0)
        {
            f++;
        }
        if(b%3==2)
        {
            f++;
        }
        cout<<"Case "<<c++<<": "<<((2*m)+f)<<endl;
    }

}

