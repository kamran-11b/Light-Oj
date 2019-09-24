#include<iostream>
#include<algorithm>
#include<bits/c++io.h>

using namespace std;

int main ()
{
    int n,T,c=1;
    int a[100];
    cin>>T;
    while(T--)
    {
        cin>>n;
        int s = 0;
        for (int i = 1; i <=n; i++)
        {
            cin>>a[i];
        }
        for (int i = 1; i <=n; i++)
        {
            if(a[i] != i)
            {
                for (int j = i + 1; j <=n; j++)
                {
                    if(a[j] == i)
                    {
                        swap(a[j], a[i]);
                        s++;
                        break;
                    }
                }
            }

        }
        cout<<"Case "<<c++<<": "<<s<<endl;
    }
    return 0;
}
