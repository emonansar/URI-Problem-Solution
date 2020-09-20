#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0,i,a,b,r=0;
    while(cin>>a>>b){
    for(int i=1;i<=a;i++)
    {
        if(i==4 || i==6 || i==9 || i==11)
        {
            sum=30+sum;
            if(i==a)
            {
                b=30-b;
                sum=sum-b;
            }
        }
        else if(i==2)
        {
            sum=sum+29;
            if(i==a)
            {
                b=29-b;
                sum=sum-b;
            }
        }
        else
        {
            sum=sum+31;
            if(i==a)
            {
                b=31-b;
                sum=sum-b;
            }
        }
    }
    //cout<<sum<<endl;
    if(sum==360)
    {
        cout<<"E natal!"<<endl;
    }
    else if(sum<336)
    {
        r=360-sum;
        //cout<<r<<endl;
        cout<<"Faltam "<<r<<" dias para o natal!"<<endl;
    }
    else if(sum>360)
    {
        cout<<"Ja passou!"<<endl;
    }
    else
    {
        cout<<"E vespera de natal!"<<endl;
    }
    sum=0;
    r=0;
    }
}
