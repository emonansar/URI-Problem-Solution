#include <bits/stdc++.h>
using namespace std;
int main()
{
    float N1,N2,N3,N4,N5,avg,avg1;
    cin>>N1>>N2>>N3>>N4;
    avg=(N1*2+N2*3+N3*4+N4*1)/10;
    cout<<"Media: "<<fixed<<setprecision(1)<<avg<<endl;
    if(avg>=7)
    {
        cout <<"Aluno aprovado."<<endl;
    }
    else if(avg<5)
    {
        cout<<"Aluno reprovado."<<endl;
    }
    else if(avg>=5 && avg<=6.9)
    {
        cout<<"Aluno em exame."<<endl;
        cin>>N5;
        cout<<"Nota do exame: "<<N5<<endl;
        avg1=(avg+N5)/2;
        if(avg1>=5)
        {
           cout <<"Aluno aprovado."<<endl;
           cout<<"Media final: "<<fixed<<setprecision(1)<<avg1<<endl;
        }
        else if(avg1<=4.9)
        {
           cout<<"Aluno reprovado."<<endl;
           cout<<"Media final: "<<fixed<<setprecision(1)<<avg1<<endl;
        }

    }
    return 0;
}
