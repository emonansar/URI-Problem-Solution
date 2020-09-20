#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int n,la,lb,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        la=a.length();
        lb=b.length();
        if(la>lb)
        {
            for(int i=la-1,j=lb-1;j>=0;i--,j--)
            {
                if(a[i]==b[j])
                {
                   c++;
                }
            }
            if(c==lb)
            {
                cout<<"encaixa"<<endl;
                c=0;
            }
            else
            {
                cout<<"nao encaixa"<<endl;
                c=0;
            }
        }
        else if(la==lb)
        {
            if(a==b)
            {
                cout<<"encaixa"<<endl;
            }
            else
            {
               cout<<"nao encaixa"<<endl;
            }
        }
        else if(la<lb)
        {
            cout<<"nao encaixa"<<endl;
        }
    }
}
