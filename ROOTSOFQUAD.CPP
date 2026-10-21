#include<bits/stdc++.h>
using namespace std;
int main(){
float a,b,c,x,y;
cin>>a>>b>>c;
x=(-b+sqrt(b*b-4*a*c))/2*a;
y=(-b-sqrt(b*b-4*a*c))/2*a;
cout<<x<<endl;
cout<<y<<endl;
return 0;

}