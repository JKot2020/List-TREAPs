/*
    huffman.cpp

    Jason Kotowski
    jk234@uakron.edu

    Implementation file for main.cpp
*/

#include "huffman.hpp"
#include <bits/stdc++.h>

// Huffman tree node
struct MinHeapNode {
    int data;
    int freq;

    MinHeapNode *left, *right;

    MinHeapNode(int data, int freq) {
        left = right = NULL;
        this->data = data;
        this->freq = freq;
        }
};

// Comparison of two nodes.
struct compare {

    bool operator()(MinHeapNode *l, MinHeapNode *r) {
        return ((l->freq) > (r->freq));
    }
};

//Print Huffman Codes
void printCodes(struct MinHeapNode* root, std::string huffString){
   // If it reaches end
   if(!root)
       return;

   // Check if data exists
   if(root->data != '$')
       std::cout << root->data << ": " << huffString << std::endl;

   printCodes(root->left, (huffString + "0"));
   printCodes(root->right, (huffString + "1"));
}

// Build Huffman Tree
void encode(int data[], int freq[], int size) {

struct MinHeapNode *left, *right, *top;

// Create a min heap.
std::priority_queue<MinHeapNode*, std::vector<MinHeapNode*>, compare> minheap;

// For each character create a leaf node and insert each leaf node in the heap.
for(int i = 0; i < size; i++)
    minheap.push(new MinHeapNode (data[i], freq[i]));

 // Iterate while size of min heap doesn't become 1
 while(minheap.size() != 1) {
     // Extract two nodes from the heap.
     left = minheap.top();
     minheap.pop();

     right = minheap.top();
     minheap.pop();

     // Create internal node with added frequencies
     // Add node to new heap
     top = new MinHeapNode('$', (left->freq) + (right->freq));
     top->left = left;
     top->right = right;

     minheap.push(top);
     }

     // Call function to print the codes.
     printCodes(minheap.top(), " ");
}
