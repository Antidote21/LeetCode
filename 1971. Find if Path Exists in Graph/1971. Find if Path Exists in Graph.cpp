//Disjoint Set Union 자료구조를 사용하여 시작점과 끝점이 서로 연결되어 있는지 판별하는 문제를 해결하는 코드
/class DSU {
    vector<int> parent, rank;
public:
    DSU(int n){
        parent.resize(n);
        rank.resize(n);
        iota(parent.begin(), parent.end(), 0);
    }
    // 입력된 원소의 루트 노드를 찾아서 반환하는 함수
    int find(int x){
        if(x !=parent[x])
            parent[x] = find(parent[x]);
        return parent[x];
    }
    //Union() 함수는 두 개의 원소를 입력받아서, 두 원소가 속한 집합을 합치는 함수
    bool Union(int x, int y){
        int xp = find(x);
        int yp = find(y);
        
        if(xp == yp)
            return true;
        else {
            if(rank[xp] > rank[yp])
                parent[yp] = xp;
            else if (rank[xp] < rank[yp])
                parent[xp] = yp;
            else {
                parent[yp] = xp;
                rank[xp]++;
            }
            return false;
        }
    }
    
};

class Solution {
public:
  //모든 간선을 DSU에 추가하고, start와 end 원소가 같은 집합에 속해있는지 여부를 반환
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        DSU uf(n);
        for(int i=0; i<edges.size(); i++) {
            uf.Union(edges[i][0], edges[i][1]);
        }
        return uf.Union(start, end);
    }
};

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        unordered_map<int,vector<int>> graph;
        // ex)graph[1] = {2};
        // graph[2] = {1, 3, 4};
        // graph[3] = {2};
        // graph[4] = {2}; 
        for(auto e : edges) { //양방향 그래프 구성 
            graph[e[0]].push_back(e[1]); //e[0] 출발 정점 e[1] 도착 정점  
            graph[e[1]].push_back(e[0]);
        }
        vector<bool> visited(n,0);//방문 정점 표시를 위한 벡터 n은 정점의 수         
        queue<int> q; 
        q.push(start); 
        visited[start] = 1; //시작 정점 방문 
        while(!q.empty()) {
            int curr = q.front(); //큐에서 정점을 하나 꺼냄 
            q.pop();
            if(curr == end) //curr이 목적지에 도착 
                return 1;
            for(auto &node : graph[curr]){
                if(!visited[node]){//방문하지 않은 정점 
                    visited[node] = 1; //방문 표시 
                    q.push(node);//q에 node를 넣음 
                }
            }
        }
        
        return false;
    }
};
