class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()==1){
            return false;
        }
        
        std::sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size()-1;i++){
            if (nums[i]!=nums[i+1]){
                continue;
            }
            else{
                return true;
            }
        }

        return false;

    }
};