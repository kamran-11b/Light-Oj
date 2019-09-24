#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t,c=1;
    cin>>t;
    while(t--)
    {
        int tt,o=0;
        cin>>tt;
        while(tt!=0)
        {
            int m=tt%2;
            if(m%2==1)
            {
                o++;
            }
            tt/=2;
        }
        if(o%2==1)
        {
            cout<<"Case "<<c++<<": "<<"odd"<<endl;
        }
        else
        {
            cout<<"Case "<<c++<<": "<<"even"<<endl;
        }
    }
    return 0;
}
