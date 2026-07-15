class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
            vector<pair<int , int>> newArray;
            for(int i=0; i<nums.size(); i++){
                newArray.push_back({nums[i] , i});
            }
            sort(newArray.begin(), newArray.end());
            int left = 0;
            int right = newArray.size()-1;
            while(left < right){
                int sum = newArray[left].first + newArray[right].first;
                if(sum == target){
                    i = newArray[left].second;
                    j = newArray[right].second;
                    return {min(i,j),max(i,j)};
                }
                else if(sum < target){
                    left++;
                }
                else{
                    right--;
                }
            }
            return{};
    }    
    
};
