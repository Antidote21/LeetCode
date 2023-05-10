class Solution {
public:
// 주어진 간선들을 이용하여 그래프에서 중앙 노드를 찾는 함수
    int findCenter(vector<vector<int>>& edges) { //노드들 간의 연결을 나타내는 2차원 벡터
        int n = edges.size();// 주어진 간선들의 개수
        vector<vector<int>> adj(n+2); //각 노드의 인접한 노드들을 저장하기 위한 인접 리스트
        for(int i=0;i<edges.size();i++){
            //무방향 그래프
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        for(int i=1;i<=n+1;i++)
            if(adj[i].size()==n)return i; //adj에 저장된 각 노드의 인접한 노드의 개수가 n과 같은 노드
        return 0;
    }
};
