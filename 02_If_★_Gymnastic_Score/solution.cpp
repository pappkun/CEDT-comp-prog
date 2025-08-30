#include<bits/stdc++.h>
using namespace std;
int main(){

    double score[4];
    int i,j;
    for(i=0;i<4;i++){
        cin >> score[i];
    }
    double x;
    for(i=0;i<3;i++){
        for(j=i+1;j<4;j++){
            if(score[j] > score[i]){
                x = score[i];
                score[i] = score[j];
                score[j] = x;
            }
        }
    }
    double a = (score[1]+score[2])/2;
    a = round(a*100.0)/100.0;
    cout << a;

}