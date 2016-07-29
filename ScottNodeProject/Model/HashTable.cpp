//
//  HashTable.cpp
//  ScottNodeProject
//
//  Created by Henrichsen, Cody on 7/29/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "HashTable.hpp"

//Constructors
template<class Type>
HashTable<Type> :: HashTable()
{
    this->capacity = 101;
    this->size = 0;
    this->efficiencyPercentage = .666;
    
    HashNode<Type> * currentEnd = front;
    this->front = new HashNode<Type>();
    //Loop to cree the first array of nodes for storage.
    for(int index =1; index < capacity; index++)
    {
        HashNode<Type> * next = new HashNode<Type>();
        currentEnd->setNode(next);
        currentEnd = next;
     }
    
}
    
//End Constructors
//Getters and Setters
//GETTERS
//End Getters and Setters