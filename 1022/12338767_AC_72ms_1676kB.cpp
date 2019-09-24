#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define ull             unsigned long long

#define pi              2*acos(0.0)

int main()
{
    //freopen("A.txt","r",stdin);
    //freopen("A.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    int t,c=1;
    cin>>t;
    while(t--)
    {
        double n;
        cin>>n;
        double a=n*n;
        double m=pi*a;
        double p=(2*n)*(2*n);
        cout<<fixed<<setprecision(2)<<"Case "<<c++<<": "<<p-m<<endl;
    }

}

