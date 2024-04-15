class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        map<int,int> cusMap;
        for(int i = 0 ; i < nums.size() ; i++){
            int remain = target - nums[i];

            if(cusMap.find(remain) != cusMap.end()){
                ans[0] = cusMap[remain];
                ans[1] = i;
                break;
            }
                cusMap[nums[i]] = i;
        }
        return ans;
    }
};