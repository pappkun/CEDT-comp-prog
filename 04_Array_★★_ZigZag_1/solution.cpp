#include<iostream>
using namespace std;

int main(){

    int i;
    int n;
    cin >> n;
    
    pair<int,int> zig_zag = {1e9,-1e9};
    pair<int,int> zag_zig = {1e9,-1e9};
    for(i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        if(i%2 == 0){
            zig_zag.first = min(zig_zag.first, x);
            zig_zag.second = max(zig_zag.second, y);

            zag_zig.first = min(zag_zig.first, y);
            zag_zig.second = max(zag_zig.second, x);
        }
        else{
            zig_zag.first = min(zig_zag.first, y);
            zig_zag.second = max(zig_zag.second, x);

            zag_zig.first = min(zag_zig.first, x);
            zag_zig.second = max(zag_zig.second, y);
        }
    }

    string str;
    cin >> str;
    if(str == "Zig-Zag"){
        cout << zig_zag.first << " " << zig_zag.second;
    }
    else{
        cout << zag_zig.first << " " << zag_zig.second;
    }

}