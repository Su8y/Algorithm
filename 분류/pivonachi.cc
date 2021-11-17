#include <iostream>
#include <vector>


using namespace std;
int arrFib[10001] = {0,1};
int cnt = 1;
int fib_naive(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fib_naive(n-1) + fib_naive(n-2);
        
    }
}
int topdown_fib(int n){
    // vector<int> arrFib;
    // arrFib.push_back(0);
    // arrFib.push_back(1);
    if(n <= 1) return n;

    //0으로 초기화했는데 0이 아니면 값이 들어가있다는 뜻
    if(arrFib[n] != 0) return arrFib[n];

    arrFib[n] = topdown_fib(n-1) + topdown_fib(n-2);
    return arrFib[n];
    //탑다운 방식은 인덱스를 너무많이 넣으면 메모리사용량이 큰 단점이있다. 
    //콜스택이 오버플로우 콜스택에는 리밋이있다 .
    //스택에 리밋이 있기때문에 좋은방법의 솔루션은 아니다
}
int bottomup_fib(int n){
    arrFib[0] = 0;
    arrFib[1] = 1;
    for(int i=2;i<=n;i++){
        arrFib[i] = arrFib[i-1] + arrFib[i-2];
    }
    return arrFib[n];
}
int main(){

    printf("%d\n",fib_naive(35));
    printf("%d\n",topdown_fib(10));
    printf("%d\n",bottomup_fib(1));
    return 0;
}