#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define ull             unsigned long long
#define  pi             2*acos(0.0)


int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x==20)
        {
            cout<<10<<" "<<10<<endl;
        }
        else if(x<=10)
        {
            cout<<0<<" "<<x<<endl;
        }
        else if(x>10)
        {
            cout<<x-10<<" "<<10<<endl;
        }
        else
        {
            cout<<0<<" "<<0<<endl;
        }
    }
}

