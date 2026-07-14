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
    int minDiffInBST(TreeNode* root) {
         vector<int> nums;
       int maxi = INT_MAX;
       solve(root,nums);
       for(int i = 0 ; i < nums.size()-1 ; i++){
        maxi = min(maxi, abs(nums[i] - nums[i+1]));
       }
       return maxi;
    }
       void solve(TreeNode* root,vector<int>&nums){
        if(!root) return;

        solve(root->left,nums);
        nums.push_back(root->val);
        solve(root->right,nums);
    }
};