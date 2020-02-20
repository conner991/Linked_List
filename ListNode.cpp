/*------------------------------------------------------------------------------------
FILE NAME:		   ListNode.cpp

DESCRIPTION:	   Implementation file for the ListNode class

USAGE:			   

COMPILER:		   GNU g++ compiler on Linux

NOTES:              

MODIFICATION HISTORY:

Author				              Date			   Version
---------------                 ----------		-------------
Conner Fissell		            02-08-2020		1.0 - Started building basic outline 
Conner Fissell                  02-09-2020      1.1 - Added member functions 
Conner Fissell                  02-10-2020      1.2 - Cont. adding member functions
------------------------------------------------------------------------------------*/
#include "LinkList.h"

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       Constructor for ListNode class
RETURNS:           
NOTES:             
------------------------------------------------------------------------------- */
template <class item>
ListNode<item>::ListNode()
{
    next = nullptr;
}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       Constructor for ListNode class
RETURNS:           
NOTES:             
------------------------------------------------------------------------------- */
template <class item>
ListNode<item>::ListNode(const item &aValue)
{
    value = aValue;
    next = nullptr;
}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       Constructor for LinkList class
RETURNS:           
NOTES:             
------------------------------------------------------------------------------- */
template <class item>
ListNode<item>::ListNode(const item &aValue, ListNode<item> *nextNodePtr)
{
    value = aValue;
    next = nextNodePtr;
}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       Constructor for LinkList class
RETURNS:           
NOTES:             
------------------------------------------------------------------------------- */
template <class item>
void ListNode<item>::setValue(const item &aValue)
{
    value = aValue;
}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       Constructor for LinkList class
RETURNS:           
NOTES:             
------------------------------------------------------------------------------- */
template <class item>
void ListNode<item>::setNextValue(ListNode<item> *nextNodePtr)
{
    next = nextNodePtr;
}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       Constructor for LinkList class
RETURNS:           
NOTES:             
------------------------------------------------------------------------------- */
template <class item>
item ListNode<item>::getValue() const
{
    return value;
}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       Constructor for LinkList class
RETURNS:           
NOTES:             
------------------------------------------------------------------------------- */
template <class item>
ListNode<item> *ListNode<item>::getNextValue() const
{
    return next;
}