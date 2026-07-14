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
    int getMinimumDifference(TreeNode* root) {
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
    // int min1 = INT_MAX;
    //     int min2 = INT_MAX;
    //     help1(root,min1);
    //     help2(root,min1,min2);
    //     return abs(min1-min2);
    void help1(TreeNode* root,int &min1){
        if(root==nullptr){
            return;
        }
        min1 = min(min1,abs(root->val - min1 ));
        help1(root->left,min1);
        help1(root->right,min1);
    }
    void help2(TreeNode* root,int &min1,int &min2){
        if(root==nullptr){
            return;
        }
        if(root->val != min1){
        min2 = min(min2,root->val);
        }
        help2(root->left,min1,min2);
        help2(root->right,min1,min2);
    }
    
};