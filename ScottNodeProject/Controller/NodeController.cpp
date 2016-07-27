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
#include <string>
#include <iostream>

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
void NodeController:: start()
{
    tryNodes();
    
}