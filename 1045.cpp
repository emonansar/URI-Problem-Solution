#include <bits/stdc++.h>
using namespace std;
int main()
{
    double A,B,C,minn,maxx,mid;
    cin>>A>>B>>C;


    if(A>B)
    {
        if(B>C)
        {
            minn=C;
            mid=B;
            maxx=A;
        }
        else if(A>C)
        {
            minn=B;
            mid=C;
            maxx=A;
        }
        else
        {
            minn=B;
            mid=A;
            maxx=C;
        }

    }
    else
        {
            if(B<C)
            {
            minn=A;
            mid=B;
            maxx=C;
            }
            else if(A>C)
            {
            minn=C;
            mid=A;
            maxx=B;
            }
            else
            {
            minn=A;
            mid=C;
            maxx=B;
            }

        }
        A=maxx;
        B=mid;
        C=minn;
        if(A>=(B+C))
        {
            cout<<"NAO FORMA TRIANGULO"<<endl;
        }
        else if(A*A==(B*B+C*C))
           {
              cout<<"TRIANGULO RETANGULO"<<endl;
           }
         else if(A*A>(B*B+C*C))
           {
              cout<<"TRIANGULO OBTUSANGULO"<<endl;
           }
        else if(A*A<(B*B+C*C))
           {
              cout<<"TRIANGULO ACUTANGULO"<<endl;
           }

        if(A==B && B==C)
            {
              cout<<"TRIANGULO EQUILATERO"<<endl;
            }
        if((A==B && A!=C) ||(B==C && B!=A) || (C==A && C!=B))
            {
              cout<<"TRIANGULO ISOSCELES"<<endl;
            }
    }



