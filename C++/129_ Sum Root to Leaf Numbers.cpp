class Solution {
private:
    void doSum(TreeNode* root, int& totalSum, int currSum)
    {
        if(root == NULL)
            return;
        if(root->left == NULL && root->right == NULL)
        {
            currSum = currSum*10;
            currSum += root->val;
            totalSum += currSum;
            return;
        }

        currSum = currSum*10;
        currSum += root->val;
        doSum(root->left, totalSum, currSum);
        doSum(root->right, totalSum, currSum);
    }
public:
    int sumNumbers(TreeNode* root) 
    {
        int totalSum = 0;
        doSum(root, totalSum, 0);    
        return totalSum;
    }
};