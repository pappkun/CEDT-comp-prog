#include<bits/stdc++.h>
using namespace std;
int main(){

    int d,m,y;
    bool l;
    cin>>d>>m>>y;
    y = y-543;
    if(m==2){
        if(y%400==0){
            l = true;
        }
        else if(y%4==0 && y%100!=0){
            l = true;
        }
        else{
            l = false;
        }
    }

    int mc[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(l){
        mc[1] = 29; 
    }
    
    d = d+15;
    if(d>mc[m-1]){
        d = d-mc[m-1];
        m++;
        if(m>12){
            m = 1;
            y++;
        }
    }
    y = y+543;
    cout<<d<<"/"<<m<<"/"<<y;


}