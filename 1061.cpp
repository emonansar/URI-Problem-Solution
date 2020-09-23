#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int d1,d2,h1,h2,m1,m2,s1,s2,d,h,m,s;
    cin>>a>>d1;
    cin>>h1>>b>>m1>>b>>s1;
    cin>>a>>d2;
    cin>>h2>>b>>m2>>b>>s2;
    if(d2>=d1)
    {
        if(s2>=s1)
        {
            s=s2-s1;
            if(m2>=m1)
            {
                m=m2-m1;
                if(h2>=h1)
                {
                    h=h2-h1;
                    d=d2-d1;
                }
                else
                {
                    h2=h2+24;
                    d2--;
                    h=h2-h1;
                    d=d2-d1;
                }
            }
            else
            {
                m2=m2+60;
                h2--;
                m=m2-m1;
                if(h2>=h1)
                {
                    h=h2-h1;
                    d=d2-d1;
                }
                else
                {
                    h2=h2+24;
                    d2--;
                    h=h2-h1;
                    d=d2-d1;
                }
            }
        }
        else if(s2<s1)
        {
            s2=s2+60;
            m2--;
            s=s2-s1;
            if(m2>=m1)
            {
                m=m2-m1;
                if(h2>=h1)
                {
                    h=h2-h1;
                    d=d2-d1;
                }
                else
                {
                    h2=h2+24;
                    d2--;
                    h=h2-h1;
                    d=d2-d1;
                }
            }
            else
            {
                m2=m2+60;
                h2--;
                m=m2-m1;
                if(h2>=h1)
                {
                    h=h2-h1;
                    d=d2-d1;
                }
                else
                {
                    h2=h2+24;
                    d2--;
                    h=h2-h1;
                    d=d2-d1;
                }
            }
        }
    }
    cout<<d<<" dia(s)"<<endl;
    cout<<h<<" hora(s)"<<endl;
    cout<<m<<" minuto(s)"<<endl;
    cout<<s<<" segundo(s)"<<endl;
}
