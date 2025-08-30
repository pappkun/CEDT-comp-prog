#include<bits/stdc++.h>
using namespace std;

int mc[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

void check_leafyear(int y){
    if(y%400==0 || (y%4==0 && y%100!=0)){
        mc[1]=29;
    }
}

int main(){

    int d,m,y;
    cin >> d >> m >> y;
    int sum = 0;
    int i;

    check_leafyear(y-543);
    for(i=m-2 ; i>=0 ; i--){
        sum = sum+mc[i];
    }
    sum = sum+d;
    cout<<sum;



}