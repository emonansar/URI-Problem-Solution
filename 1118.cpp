#include <bits/stdc++.h>
using namespace std;
int main()
{

    float a,sum=0;
    int c=0,x,n=0;
  while(n>=0)
  {
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
            sum=0;
            c=0;
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            l:
            cin>>x;
            if(x==2)
            {
                return 0;
            }
            if(x==1)
            {
              n++;
            }
            else
            {
                cout<<"novo calculo (1-sim 2-nao)"<<endl;
                goto l;
            }
        }
      }
    }
  }
}

