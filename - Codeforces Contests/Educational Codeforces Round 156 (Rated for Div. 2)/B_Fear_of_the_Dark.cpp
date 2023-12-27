#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;
const unsigned int N = 100005;
double eps = 1e-6; 

bool touch(double &x1, double &y1, double &x2, double &y2, double &r){
    double dist = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    if(dist < 2*r) return true; // The circles overlap

    double mx = (x1 + x2)/2, my = (y1 + y2)/2;
    if(( (mx - x1)*(mx - x1) + (my - y1)*(my - y1) ) == r*r && ( (mx - x2)*(mx - x2) + (my - y2)*(my - y2) ) == r*r) return true;
    return false; 
}

bool inside(double x1, double y1, double &x, double &y, double &r){
    if(( (x1 - x)*(x1 - x) + (y1 - y)*(y1 - y) ) <= r*r) return true; 
    return false; 
}

bool check(double &px, double &py, double &x1, double &y1, double &x2, double &y2, double &r){
    if(touch(x1, y1, x2, y2, r)){
        if(( inside(px, py, x1, y1, r) || inside(px, py, x2, y2, r) ) && ( inside(0, 0, x1, y1, r) || inside(0, 0, x2, y2, r) )) return true; 
    }
    else if(( inside(px, py, x1, y1, r)) && ( inside(0, 0, x1, y1, r))) return true;
    else if(( inside(px, py, x2, y2, r)) && ( inside(0, 0, x2, y2, r))) return true;
    return false; 
}

void solve(){
    double px, py; 
    cin >> px >> py; 

    double x1, y1; 
    cin >> x1 >> y1; 
    
    double x2, y2; 
    cin >> x2 >> y2; 

    double l = 0, r = 1e4;
    while(r-l > eps){
        double m = (r+l)/2;
        if(check(px, py, x1, y1, x2, y2, m)) r = m;
        else l = m; 
    }
    cout << fixed << setprecision(10) << l << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve(); 
    }
    return 0;
}