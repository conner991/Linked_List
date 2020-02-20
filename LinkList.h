/*------------------------------------------------------------------------------------
FILE NAME:		   LinkList.h

DESCRIPTION:	   Specification file for the LinkList class

USAGE:  	       Used in conjunction with the Int_List.cpp file for the linked_list_demo.cpp driver file 		   

COMPILER:		   GNU g++ compiler on Linux

NOTES:             

MODIFICATION HISTORY:

Author				             Date			    Version
---------------               ----------		 -------------
Conner Fissell		          02-08-2020		 1.0 - Set up class and Makefile. 
------------------------------------------------------------------------------------*/
#ifndef __LINKLIST_H__
#define __LINKLIST_H__

#include "ListNode.h"

#include <iostream>
#include <vector>

using namespace std;

template <class item>
class LinkList 
{
    private:
        ListNode<item> *headPtr;                                // Pointer to first node 
        int valueCount;                                         // Current count of list items
        ListNode<item> *getPtrTo(const item &target) const;
    public:
        LinkList();                                             // Default Constructor
        LinkList(const LinkList<item> &aList);                  // Copy Constructor
        virtual ~LinkList();                                    // Virtual Destructor
        int getCurrentSize() const;
        bool isEmpty() const;
        bool add1(const item &newEntry);
        bool add2(const item &anEntry);
        bool remove(const item &anEntry);
        void clear();
        bool contains(const item &anEntry) const;
        int getFrequencyOf(const item &anEntry) const;
        vector<item> toVector() const;

};

// Global Constant
const char PROGRAMMER_NAME[] = "Conner Fissell";

#endif