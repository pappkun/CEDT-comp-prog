#include<bits/stdc++.h>
using namespace std;
bool check(int y){
    if(y%400==0){
        return true;
    }
    else if(y%4==0 && y%100!=0){
        return true;
    }
    else{
        return false;
    }
}
int main(){

    int i;
    int by,bm,bd;
    int y,m,d;
    cin>>bd>>bm>>by>>d>>m>>y;
    double red,black,blue;
    double physical,emotianal,intellectual;
    int mc[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int yc =by-543;
    bool l = check(yc);
    if(l){
        mc[1]=29;
    }

    //red
    red =(mc[bm-1]-bd+1);
    double sum=0;
    for(i=bm;i<12;i++){
        sum = sum+mc[i];
    }
    red = red + sum;

    //black
    black = ((y-by-1)*365);

    //blue
    mc[1]=28;
    yc =y-543;
    l = check(yc);
    if(l){
        mc[1]=29;
    }
    sum = 0;
    for(i=0;i<m-1;i++){
        sum = sum+mc[i];
    }
    blue = sum + d-1;


    double t = red+blue+black;

    physical = sin((2*M_PI*t)/23);
    emotianal = sin((2*M_PI*t)/28);
    intellectual = sin((2*M_PI*t)/33);

    physical = round(physical*100.0)/100.0;
    emotianal = round(emotianal*100.0)/100.0;
    intellectual = round(intellectual*100.0)/100.0;

    cout<<t<<" "<<physical<<" "<<emotianal<<" "<<intellectual;

}