//
//  vector.hpp
//  cpp-data-structs
//
//  Created by Wayne Chen on 11/17/17.
//  Copyright © 2017 Wayne Chen. All rights reserved.
//

#include <iostream>
#include <except>

template<typename T>
class Vector
{
public:

    Vector()
    {
        _capacity = _size = 0;
    }
    
    virtual T operator[](int index)
    {
        if(index < 0 || index >= _size)
        {
            throw std::out_of_range();
        }
        else
        {
            return _vals[index];
        }
    
    }
    
    T at(int index)
    {
        if(index < 0 || index >= _size)
        {
            throw std::out_of_range();
        }
        else
        {
            return _vals[index];
        }
    }
    
    void push_back(const T& val)
    {
        if(_size == _capacity)
        {
            if(_capacity == 0)
            {
                reserve(1, false);
            }
            else
            {
                reserve(2 * _capacity, true);
            }
        }
        _vals[_size] = val;
        _size++;
    }
    
    void remove()
    {
        // removes last element of the array.
        if(_size == 0)
        {
            throw std::out_of_range("Empty Vector!");
        }
        else
        {
            resize(_size - 1);
        }
    }
    
    // copy or don't copy contents after resize.
    void reserve(int size, bool copy)
    {
        T* newVals = new T[size];
        
        if(newVals == nullptr)
        {
            throw std::out_of_memory();
        }
        
        if(copy)
        {
            for(int i = 0; i < _size; i++)
            {
                newVals[i] =  _vals[i];
            }
        }
        
        if(_vals != nullptr)
        {
            delete [] _vals;
        }
        
        _vals = newVals;
        delete [] newVals;
        return;
    }
    
    void resize(int size)
    {
        if(size == _size)
        {
            return;
        }
        T* newVals = new T[size];
        if(size < _size)
        {
            // resize down. remove values.
            for(int i = 0; i < size; i++)
            {
                newVals[i] = _vals[i];
            }
        else
        {
            // size up.  pad with zeros.
            for(int i = 0; i < _size; i++)
            {
                newVals[i] = _vals[i];
            }
            for(int i = _size; i < size; i++)
            {
                newVals[i] = 0;
            }

            
        }
        
        if(_vals != nullptr)
        {
            delete [] _vals;
        }
        
        _vals = newVals;
        delete [] newVals;
        return;
    };
    
    
    
private:
    size_t  _capacity;
    size_t  _size;
    T*      _vals;
    
};
