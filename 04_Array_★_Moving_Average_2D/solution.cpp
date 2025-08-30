#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int r,c,i,j;
    cin >> r >> c;
    float a[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin >> a[i][j];
        }
    }
    float moving_avg[r-2][c-2];
    for(i=1;i<r-1;i++){
        for(j=1;j<c-1;j++){
            moving_avg[i-1][j-1] = (a[i-1][j-1] + a[i-1][j] + a[i-1][j+1] + a[i][j-1] + a[i][j] + a[i][j+1] + a[i+1][j-1] + a[i+1][j] + a[i+1][j+1])/9;
            moving_avg[i-1][j-1] = round(moving_avg[i-1][j-1]*100)/100.0;
        }
    }
    for(i=0;i<r-2;i++){
        for(j=0;j<c-2;j++){
            cout << moving_avg[i][j] << " ";
        }
        cout << endl;
    }


}