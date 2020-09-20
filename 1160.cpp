#include <bits/stdc++.h>
using namespace std;
int main()
{
    int pa,pb,n,c=0;
    double g1,g2;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>pa>>pb>>g1>>g2;
        while(pa<=pb)
        {
            pa=pa+(pa*g1)/100;
            pb=pb+(pb*g2)/100;
            c++;
            if(c>100)
            {
                cout<<"Mais de 1 seculo."<<endl;
                break;
            }
        }
        if(c<=100)
        cout<<c<<" anos."<<endl;
        c=0;
    }
}
