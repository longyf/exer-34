#ifndef FIND_PATH_H
#define FIND_PATH_H
#include <vector>
#include "TreeNode.h"
using namespace std;

    void FindPathCore(vector<vector<int>> &paths, vector<int> &path, TreeNode *root, int sum, int expectNumber) {
		
        sum += root->val;
        path.push_back(root->val);

		bool isLeaf = root->left == nullptr && root->right == nullptr;
        if (isLeaf && sum == expectNumber) {
			cout<<"A path is found."<<endl;
            paths.push_back(path);
        }

        if (root->left != nullptr)    
            FindPathCore(paths, path, root->left, sum, expectNumber);

		if (root->right != nullptr)
            FindPathCore(paths, path, root->right, sum, expectNumber);

		path.pop_back();
        
    }
    
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        vector<vector<int>> paths;
        if (root == nullptr)
            return paths;
        vector<int> path;
        
        int sum = 0;
        FindPathCore(paths, path, root, sum, expectNumber);
        
        return paths;

    }
#endif
