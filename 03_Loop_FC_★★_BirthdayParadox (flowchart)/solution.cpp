#include<iostream>
using namespace std;
int main(){

    float p;
    cin >> p;
    float k=1 , t=1;
    while(1){
        t = (t*(365-(k-1)))/365;
        if(1-t < p){
            k++;
            continue;
        }
        else{
            break;
        }
    }
    cout << k;

}