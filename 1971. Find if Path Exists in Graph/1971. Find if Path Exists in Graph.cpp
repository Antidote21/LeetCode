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
