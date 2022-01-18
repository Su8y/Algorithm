//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, cnt = 0;

vector< vector<int> > map;
vector< pair<int,int> > queen;

int check(const int& x ,const int& y,int index){
    if(index == 0) return 1;
    for(int i =  0; i < index; i ++){
        if(queen[i].first == x) return 0;
        if(queen[i].second == y) return 0;
        if(abs(queen[i].first - x) == abs(queen[i].second - y)) return 0;
    }
    return 1;
}
void solve(int x, int y, int depth){
    if(depth == n){
        cnt = cnt + 1;
        return;
    }

    for(int i = x; i <n;i++){
        if(x > n) y =0;
        for(int j = 0 ; j < n;j++){
            if(map[i][j] == 0 && check(i,j,depth) == 1){
                map[i][j] = 1;
                queen[depth].first = i;
                // cout << queen[depth].first << endl;
                queen[depth].second = j;
                solve(i+1,0,depth + 1);
                map[i][j] = 0;
            }
        }
    }
}

int main(){
    clock_t start, finish;
    start = clock();
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n; 
    map.resize(n,vector<int>(n));
    queen.resize(n);
    fill(map.begin(),map.end(),vector<int>(n,0));
    solve(0,0,0);
    cout << cnt << endl;;
    finish = clock();
    cout << (finish - start) / CLOCKS_PER_SEC;
    return 0;
}
