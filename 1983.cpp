#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,no=0;
    cin>>n;
    int a[n];
    float b[n],maxx;
    for(int i=0;i<n;i++)
    {
      cin>>a[i]>>b[i];
    }
    maxx=b[0];
    for(int i=0;i<n;i++)
    {
      if(b[i]>=8)
      {
          if(b[i]>=maxx)
          {
            maxx=b[i];
            no=a[i];
          }
      }
    }
    if(no==0)
    {
        cout<<"Minimum note not reached"<<endl;
    }
    else
    cout<<no<<endl;
}
