//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool cmpString(string one,string two){
    if(one.compare(two) == 0){
        return 1;
    }
    return 0;

}
string one ,two;
void solve(){
    // one = cin.get();
    getline(cin,one);
    getline(cin,two);
    // two = cin.get();
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cout << "Hello World" << endl;
    solve();
    return 0;
}
