//
//  filter.hpp
//  cpp-data-structs
//
//  Created by Wayne Chen on 11/16/17.
//  Copyright © 2017 Wayne Chen. All rights reserved.
//

#pragma once

void filter(float * input, float * kernel, float * output, int inputSignalSize, int inputKernalSize)
{
    // assumption: output is already allocated with size of inputSignalSize + inputKernelSize

    for(int idxInput = 0; idxInput < inputSignalSize; idxInput++)
    {
        float sum = 0.0;
        int idxStart = idxInput >= (inputKernelSize / 2) ? idxInput : (inputKernelSize / 2);
        int idxEnd = idxInput;
        for(int idxKernel = idxStart - (inputKernelSize / 2); idxKernel < idxStart + (inputKernelSize / 2); idxKernel++)
        {
            sum += input[idxInput] * kernel[idxKernel];
        }
        output[idxInput] = sum;
    }
}
