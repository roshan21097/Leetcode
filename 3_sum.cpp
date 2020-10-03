class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i,j,k;
        vector<vector<int>> vv;
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(i=0;i<n-2;i++){
            int val=nums[i];
            int l=i+1,r=n-1;
            while(l<r){
                int sum=val+nums[l]+nums[r];
                if(sum==0){
                    s.insert({val,nums[l],nums[r]});
                    l++,r--;
                }
                else if(sum<0){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        for(auto x:s){
            vv.push_back(x);
        }
        return vv;
    }
};