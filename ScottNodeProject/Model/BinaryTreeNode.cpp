//
//  BinaryTreeNode.cpp
//  ScottNodeProject
//
//  Created by Henrichsen, Cody on 7/28/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "BinaryTreeNode.hpp"
//Constructors
template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : DataNode<Type>()
{
    parent = nullptr;
    leftChild = nullptr;
    rightChild = nullptr;
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : DataNode<Type>(data)
{
    //this-> setNodeData(data); This is not needed because of: "DataNode<Type>(data)" above
    parent = nullptr;
    leftChild = nullptr;
    rightChild = nullptr;

}
//End Constructors
//Getters and Setters
template <class Type>
//Get parent
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getParent()
{
    return parent;
}
//Set parent
template <class Type>
void BinaryTreeNode<Type> :: setParent(BinaryTreeNode<Type> * parent)
{
    this;  parent->  parent;
}
//Get leftChild
template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftChild()
{
    return leftChild;
}
//Set leftChild
template <class Type>
void BinaryTreeNode<Type> :: setLeftChild(BinaryTreeNode<Type> * leftChild)
{
    this->leftChild = leftChild;
}
//Get rightChild
template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightChild()

{
    return rightChild;
}
//Set rightChild
template <class
Type>
void BinaryTreeNode<Type> :: setRightChild(BinaryTreeNode<Type> * rightChild)
{
    this->rightChild = rightChild;
}
//End Getters and Setters