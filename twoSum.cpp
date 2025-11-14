class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int temp;
        for(int i = 0; i< nums.size(); i++){
             for(int j = 0; j< nums.size(); j++){
                temp = nums[i] + nums[j];
                if(i== j){}
                else if (temp == target){
                   
                    return {i, j};
                }
             }
        }
        return {};
    }
};