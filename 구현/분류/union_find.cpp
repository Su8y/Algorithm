#include <iostream>

int getParent(int parent[],int x){
    //재귀함수의 종료부분
    if(parent[x] == x) return x;
    //실제 부모를 찾는 재귀함수
    return parent[x] = getParent(parent,parent[x]);
}
void unionParent(int parent[],int a,int b){
    a = getParent(parent,a);
    b = getParent(parent,b);
    if(a<b)parent[b]=a;
    else parent[a]=b;
}
int findParent(int parent[],int a,int b){
    a = getParent(parent,a);
    b = getParent(parent,b);
    if(a==b) return 1;
    return 0;
}
int main(){
    int parent[11];
    for(int i =0;i<11;i++){
        parent[i] = i;
    }
    unionParent(parent,1,2);
    unionParent(parent,2,3);
    unionParent(parent,3,4);
    unionParent(parent,5,6);
    unionParent(parent,6,7);
    unionParent(parent,7,8);
    printf("15 %d\n",findParent(parent,1,5));
    unionParent(parent,1,5);
    printf("15 %d\n",findParent(parent,1,5));
    return 0;
}