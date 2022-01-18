//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;
string input; 
int arr[9];
int res[9];
int n ,m ;

void solve();
void bt(int,string);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cout << "Hello World" << endl;
    solve();
    
    return 0;
}

void solve(){
    input = "abc";
    // bt(0,"");
    do{
        for(auto it = input.begin(); it != input.end(); it++){
            cout << * it<< ' ';
        }
        cout << endl;
    }while(next_permutation(input.begin(),input.end())); 
}
void bt(int index, string letters){
    // 순열
    if(index == 2){
        cout << letters << endl;
    }
    // int num = input[index];
    for(char c: input){
        bt(index+1 , letters+c);
    }
}
