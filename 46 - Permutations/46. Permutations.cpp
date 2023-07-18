class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;//결과값 출력을 위한 2차원 벡터
        DFS(res, nums, 0);//DFS 실행 
        return res;//결과값 리턴
    }
    void DFS(vector<vector<int>>&res, vector<int>&nums, int pos){
        if(pos == nums.size() -1 ){ //현재 위치 pos가 배열의 길이와 같을 때 
            res.push_back(nums);//결과벡터에 nums 벡터를 push_back한다.
            return;
        }
        for(int i = pos; i<nums.size(); i++){
            swap(nums[pos], nums[i]);//새로운 벡터를 swap함수를 사용해 만들어내고 
            DFS(res, nums, pos+1);
            swap(nums[pos], nums[i]);//원상태의 벡터로 바꿈 
        }
    }
};

class Solution {
public:
    vector<vector<int>> ans;
    
    void permutations(vector<int>& nums, int ind)
    {
        int n=nums.size();
        if(ind==n)
            ans.push_back(nums); 
        
        for(int i=ind; i<n; i++)
        {
            swap(nums[ind], nums[i]);
            permutations(nums,ind+1);
            swap(nums[ind], nums[i]);
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        permutations(nums, 0);
        
        return ans;
    }
};
