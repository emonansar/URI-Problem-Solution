#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int r,g,b,mean1=0,max1=0,min1=0,eye1=0,n,i=0;
    cin>>n;
    while(i<n){
    i++;
    cin>>a;
    cin>>r>>g>>b;
    if(a=="mean")
    {
        mean1=(r+g+b)/3;
        cout<<"Caso #"<<i<<": "<<mean1<<endl;
    }
    else if(a=="max")
    {
        if(r>=g)
        {
            if(r>=b)
            {
                cout<<"Caso #"<<i<<": "<<r<<endl;
            }
            else
            {
                cout<<"Caso #"<<i<<": "<<b<<endl;
            }
        }
        else
        {
            if(g>=b)
            {
                cout<<"Caso #"<<i<<": "<<g<<endl;
            }
            else
            {
                cout<<"Caso #"<<i<<": "<<b<<endl;
            }
        }
    }
    else if(a=="min")
    {
        if(r<=g)
        {
            if(r<=b)
            {
                cout<<"Caso #"<<i<<": "<<r<<endl;
            }
            else
            {
                cout<<"Caso #"<<i<<": "<<b<<endl;
            }
        }
        else
        {
            if(g<=b)
            {
                cout<<"Caso #"<<i<<": "<<g<<endl;
            }
            else
            {
                cout<<"Caso #"<<i<<": "<<b<<endl;
            }
        }
    }
    else if(a=="eye")
    {
        eye1=(r*.30+g*.59+b*.11);
        cout<<"Caso #"<<i<<": "<<eye1<<endl;
    }



    }
}
