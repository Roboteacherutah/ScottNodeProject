//
//  NodeController.cpp
//  ScottNodeProject
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "NodeController.hpp"
#include "../Model/DataNode.cpp"
#include "../Model/SummerArray.cpp"
#include "../Model/BinaryTree.cpp"
#include "../Model/HashTable.cpp"
#include <string>
#include <iostream>
//Constructors
using namespace std;
void NodeController :: tryNodes()
{
    DataNode <int> numberNode;
    DataNode <string> wordNode;
    numberNode.setNodeData(231);
    cout << numberNode.getNodeData() << endl;
}
void NodeController :: tryArray()
{
    SummerArray<int> testArray(3);
}
void NodeController :: tryTree()
{
    BinaryTree<int> sampleTree;
    sampleTree.insert(7);
    sampleTree.insert(5);
    cout << "The tree is this big: " << sampleTree.getSize() << endl;
    sampleTree.insert(213);
    sampleTree.insert(-123);
    cout << "The tree is this big: " << sampleTree.getSize() << endl;
    sampleTree.insert(5);
    cout << "The tree is this big: " << sampleTree.getSize() << endl;
    sampleTree.insert(123124);
    sampleTree.insert(0);
    cout << "The tree is this big: " << sampleTree.getSize() << endl;
    cout << "The in order traversal" << endl;
    sampleTree.inOrderTraversal(sampleTree.getRoot());
    cout << endl;
    
    cout << "The pre order traversal" << endl;
    sampleTree.preOrderTraversal(sampleTree.getRoot());
    cout << endl;
    
    cout << "The post order traversal" << endl;
    sampleTree.postOrderTraversal(sampleTree.getRoot());
    cout << endl;
    
}

void NodeController :: tryHash()
{
//    HashTable<int> numbersInHash;
//    numbersInHash.add(123);
//    numbersInHash.add(342);
//    numbersInHash.add(123423);
//    numbersInHash.add(123413);
//    numbersInHash.add(-213);
//    numbersInHash.add(123123);
//    numbersInHash.add(324);
}
void NodeController:: start()
{
    tryTree();
   
}