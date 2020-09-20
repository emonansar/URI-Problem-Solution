#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d=1,c=0,e=0;
    cin>>n;
    int M[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>0 && j>0 && i<n-1 && j<n-1)
            {
                e++;
                d=d++;
                M[i][j]=d;
                d=1;
                if
            }
            else
            {
               M[i][j]=d;
            }
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            c++;
            cout<<M[i][j];
            if(c==n)
            {
                c=0;
                break;
            }
            cout<<" ";
        }
        cout<<endl;
    }
}
