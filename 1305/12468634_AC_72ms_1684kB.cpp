#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define ull             unsigned long long
#define  pi             2*acos(0.0)

int main()
{
    //freopen("A.txt","r",stdin);
    //freopen("A.txt","w",stdout);
    int i,t,Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,area,m;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;
        Dx=Ax+Cx-Bx;
        Dy=Ay+Cy-By;
        area=(abs(((Ax*By)+(Bx*Cy)+(Cx*Dy)+(Dx*Ay))-((Ay*Bx)+(By*Cx)+(Cy*Dx)+(Dy*Ax))))/2;
        cout<<"Case "<<i<<": "<<Dx<<" "<<Dy<<" "<<area<<endl;
    }
}
