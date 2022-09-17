/*
    myLinkedList.hpp

    COPYRIGHT (C) jk234@uakron.edu>, 2022  All rights reserved.
    Jason Kotowski
    Include file for Project List code.
*/

#ifndef INCLUDED_MYLINKEDLIST_HPP
#define INCLUDED_MYLINKEDLIST_HPP

#include <iomanip>

class node{
	public:
		int num;
		node *next;
		node(){
			next = NULL;
		}
};

class LinkedList{
	node *head;
	public:

		LinkedList(){
			head = NULL;
		}

		void appendNode(int);
		void printList();
		node* gethead()
        {
            return head;
        }

        void printListRec(node *);

};

#endif // INCLUDED_MYLINKEDLIST_HPP
