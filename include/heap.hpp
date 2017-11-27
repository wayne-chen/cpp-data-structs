//
//  heap.hpp
//  cpp-data-structs
//
//  Created by Wayne Chen on 11/13/17.
//  Copyright © 2017 Wayne Chen. All rights reserved.
//

#pragma once
#include <array>

enum PriorityTypes
{
    MIN = 1,
    MAX = 2,
    FIBONACCI = 3
};

class HeapNode
{
public:
    int val;
    HeapNode* left;
    HeapNode* right;
    
    HeapNode(int val)
    {
        this->val = val;
        left = right = nullptr;
    }
};

template<class Priority>
class Heap
{
public:
    HeapNode* head;
    Heap(std::array<int, 20> arr)
    {
        
    }
    
    
    
private:
    
    
};
