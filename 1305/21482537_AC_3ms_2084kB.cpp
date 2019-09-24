#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  int t;
  scanf("%d",&t);

  for(int i=1;i<=t;i++)
  {
      int ax,ay,bx,by,cx,cy,dx,dy;
      scanf("%d %d %d %d %d %d",&ax,&ay,&bx,&by,&cx,&cy);
      dx=ax+cx-bx;
      dy=ay+cy-by;

      int k=(ax*by)+(bx*cy)+(cx*dy)+(dx*ay);
      int kk=(ay*bx)+(by*cx)+(cy*dx)+(dy*ax);
      int m=abs(k-kk);
      printf("Case %d: %d %d %d\n",i,dx,dy,m/2);
  }

}




