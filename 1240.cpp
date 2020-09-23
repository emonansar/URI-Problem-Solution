#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,d=0;
    long int a,b,p;
    cin>>n;
    while(n!=0)
    {
        cin>>a>>b;
        p=b;
        if(a<b)
        {
            cout<<"nao encaixa"<<endl;
        }
        else if(a==b)
        {
            cout<<"encaixa"<<endl;
        }

        else if(a>b)
        {

           while(b/10!=0)
            {
                if(b%10>=0)
                {
                d++;
                b=b/10;
                }
            }
            d=d+1;
            //cout<<b<<endl;
            //cout<<d<<endl;
            while(d!=0)
            {
                if((a%10)==(p%10))
                {
                    //cout<<a<<" "<<p<<endl;
                    a=a/10;
                    p=p/10;
                    c=1;


                }
                else{
                    //cout<<a<<" "<<p<<endl;
                    c=2;
                    break;
                }
                d--;
                //cout<<d<<endl;
            }
            //cout<<c<<endl;
            if(c==1)
            {
                cout<<"encaixa"<<endl;
            }
            else if(c==2)
            {
                cout<<"nao encaixa"<<endl;
            }

        }
        n--;
        d=0;
    }
}
