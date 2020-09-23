#include <bits/stdc++.h>
using namespace std;
int main()
{
  long n;
  int k,l;
  cin>>l;
  while(l!=0)
  {
      cin>>n;
  if(n==1 || n==0)
  {
      cout<<"Not Prime"<<endl;
  }
  if(n==2)
  {
     cout<<"Prime"<<endl;
  }
  if(n>2)
  {
      for(int i=2;i<sqrt(n)+1;i++)
      {
          if(n%i==0)
          {
              k++;
              break;
          }
          else
          {
              k=0;
          }
      }
      if(k==0)
      {
         cout<<"Prime"<<endl;
      }
      else if(k>0)
      {
          cout<<"Not prime"<<endl;
      }

  }
   k=0;
   l--;
  }

}
