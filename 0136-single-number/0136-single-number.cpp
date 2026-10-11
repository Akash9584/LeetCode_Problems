class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int unique_ele = 0 ;
        for (int val:nums){
            unique_ele ^= val;
        }
        return unique_ele;
    }
};