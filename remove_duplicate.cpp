class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i,j;
        set<int> s;
        for(i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int sz=s.size();
        i=0;
        for(auto x:s){
            nums[i]=x;
            i++;
        }
        return sz;
    }
};