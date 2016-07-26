//
//  main.cpp
//  ScottNodeProject
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include <iostream>
#include "Controller/NodeController.hpp"

int main()
{
    // insert code here...
    std::cout << "Starting  NodeController" <<std:: endl;
    NodeController * app = new NodeController();
    app->start();
    std::cout << "Ending NodeController" << std:: endl;
    return 0;
}
