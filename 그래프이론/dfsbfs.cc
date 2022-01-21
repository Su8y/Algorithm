#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// index 0은 사용하지 않음으로 배열을 하나 더 추가
bool visited[9]; 
vector<int> graph[9];

void dfs(int x)
{
    visited[x] = true;
    cout << x << " ";
    for(size_t i = 0; i < graph[x].size(); i++){//graph[x]와 연결된 노드의 개수만큼 탐색시작
        int y = graph[x][i];
        if(!visited[y]){ // 아직 방문하지 않았으면 dfs실행
            dfs(y);
        }
    }
}
void bfs(int start){
    queue<int> q;
    q.push(start);// 첫 노드를 큐에 삽입
    visited[start] = true; // 방문처리
    while(!q.empty()){
        int x = q.front();
        q.pop();
        cout << x << ' ';
        for(size_t i = 0; i < graph[x].size(); i++){
            int y = graph[x][i];
            if(!visited[y]){
                q.push(y); //노드를 넣고
                visited[y] = true;// 방문처리
            }
        }
    }
}
int main(void)
{
    /* 위 그래프와 동일하게 정의 */
    // 8 - 1 - 3 - 4
    // |   |   |
    // 7 - 2   5
    //     |
    //     6
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[1].push_back(8);

    graph[2].push_back(1);
    graph[2].push_back(7);

    graph[3].push_back(1);
    graph[3].push_back(4);
    graph[3].push_back(5);

    graph[4].push_back(3);
    graph[4].push_back(5);

    graph[5].push_back(3);
    graph[5].push_back(4);

    graph[6].push_back(7);

    graph[7].push_back(2);
    graph[7].push_back(6);
    graph[7].push_back(8);

    graph[8].push_back(1);
    graph[8].push_back(7);

    // dfs(1);
    bfs(1);
}