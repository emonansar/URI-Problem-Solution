#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,max1,max2;
cin>>a>>b>>c;
max1=(abs(a-b)+a+b)/2;
max2=(abs(c-max1)+c+max1)/2;
cout<<max2<<" eh o maior"<<endl;
return 0;
}
