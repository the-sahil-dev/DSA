class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        // store indices
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]].push_back(i);
        }
        int ans = INT_MAX;
        // check triples
        for(auto &it : mp){
            vector<int> &v = it.second;
            if(v.size() >= 3){
                for(int i = 0; i + 2 < v.size(); i++){
                    int a = v[i];
                    int b = v[i+1];
                    int c = v[i+2];

                    int dist = abs(a-b) + abs(b-c) + abs(c-a);
                    ans = min(ans, dist);
                }
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};