#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct rectangle{
    int x1 , y1;
    int x2 , y2;
};

int overlap_area(const rectangle& r1 , const rectangle& r2){
    int overlap_X1 = max(r1.x1 , r2.x1);
    int overlap_Y1 = max(r1.y1 , r2.y1);
    int overlap_X2 = min(r1.x2 , r2.x2);
    int overlap_Y2 = min(r1.y2 , r2.y2);

    int w = overlap_X2 - overlap_X1;
    int h = overlap_Y2 - overlap_Y1;

    if(w <= 0 || h <= 0) return 0;

    int area = h*w;
    return area;
}

int main(){

    int n;
    cin >> n;

    int i,j;
    vector<rectangle> vec(n);
    for(i=0;i<n;i++){
        cin >> vec[i].x1 >> vec[i].y1;
        cin >> vec[i].x2 >> vec[i].y2;
    }

    int maxarea = 0;
    vector<pair<int,int>> p;
    
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            int x = overlap_area(vec[i] ,vec[j]);
            if(x > maxarea){
                maxarea = x;
                p.clear();
                p.push_back({i,j});
            }
            else if(x > 0 && x == maxarea){
                p.push_back({i,j});
            }
        }
    }

    if(maxarea == 0) {
        cout << "No overlaps";
        return 0;
    }

    cout << "Max overlapping area = " << maxarea << endl;
    for(i=0;i<p.size();i++){
        cout << "rectangles " << p[i].first << " and " << p[i].second << endl;
    }
    
    

}