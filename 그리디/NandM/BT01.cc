//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;
string input; 

void solve();
void dfs(int,string);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cout << "Hello World" << endl;
    solve();
    
    return 0;
}

void solve(){
    cin >> input;
    bt(0,"");
    
}
void bt(int index, string letters){
    //조합
    if(index == 4){
        if(letters.length() == 3) cout << letters << endl;
        letters.clear();
        return;
    }
    char c = input[index];
    dfs(index+1, letters + c);
    dfs(index+1, letters);
}
// void defBt(){
// }