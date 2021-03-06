class Solution {
public:
 int maxPathSumUtil(Node *root, int &res) {


        if (root == NULL)
            return 0;
        if (!root->left && !root->right)
            return root->data;

        int ls = maxPathSumUtil(root->left, res);
        int rs = maxPathSumUtil(root->right, res);

        if (root->left && root->right) {
            res = max(res, ls + rs + root->data);
            return max(ls, rs) + root->data;
        }
        return (!root->left) ? rs + root->data : ls + root->data;
    }
public:
    int maxPathSum(Node *root) {
        int res = INT_MIN;
        int h = maxPathSumUtil(root, res);
        if (root->left == NULL || root->right == NULL)
        {
            res = max(res, h);
        }
        return res;}

};
