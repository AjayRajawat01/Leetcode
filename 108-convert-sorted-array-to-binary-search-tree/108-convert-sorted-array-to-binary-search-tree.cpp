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
    TreeNode* help(vector<int>&nums,int low,int high){
        // base condition 
         if(low>high)return nullptr;
        int mid= low+ (high-low)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        
        root->left =help(nums,low,mid-1);
        root->right =help(nums,mid+1,high);
        
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
//         [-10,-3,0,5,9]
// binary search to find the node (root)
        return help(nums,0,size(nums)-1);
    }
};