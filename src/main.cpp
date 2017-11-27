//
//  main.cpp
//  cpp-data-structs
//
//  Created by Wayne Chen on 11/12/17.
//  Copyright © 2017 Wayne Chen. All rights reserved.
//

#include <iostream>
#include "linkedlist.hpp"
#include "tree.hpp"
#include "heap.hpp"
#include "stack.hpp"
#include "queue.hpp"

int main(int argc, const char * argv[]) {
	// insert code here...

    LinkedListNode* llNode = new LinkedListNode(5);
    
    LinkedList ll = LinkedList(&llNode);
    
    ll.head->insert(4);
    ll.head->insert(3);
    ll.head->insert(2);
    ll.head->insert(1);
    ll.head->insert(0);

	std::cout << "Hello, World!\n";
    
	return 0;
}
