//섬의 개수 구하기
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(); //행 개수 
        int n = m? grid[0].size() : 0; //열 개수 
        int cnt=0; //섬의 개수 
        int offsets[]={0,1,0,-1,0}; //이동에 사용
        for(int i=0; i< m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]=='1'){//육지인 경우 
                    cnt++;//섬의 개수 증가
                    grid[i][j] = '0';//방문표시 
                    queue<pair<int, int>> Q;//현재 위치를 Q에 저장 
                    Q.push({i, j});//처음 시작 좌표를 큐에 추가하여 BFS 탐색 시작 
                    while(!Q.empty()) {
                        pair<int, int> p = Q.front();//좌표를 가져온다
                        Q.pop();
                        for(int k=0; k<4; k++){//상하좌우로 이동
                            int r = p.first + offsets[k];
                            int c = p.second + offsets[k+1];
                            //그리드 내부에 있는지와 육지인지 확인 
                            if(r >= 0 && r < m && c >= 0 && c < n && grid[r][c] == '1'){
                                grid[r][c]= '0';//방문 표시-> 중복 방지  
                                Q.push({r, c});//다음으로 방문할 좌표 저장 BFS 알고리즘
                            }
                        }
                    }
                }
            }
        }
        return cnt;
    }
};
