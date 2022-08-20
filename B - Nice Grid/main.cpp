#include<bits/stdc++.h>

using namespace std;


int squarecolor(int a, int b, int r, int c, int color); 

int squarecolor(int a, int b, int r, int c, int color){
    if((r == a || r == b) || (c == a || c == b)){
        if(r==a){
            if(c >= a && c <= b){
                return color; 
            }
        }
        if(r==b){
            if(c >= a && c <= b){
                return color; 
            }
        }
        if(c==a){
            if(r >= a && r <= b){
                return color; 
            }
        }
        if(c==b){
            if(r >= a && r <= b){
                return color; 
            }
        }
    }
    return squarecolor(a+1, b-1, r, c, !color);
}

int main(){
    /*
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
	#endif
    */
   int a, b; 
   cin >> a >> b; 
   string str = squarecolor(1, 15, a, b, 1) ? "black" : "white"; 
   cout << str; 
   return 0; 
}