//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n , m; 
bool *visited;
int arr[9] = {0,};
void solve();
void dfs(int);
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cout << "Hello World" << endl;
    solve();
    
    return 0;
}

void solve(){
    cin >> n >> m ;    //n = number m = 개수
    visited = new bool[n]();
    dfs(0); // backtracking
}
void dfs(int x){
    if(x == m){
        for (size_t i = 0; i < m; i++) {
            cout<< arr[i] << ' ';
        }
        cout << '\n'; 
        return;
    }
    for (size_t i = 1; i <= n; i++)
    {
        if(!visited[i]){
            visited[i] = true;
            arr[x] = i;
            dfs(x + 1);
            visited[i] = false;
        }
    }
}