#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        ll a,b;
        if(a>b)
            swap(a,b);
        int c=0;
        cin>>a>>b;
        ll m=b/3-a/3;
        if(a%3==0)
            c++;
        if(b%3==2)
            c++;
        cout<<"Case "<<i<<": "<<((2*m)+c)<<endl;
    }
}


