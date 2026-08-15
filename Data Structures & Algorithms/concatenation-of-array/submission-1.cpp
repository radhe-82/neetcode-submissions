class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>array;
        for(int i=0;i<nums.size()*2;i++){
            array.push_back(nums[i%nums.size()]);
        }
        return array;


        
    }
};