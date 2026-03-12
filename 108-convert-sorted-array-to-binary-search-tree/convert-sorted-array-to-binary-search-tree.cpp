/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* create(int l, int r, vector<int> &nums){
        if(l>r) return nullptr;
        int mid = l +(r-l)/2;
            TreeNode*root = new TreeNode(nums[mid]);

            root->left = create(l,mid-1,nums);
        
        
            root->right = create(mid+1,r, nums);
        
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        TreeNode* root = NULL;
        
            root = create(0,n-1,nums);
        
        return root;
    }
};