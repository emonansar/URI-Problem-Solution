#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1,h1,m1,s1,d2,h2,m2,s2;
    cout<<"Dia "; cin>>d1;
    cin>>h1>>m1>>s1; cout<<endl;
    cout<<"Dia "; cin>>d2;
    cin>>h2>>m2>>s2;
    if(d1==d2)
    {
        if(h1==h2)
            {
                if(m1==m2 && h1==h2 && s1==s2)
                {
                    w=0;x=0;y=0;z=0;
                }
                if(m1<m2)
                {
                    if(s1<=s2)
                    {
                        w=0;x=0;y=m2-m1;z=s2-s1;
                    }
                }
            }
            else if(h1<h2)
            {
                if(m1==m2)
                {
                    if(s1==s2)
                    {
                        w=0;x=h2-h1;y=m2-m1;z=s2-s1;
                    }
                }
                if(m1<m2)
                {
                    if(s1<=s2)
                    {
                        w=0;x=0;y=m2-m1;z=s2-s1;
                    }
                    else{

                    }
                }
            }
    }
}

