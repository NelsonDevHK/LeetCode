class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>ourMap;
        for(int i = 0 ; i < nums.size(); i++){
            if(i == 0 || ourMap[nums[i]] == NULL){
            ourMap[nums[i]] = 1;
            continue;
            }
            if(ourMap[nums[i]] == 1)
                return true;
        }
        return false;
    }
};