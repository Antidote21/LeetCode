class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counter;
        for (int num : nums) { //nums는 벡터이며, for 루프는 해당 벡터의 각 요소를 하나씩 반복하면서 변수 num에 할당
            if (++counter[num] > nums.size() / 2) { //과반수를 넘으면 해당 요소를 반환
                return num;
            }
        }
        return 0;
    }
};
