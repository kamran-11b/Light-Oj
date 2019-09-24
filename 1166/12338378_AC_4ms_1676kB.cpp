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
        int n;
        cin>>n;
        int ar[n+2];
        for(int i=1; i<=n; i++)
        {
            cin>>ar[i];
        }
        int m=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                if(ar[j]==i)
                {
                    swap(ar[i],ar[j]);
                    m++;
                }
            }
        }
        cout<<"Case "<<c++<<": "<<m<<endl;
    }
}

