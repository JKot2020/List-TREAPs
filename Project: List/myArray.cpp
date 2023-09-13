/*
    myArray.cpp

    COPYRIGHT (C) jk234@uakron.edu>, 2022  All rights reserved.
    Jason Kotowski
    Implementation file for Project List code.
*/

#include "myArray.hpp"
#include <iostream>

using std::cout;
using std::endl;

const int MAX_SIZE = 10;

// iterative version
void printArr(int myArray[])
{
    for (int i = 0; i < MAX_SIZE; i++)
    {
        cout << myArray[i] << " ";
    }
    cout << endl;
}

// recursive version
void printArrRec(int myArray[], int i)
{
    if (i == MAX_SIZE) {
        cout << endl;
        return;
    }

    cout << myArray[i] << " ";
    i++;

    printArrRec(myArray, i); // recursive call
}
