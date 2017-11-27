//
//  linkedlist.hpp
//  cpp-data-structs
//
//  Created by Wayne Chen on 11/12/17.
//  Copyright © 2017 Wayne Chen. All rights reserved.
//

#pragma once
#include <exception>
class LinkedListNode
{
public:
    int             val;
    LinkedListNode* next;
    LinkedListNode(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
    
    void insert(int val)
    {
        LinkedListNode* node = this;
        if(node != nullptr)
        {
            node = node->next;
        }
        node->val = val;
        node->next = NULL;
        return;
    }
};

class LinkedList
{
public:
    LinkedListNode* head;
    LinkedList(LinkedListNode** node)
    {
        // add to head.
        this->head = *node;
    }
};

//LinkedListNode remove(LinkedListNode* head, )

