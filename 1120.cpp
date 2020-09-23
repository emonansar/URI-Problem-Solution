#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,flag=-1,m,t=0,p=0;
    string b,c,d;
    char a;
    while(true){
        cin>>a;
        cin>>b;
        if(a== '0' && b[0]=='0')
        {
            break;
        }
        else{
        //l=b.length();
        //m=0;
        for(int i=0;i<b.length();i++)
        {
            if(a!=b[i])
            {
            //c[m]=b[i];
            c+=b[i];
            //m++;
            }
        }
        //cout<<m<<endl;
      for(int j=0;j<c.length();j++)
        {
           if(c[j]>'0')
            {
                flag=1;
                t=j;
                break;
            }
            else if(c[j]== '0')
            {
                flag=0;
            }
        }
        //p=0;
        for (int k=t;k<c.length();k++)
        {
            //d[p]=c[k];
            d+=c[k];
            //p++;
        }
        if(flag==0 || flag==-1)
        {
        cout<< 0 <<endl;
        }
        else if(flag==1)
        {
         cout<< d <<endl;
        }
         d="\0";
         c="\0";
         flag=-1;
         t=0;
         p=0;
         m=0;
    }
    }
    return 0;
}
