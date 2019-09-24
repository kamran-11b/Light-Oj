#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int ar[a+2];
        for(int j=0; j<a; j++)
        {
            cin>>ar[j];
        }
        int su=0,k=0;
        for(int j=0; j<a; j++)
        {
            su+=ar[j];
            if(k==b || su>c)
            {
                break;
            }
            if(su<=c)
            {
                k++;
            }

        }
        cout<<"Case "<<i<<": "<<k<<endl;
    }
}
