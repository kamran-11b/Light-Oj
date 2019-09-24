#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define ull             unsigned long long

#define  pi             2*acos(0.0)

int main()
{
    //freopen("A.txt","r",stdin);
    //freopen("A.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
       double a;
       cin>>a;
       double m=a*a;
       double p=pi*m;
       double k=(2*a)*(2*a);
       double nn=k-p;
       cout<<fixed<<setprecision(2)<<"Case "<<i<<": "<<nn<<endl;
    }
}
