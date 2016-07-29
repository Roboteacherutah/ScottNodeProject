//
//  HashTable.cpp
//  ScottNodeProject
//
//  Created by Henrichsen, Cody on 7/29/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "HashTable.hpp"

//Constructor (Builds HashTable)
template<class Type>
HashTable<Type> :: HashTable()
{
    this->capacity = 101;
    this->size = 0;
    this->efficiencyPercentage = .666;
    
    HashNode<Type> * currentEnd = front;
    this->front = new HashNode<Type>();
    //Loop to create the first array of nodes for storage.
    for(int index =1; index < capacity; index++)
    {
        HashNode<Type> * next = new HashNode<Type>();
        currentEnd->setNode(next);
        currentEnd = next;
     }
    
}
//End Constructor
//Getters and Setters
//Add to table Method
template<class Type>
void HashTable<Type> :: add(Type data)
{
    if(((double)size/ capacity) >= efficiencyPercentage)
    {
        resize();
    }
    long position = findPosition(data);
    HashNode<Type> * indexPointer =front;
    
    for(int index = 0; index < position; index++)
    {
        indexPointer = indexPointer->getNode();
 }
    indexPointer->setData(data);
    indexPointer->setStuffed(true);
}
//FindPosition Method
template<class Type>
long HashTable<Type> :: findPosition(Type data)
{
    long insertedPosition;
    int address =&data;
    insertedPosition = address % capacity;
    HashNode<Type>* indexPointer = front;
    for (long index = 0; index < insertedPosition; index++)
    {
        indexPointer = indexPointer->getNode();
    }
if (indexPointer->isStuffed())
{
    insertedPosition = handleCollision(data);
}
    return insertedPosition;
}















//End Getters and Setters