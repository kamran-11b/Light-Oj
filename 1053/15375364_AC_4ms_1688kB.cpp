#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int ar[5];
        for(int j=0; j<3; j++)
        {
            cin>>ar[j];
        }
        sort(ar,ar+3);
        if(((ar[0]*ar[0])+(ar[1]*ar[1]))==ar[2]*ar[2])
            cout<<"Case "<<i<<": "<<"yes"<<endl;
        else
            cout<<"Case "<<i<<": "<<"no"<<endl;
    }

}
