#include<iostream>
using namespace std;
int main(){

    int check;
    pair<int,int> zig_zag = {1e9,-1e9};
    pair<int,int> zag_zig = {1e9,-1e9};
    int c = 0;
    while(1){
        int x , y;
        cin >> x;
        if(x == -998 || x == -999){
            check = x;
            break;
        }
        cin >> y;
        if(c%2==0){
            zig_zag.first = min(zig_zag.first,x);
            zig_zag.second = max(zig_zag.second,y);

            zag_zig.first = min(zag_zig.first,y);
            zag_zig.second = max(zag_zig.second,x);
        }
        else{
            zig_zag.first = min(zig_zag.first,y);
            zig_zag.second = max(zig_zag.second,x);

            zag_zig.first = min(zag_zig.first,x);
            zag_zig.second = max(zag_zig.second,y);
        }
        c++;
    }

    if(check == -998){
        cout << zig_zag.first << " " << zig_zag.second;
    }
    else{
        cout << zag_zig.first << " " << zag_zig.second;
    }

}