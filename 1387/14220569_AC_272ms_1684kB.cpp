#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
   int t,n,a,sum;
   string s;
   cin>>t;
   for(int i=1;i<=t;++i)
   {
       cout<<"Case "<<i<<":\n";
       sum=0;
       cin>>n;
       for(int j=0;j<n;++j)
       {
           cin>>s;
           if(s=="donate")
           {
               cin>>a;
               sum+=a;
           }
           else cout<<sum<<endl;
       }
   }
}
