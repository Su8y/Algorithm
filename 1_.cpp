//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    int n, cnt = 0;
    cin >> n;   
    if(n % 3){
        cnt += n / 3; 
        n = n % 3;
    } 
    if(n % 2){
        cnt += n /2;
        n = n % 2;
    } 
    if( n == 2){
        cnt += 1;
        n = n -1;
    }
    cout << n << endl;
    cout << cnt << endl;
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cout << "Hello World" << endl;
    solve();
    return 0;
}
