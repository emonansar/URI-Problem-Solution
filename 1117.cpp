#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a,sum=0;
    int c=0;
    while(1)
    {
        cin>>a;
       if(a<0 || a>10)
      {
        cout<<"nota invalida"<<endl;
      }
      if(a>=0 && a<=10)
      {
        sum=sum+a;
        c++;
        if(c==2)
        {
            sum=sum/2;
            cout<<"media = "<<fixed<<setprecision(2)<<sum<<endl;
            return 0;
        }
      }
    }



}
