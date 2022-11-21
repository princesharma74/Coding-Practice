#include<bits/stdc++.h>
using namespace std;
#define ll long long

enum color{gray, brown, green, cyan, blue, yellow, orange, red};

int main(){
    int arr[8] = {0}; 
    int N; 
    cin >> N;
    int procoder = 0, max, min; 
    for(int i = 0; i < N; i++){
        int temp; 
        cin >> temp; 
        if(temp >= 1 && temp < (gray + 1)*400) arr[gray]++;
        else if(temp >= brown*400 && temp < (brown + 1)*400) arr[brown]++;
        else if(temp >= green*400 && temp < (green + 1)*400) arr[green]++;
        else if(temp >= cyan*400 && temp < (cyan + 1)*400) arr[cyan]++;
        else if(temp >= blue*400 && temp < (blue + 1)*400) arr[blue]++;
        else if(temp >= yellow*400 && temp < (yellow + 1)*400) arr[yellow]++;
        else if(temp >= orange*400 && temp < (orange + 1)*400) arr[orange]++;
        else if(temp >= red*400 && temp < (red + 1)*400) arr[red]++;
        else procoder++;
    }
    int dff = 0; 
    for(int i = 0; i < 8; i++){
        if(arr[i]!=0) dff++; 
    }
    min = dff;
    max = dff + procoder;
    cout << min << " " << max;  
    return 0;
}