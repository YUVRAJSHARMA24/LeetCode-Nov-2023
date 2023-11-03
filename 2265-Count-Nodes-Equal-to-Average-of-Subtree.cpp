class Solution {
public:
    
    pair<int, int>solve(TreeNode* root, int &res)
    {
        if(root == NULL)
            return {0, 0};
        
        auto p1 = solve(root->left, res);
        auto p2 = solve(root->right, res);
        
        int totSum = p1.first + p2.first + root->val;
        int totCnt = p1.second + p2.second + 1;
        int avg = totSum/totCnt;
        
        if(avg == root->val)
            res += 1;
        
        return {totSum, totCnt};
    }
    
    int averageOfSubtree(TreeNode* root) {
        int res = 0;
        solve(root, res);
        return res;
    }
};
