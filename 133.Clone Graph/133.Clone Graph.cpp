/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (!node) {
            return NULL;
        }
        Node* copy = new Node(node -> val, {}); // 새로운 노드를 생성하여 복사
        copies[node] = copy; // 복사한 노드를 copies 맵에 저장
        queue<Node*> q;
        q.push(node);
        while (!q.empty()) {
            Node* cur = q.front(); // 현재 노드를 가져옴
            q.pop();
            for (Node* neighbor : cur -> neighbors) {
                if (copies.find(neighbor) == copies.end()) { // 이웃 노드가 아직 복사되지 않은 경우
                    copies[neighbor] = new Node(neighbor -> val, {}); // 이웃 노드를 복사합니다.
                    q.push(neighbor);
                }
                copies[cur] -> neighbors.push_back(copies[neighbor]); // 현재 노드의 이웃에 복사한 이웃 노드를 추가합니다.
            }
        }
        return copy; // 복사된 그래프의 시작 노드를 반환합니다.
    }
private:
    unordered_map<Node*, Node*> copies; // 복사된 노드를 저장하기 위한 맵
};
