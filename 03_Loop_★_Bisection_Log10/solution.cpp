#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){

    double a;
    cin >> a;

    //bisection 
    double L=0.0 , R=a;
    double x = L + (R-L)/2;
    while(1){
        if( abs(a-(pow(10,x))) > pow(10,-10) * max(a,pow(10,x)) ){
            if(pow(10,x) > a){
                R = x;
            }
            else{
                L = x;
            }
        }
        else{
            break;
        }
        x = L + (R-L)/2;
    }
    cout << x;

    

}