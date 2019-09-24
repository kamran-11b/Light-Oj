#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=1;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
        {
            int n=a-b;
            int s=n+a;
            int m=19+s*4;
            cout<<"Case "<<i++<<": "<<m<<endl;
        }
        else
        {
            int m=19+b*4;
            cout<<"Case "<<i++<<": "<<m<<endl;
        }
    }
    return 0;
}
