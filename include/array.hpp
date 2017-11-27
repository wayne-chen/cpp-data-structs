//
//  array.hpp
//  cpp-data-structs
//
//  Created by Wayne Chen on 11/14/17.
//  Copyright © 2017 Wayne Chen. All rights reserved.
//

#pragma once

#include <except>

class ArrayNode
{
public:
    virtual int operator[](int index)
    {
        if(index < 0 || index > length)
        {
            throw std::out_of_range("");
        }
        return vals[index];
    }

private:
    int[]   vals;
    int     length;
};
