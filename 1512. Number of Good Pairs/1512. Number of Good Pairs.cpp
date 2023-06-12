class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> map;
        int count=0;
        for(int i=0; i<nums.size(); i++){
            int num = nums[i];
            if(map.count(num) > 0){ // num이 이미 존재하는지 확인하기 위해 count 함수를 사용
                count += map[num];
            }
            map[num]++;
        }
        return count;
    }
};
