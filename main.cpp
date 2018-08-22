#include <iostream>
#include "findPath.h"
#include <vector>
int main() {
	TreeNode *p1 = new TreeNode(10);
	TreeNode *p2 = new TreeNode(5);
	TreeNode *p3 = new TreeNode(12);
	TreeNode *p4 = new TreeNode(4);
	TreeNode *p5 = new TreeNode(7);

	p1->left = p2;
	p1->right = p3;

	p2->left = p4;
	p2->right = p5;

	vector<vector<int>> v1 = FindPath(p1, 22);

	for (int i = 0; i != v1.size(); ++i) {
		for (int j = 0; j != v1[i].size(); ++j) {
			cout<<v1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;

	return 0;
}
