class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
       int n=nums.size();
        set<int>ans;
       unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                mp[nums[i][j]]++;
            }
        }
        unordered_map<int,int>::iterator itr;
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            if(itr->second==n)
            {
                ans.insert(itr->first);
            }
        }
        vector<int>v_ans(ans.begin(),ans.end());
        
        return v_ans;
    }
};
