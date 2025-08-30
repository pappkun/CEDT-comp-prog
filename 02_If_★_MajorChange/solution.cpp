#include<bits/stdc++.h>
using namespace std;
int main(){

    string student[2];
    float gpax[2];
    char comp_prog[2] , cal1[2] , cal2[2];
    int i;
    for(i=0;i<2;i++){
        cin >> student[i] >> gpax[i] >> comp_prog[i] >> cal1[i] >> cal2[i];
    }
    int a[2] = {0,0};
    for(i=0;i<2;i++){
        if(comp_prog[i]=='A' && (cal1[i]!='D' && cal1[i]!='F') && (cal2[i]!='D' && cal2[i]!='F')){
            a[i] = 1;
        }
    }
    if(a[0] == a[1] && a[0] == 1){
        if(gpax[0] == gpax[1]){
            if(cal1[0] == cal1[1]){
                if(cal2[0] == cal2[1]){
                    cout << "Both";
                }
                else if(cal2[0] < cal2[1]){
                    cout << student[0];
                }
                else{
                    cout << student[1];
                }
            }
            else if(cal1[0] < cal1[1]){
                cout << student[0];
            }
            else{
                cout << student[1];
            }
        }
        else if(gpax[0] > gpax[1]){
            cout << student[0];
        }
        else{
            cout << student[1];
        }
    }
    else if(a[0]==1){
        cout << student[0];
    }
    else if(a[1]==1){
        cout << student[1];
    }
    else{
        cout << "None";
    }

}