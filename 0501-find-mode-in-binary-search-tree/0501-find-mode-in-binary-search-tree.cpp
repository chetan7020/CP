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
    
    map<int, int> mp;
    
    void cntOcc(TreeNode* root){
        if(root==NULL) return;
        cntOcc(root->left);
        mp[root->val]++;
        cntOcc(root->right);
    }
    
    vector<int> findMode(TreeNode* root) {
        cntOcc(root);
        int maxi=INT_MIN;
        for(auto it:mp){              
            if(it.second>maxi){        
                maxi=it.second;       
            }
        }
        vector<int>ans;
        for(auto it:mp){
            if(it.second==maxi){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};