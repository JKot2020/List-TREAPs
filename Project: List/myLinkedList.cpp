/*
    myLinkedList.cpp

    COPYRIGHT (C) jk234@uakron.edu>, 2022  All rights reserved.
    Jason Kotowski
    Implementation file for Project List code.
*/

#include "myLinkedList.hpp"
#include <iostream>
#include <iomanip>
#include <memory>

using std::cout;
using std::endl;

void LinkedList::appendNode(int num){
	node *temp = new node();
	temp->num = num;
	temp->next = head;
	head = temp;
}

// iterative version
void LinkedList::printList(){
    if (head == NULL){
        cout << "List is empty" << endl;
    }
    else{
        node *temp = head;
        while (temp != NULL){
            cout << temp->num << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

// recursive version
void LinkedList::printListRec(node *head)
{
    if (head != NULL)
    {
        cout << head->num << " ";
        printListRec(head->next);
    }
}
