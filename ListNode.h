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
Conner Fissell                02-10-2020         1.1 - Made separate .h file  
------------------------------------------------------------------------------------*/
#ifndef __LISTNODE_H__
#define __LISTNODE_H__

#include <iostream>
#include <vector>

using namespace std;


template <class item>
class ListNode
{
    private: 
        item value;                // Node value/data item
        ListNode<item> *next;      // Pointer to the next node

    public:
        ListNode();                                                         // Default Constructor
        ListNode(const item &aValue);
        ListNode(const item &aValue, ListNode<item> *nextNodePtr);
        void setValue(const item &aValue);
        void setNextValue(ListNode<item> *nextNodePtr);
        item getValue() const;
        ListNode<item> *getNextValue() const;
        
};

#endif