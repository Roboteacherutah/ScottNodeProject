//
//  BinaryTree.cpp
//  ScottNodeProject
//
//  Created by Henrichsen, Cody on 7/28/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "BinaryTree.hpp"
//Constructors
template <class Type>
BinaryTree<Type> :: BinaryTree()
{
    root = nullptr;
}
//End Constructors
//Getters and Seters
//Insertion Mode
template <class Type>
void BinaryTree<Type> :: insert(Type data)
{
    BinaryTreeNode<Type> * insertedNode = new BinaryTreeNode<Type>(data);
    
    insert(insertedNode, root);
}
//Insertion Base and Recursive case
template <class Type>
void BinaryTree<Type> :: insert(BinaryTreeNode<Type> * insertedNode, BinaryTreeNode<Type> * currentRootNode)
{
//Base Case (no change)
    if(currentRootNode == nullptr)
       {
           currentRootNode = insertedNode;
       }
//Insertion larger
    else if(insertedNode->getNodeData() < currentRootNode-> getNodeData())
       {
           insert(insertedNode, currentRootNode-> getLeftChild());
       }
//Insertion smaller
    else if(insertedNode->getNodeData() > currentRootNode->getNodeData())
       {
           insert(insertedNode, currentRootNode-> getRightChild());
       }
}
//End Getters and Setters