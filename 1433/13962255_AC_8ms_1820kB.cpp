#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pi acos(-1.0)

int main ()
{
    int t,i=1;
    cin>>t;
    while(t--)
    {

        int ox,oy,ax,ay,bx,by;
        cin>>ox>>oy>>ax>>ay>>bx>>by;

        double r=sqrt(((ox-ax)*(ox-ax))+((oy-ay)*(oy-ay)));
        double ab=sqrt(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)));

        double aob=acos((((r*r)*2)-(ab*ab))/(2*r*r));
        double h=(180/pi);
        aob*=h;
        double m=(aob/360)*2*pi*r;
        cout<<"Case "<<i++<<": "<<setprecision(8)<<m<<endl;

    }

}


