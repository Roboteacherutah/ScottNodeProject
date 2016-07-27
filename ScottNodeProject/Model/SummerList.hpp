//
//  SummerList.hpp
//  ScottNodeProject
//
//  Created by Henrichsen, Cody on 7/27/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef SummerList_hpp
#define SummerList_hpp

#include <stdio.h>
#include "DataNode.hpp"


template <class Type>
class SummerList
{
private:
    int length;
    bool * modifiedNodes;
    DataNode<Type> * front;
    DataNode<Type> * end;
public:
    SummerList(int length);
    Type getFromIndex(int index);
    Type getFirst();
    Type getLast();
    Type setAtIndex(int index, Type data);
    int getSize();
    void addAtIndex(int index, Type data);
    void add(Type data);
    void addAtFront(Type data);
    Type remove(int index);
    bool contains(Type data);
    
};

#endif /* SummerList_hpp */