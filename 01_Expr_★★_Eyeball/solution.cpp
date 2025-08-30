#include<bits/stdc++.h>
using namespace std;
int main(){

    double x,y;
    double r1,r2;
    double mx,my;
    cin>>x>>y>>r1>>r2>>mx>>my;

    if(x==mx && y>my){
        cout<<x<<" "<<y-(r1-r2);
        return 0;
    }
    if(x==mx && my>y){
        cout<<x<<" "<<y+(r1-r2);
        return 0;
    }
    if(y==my && x>mx){
        cout<<x-(r1-r2)<<" "<<y;
        return 0;
    }
    if(y==my && mx>x){
        cout<<x+(r1-r2)<<" "<<y;
        return 0;
    }

    double A,B,C;
    double X = mx , Y = y; 
    A = sqrt(pow(x-mx,2)+pow(y-my,2));
    B = sqrt(pow(x-X,2)+pow(y-Y,2));
    C = sqrt(pow(mx-X,2)+pow(my-Y,2));

    double a,b,c;
    a = r1-r2;
    b = (a/A)*B;
    c = (b/B)*C;
    b = round(b);
    c = round(c);

    double xp,yp;
    if(x>mx){
        xp = x-b;
    }
    else{
        xp = x+b;
    }
    if(y>my){
        yp = y-c;
    }
    else{
        yp = y+c;
    }
    cout<<xp<<" "<<yp;

}