class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int temp=0;
        int ans = INT_MAX;
        int n  = nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                for(int k = j+1;k<n;k++){
                    if(nums[i]==nums[j]&&nums[j]==nums[k]){
                        temp = abs(i-j)+abs(j-k)+abs(k-i);
                        ans= min(ans,temp);
                    }
                }
            }
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};