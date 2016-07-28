//
//  BinaryTree.cpp
//  ScottNodeProject
//
//  Created by Henrichsen, Cody on 7/28/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "BinaryTree.hpp"
#include <iostream>
#include <string>
#include <stdio.h>

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
    root = insert(insertedNode, root);
}
//Insertion Base and Recursive case
template <class Type>
BinaryTreeNode<Type>* BinaryTree<Type> :: insert(BinaryTreeNode<Type> * insertedNode, BinaryTreeNode<Type> * currentRootNode)
{
//Base Case (no change)
    if(currentRootNode == nullptr)
       {
           return insertedNode;
       }
//Insertion larger
    else if(insertedNode->getNodeData() < currentRootNode-> getNodeData())
       {
           currentRootNode-> setLeftChild(insert(insertedNode,  currentRootNode->getLeftChild()));
       }
//Insertion smaller
    else if(insertedNode->getNodeData() > currentRootNode->getNodeData())
       {
    currentRootNode->setRightChild(insert(insertedNode, currentRootNode-> getRightChild()));
       }
    return currentRootNode;
}
//in order Traversal
template <class Type>
void BinaryTree<Type> :: inOrderTraversal(BinaryTreeNode<Type>* currentNode)
{
    if(currentNode != nullptr)
    {
    inOrderTraversal(currentNode->getLeftChild());
    std:: cout << currentNode->getNodeData() << ",";
    inOrderTraversal(currentNode->getRightChild());
    }
}
//Preorder Traversal
template <class Type>
void BinaryTree<Type> :: preOrderTraversal(BinaryTreeNode<Type>* currentNode)
{
    if(currentNode != nullptr)
    {
    std:: cout << currentNode->getNodeData() << ",";
    preOrderTraversal(currentNode->getLeftChild());
    preOrderTraversal(currentNode->getRightChild());
    }
}//Postorder Traversal
template <class Type>
void BinaryTree<Type> :: postOrderTraversal(BinaryTreeNode<Type>* currentNode)
{
    if(currentNode != nullptr)
    {
        postOrderTraversal(currentNode->getLeftChild());
        postOrderTraversal(currentNode->getRightChild());
        std:: cout << currentNode->getNodeData() << ",";    }
}
//Get Root
template <class Type>
BinaryTreeNode<Type> * BinaryTree<Type> :: getRoot()
{
    return root;
}
//Get Size
template <class Type>
void BinaryTree<Type> :: calculateSize(BinaryTreeNode<Type> *currentNode)
{
    if (currentNode != nullptr)
    {
        calculateSize(currentNode->getLeftChild());
        calculateSize(currentNode->getRightChild());
        size++;
    }
}
template <class Type>
int BinaryTree<Type> :: getSize()
{
    size = 0;
    calculateSize(root);
    return size;
}
//Remove node
//End Getters and Setters