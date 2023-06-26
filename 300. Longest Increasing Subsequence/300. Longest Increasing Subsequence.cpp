class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int res=1, n;
        n = nums.size();
        vector<int> dy(n);
        dy[0] = 1;
        for(int i=1; i<n; i++){
            int max=0;
            for(int j=i; j>=0; j--){
                if(nums[i]>nums[j] && max<dy[j]){
                    max = dy[j];
                }
            }
            dy[i] = max + 1;
            if(res < dy[i]) res=dy[i];
        }
        return res;
    }
};

int lengthOfLIS(vector<int>& nums) {
    vector<int> res;
    for(int i=0; i<nums.size(); i++) {
        auto it = std::lower_bound(res.begin(), res.end(), nums[i]); //nums[i]보다 크거나 같은 첫 번째 요소의 위치를 이진 탐색을 통해 찾음
        if(it==res.end()) res.push_back(nums[i]); //nums[i]보다 큰 요소가 res에 없다면 nums[i]를 res의 끝에 추가
        else *it = nums[i]; // it이 res의 끝을 가리키고 있지 않다면 it이 가리키는 위치에 nums[i]를 저장
    }
    return res.size(); //nums에서 구한 LIS의 길이
}

//lower_bound
//용도 : 찾으려는 값보다 같거나 큰 숫자가 배열 몇 번째에서 처음 등장하는지 찾기 위함
//조건 : 오름차순 정렬
