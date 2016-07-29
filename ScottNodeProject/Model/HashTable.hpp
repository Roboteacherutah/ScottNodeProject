//
//  HashTable.hpp
//  ScottNodeProject
//
//  Created by Henrichsen, Cody on 7/29/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef HashTable_hpp
#define HashTable_hpp

#include <stdio.h>
#include "HashNode.hpp"

template<class Type>
class HashTable

{
private:
    bool isPrime(int sampleNumber);
    int size;
    int capacity;
    double efficiencyPercentage;
    HashNode<Type> * front;
    void resize();
    long nextPrime(long current);
    long findPosition(Type data);
    long handleCollision(Type data);
    
public:
    
    HashTable();
    void add(Type data);
    bool remove(Type data);
    int findosition(Type data);

};









#endif /* HashTable_hpp */
