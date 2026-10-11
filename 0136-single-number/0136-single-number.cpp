class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int unique_ele = 0 ;
        for (int i = 0; i< nums.size(); i++){
            unique_ele = unique_ele ^nums[i];
        }
        return unique_ele;
    }
};