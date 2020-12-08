//============================================================================
// Name        : interview.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "awesome.hpp"
using namespace std;
using namespace BinaryTree;

//Check if two binary trees are identical or not | Iterative & Recursive

int main() {
	Node * n_root = new Node(15);
	n_root->left = new Node(14);
	n_root->right = new Node(16);

	Node::print(n_root);
	return 0;
}
