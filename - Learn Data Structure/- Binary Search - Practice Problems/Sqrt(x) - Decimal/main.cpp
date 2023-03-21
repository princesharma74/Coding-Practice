#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

#define eps 1e-7

int main(){
    //Problem Link: https://youtu.be/5snE6xsyheE
    /* Approach: */
    double x; 
    cin >> x;

    double L = 0, R = x, mid;
    while(R - L > eps){
        mid = (R + L)/2;
        if(mid * mid < x) L = mid; 
        else R = mid; 
    }
    cout << setprecision(6) << mid << endl; 
    cout << setprecision(6) << sqrt(3) << endl; 
    return 0;
}