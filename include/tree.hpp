//
//  tree.hpp
//  cpp-data-structs
//
//  Created by Wayne Chen on 11/13/17.
//  Copyright © 2017 Wayne Chen. All rights reserved.
//

#pragma once
#include <iostream>
class BinaryTreeNode
{
public:
    int             val;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
    
    void printValue()
    {
        std::cout << "Val: " << this->val << std::endl;
    }
};

void preOrderTraversal(BinaryTreeNode* root)
{
    if(root == nullptr)
    {
        return;
    }
    
    root->printValue();
    
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

class BinaryTree
{
public:

};

