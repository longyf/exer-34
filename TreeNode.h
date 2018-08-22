#ifndef TREE_NODE_H
#define TREE_NODE_H
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
#endif
