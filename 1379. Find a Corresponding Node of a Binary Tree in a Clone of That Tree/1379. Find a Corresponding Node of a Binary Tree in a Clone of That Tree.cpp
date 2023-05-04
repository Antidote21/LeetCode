class Solution {
public:
    TreeNode* ans; //반환될 노드를 저장하는 변수
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) //original 트리에서 target 노드를 찾아서 cloned 트리에서 그 노드와 같은 위치에 있는 노드를 반환
    {
        if (cloned == NULL)//cloned 트리가 NULL인 경우 반환
            return cloned;
        if (cloned->val == target->val) //cloned 노드의 값이 target 노드의 값과 같은 경우, ans 변수에 cloned 노드를 저장
            ans = cloned;
        getTargetCopy(original, cloned->left, target);
        getTargetCopy(original, cloned->right, target);
        return ans;
    }
};
