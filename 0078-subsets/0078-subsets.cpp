class Solution {
public:
    void getAllSubSerts(vector<int>& nums,vector<int>& ans,int i, vector<vector<int>>& allSubSets){
        if(i==nums.size()){
            allSubSets.push_back({ans});
            return;
        }
        ans.push_back(nums[i]);
        getAllSubSerts(nums,ans,i+1,allSubSets);

        ans.pop_back();
        getAllSubSerts(nums,ans,i+1,allSubSets);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubSets;
        vector<int> ans;
        getAllSubSerts(nums,ans,0,allSubSets);
        return allSubSets;

    }
};