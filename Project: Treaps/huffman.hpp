/*
    huffman.hpp

    Jason Kotowski
    jk234@uakron.edu

    Include file for main.cpp
*/

#ifndef INCLUDED_HUFFMAN_HPP
#define INCLUDED_HUFFMAN_HPP

#include <bits/stdc++.h>

//Print Huffman Codes
void printCodes(struct MinHeapNode* root, std::string huffString);

//Build Huffman Tree
void encode(int data[], int freq[], int size);

#endif // INCLUDED_HUFFMAN_HPP
