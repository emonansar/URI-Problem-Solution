#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=1,m=0,c=0;
    hell:
    cin>>n;
    while(n!=0)
    {
     int a[n][n];
     for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
        {
            a[i][j]=k;
            k=k*2;
        }
        k=a[i][1];
      }
      m=a[n-1][n-1];
      while(m/10!=0)
      {
          c++;
          m=m/10;
      }
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
        {
          cout<<right<<setw(c+1)<<a[i][j];
          if(j==n-1)
          {
              break;
          }
          cout<<" ";
        }
        cout<<"\n";
       }
       cout<<"\n";
       k=1;
       m=0;
       c=0;
       goto hell;
    }
}
