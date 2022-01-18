//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

int getParent(int parent[] , int x){
    if(parent[x] == x) return x;
    return parent[x] = getParent(parent,parent[x]);
}
void unioneParent(int parent[],int a, int b){
    a = getParent(parent,a);
    b = getParent(parent,b);
    if(a < b) parent[b] = a;
    else parent[a] = b;
}
int findParent(int parent[] , int a, int b){
    a = getParent(parent ,a );
    b  = getParent(parent,b);
    if ( a == b) return  1;
    else return 0;
}

using namespace std; int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int parent[11];
    for (int i = 0; i < 10; i++)
    {
        parent[i+1] = i+1;
    }
    unioneParent(parent,1,2);
    unioneParent(parent,2,3);
    unioneParent(parent,3,4);
    printf("1 == 3 ? %d", findParent(parent,1,5));

    
    //cout << "Hello World" << endl;
    return 0;
}