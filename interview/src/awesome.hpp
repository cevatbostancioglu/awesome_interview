/*
 * awesome.hpp
 *
 *  Created on: Dec 8, 2020
 *      Author: cevat
 */

#ifndef AWESOME_HPP_
#define AWESOME_HPP_

#include <iostream>

namespace BinaryTree
{
	class Node
	{
	public:
		int value;

		Node* left;
		Node* right;

		Node(int value)
		{
			this->value = value;
			this->left = this->right = nullptr;
		}

		static Node* insert(Node* root, int value)
		{
			if(root == nullptr)
			{return nullptr;}

			if(root->value > value)
			{

			}
		}

		static void print(Node* n)
		{
			print_(n->left);
			std::cout << " " << n->value << " ";
			print_(n->right);
			std::cout << std::endl;
		}

	private:

		static void print_(Node* n)
		{
			if(n != nullptr)
			{
				std::cout << n->value;
			}
		}
	protected:
	};
};



#endif /* AWESOME_HPP_ */
