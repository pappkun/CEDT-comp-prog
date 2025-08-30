#include<bits/stdc++.h>
using namespace std;
int main(){

    double a,b,c;
    cin>>a>>b>>c;
    double x1,x2;
    x1 = (-b-sqrt((b*b)-(4*a*c)))/(2*a);
    x2 = (-b+sqrt((b*b)-(4*a*c)))/(2*a);
    x1 = round(x1*1e3)/1e3;
    x2 = round(x2*1e3)/1e3;
    cout<<x1<<" "<<x2;
}