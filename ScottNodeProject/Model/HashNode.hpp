//
//  HashNode.hpp
//  ScottNodeProject
//
//  Created by Henrichsen, Cody on 7/29/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef HashNode_hpp
#define HashNode_hpp

#include <stdio.h>

template <class Type>
class HashNode
{
private:
    Type data;
    bool isStoring;
    HashNode<Type> * nextNode;
public:
    HashNode();
    HashNode(Type data);
    Type getData();
    bool hasStuf();
    HashNode<Type> * getNode();
    void tData(Type data);
    void setNode(HashNode<Type> * nextNode);
};


#endif /* HashNode_hpp */
