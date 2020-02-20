/*------------------------------------------------------------------------------------
FILE NAME:		   LinkList.cpp

DESCRIPTION:	   Implementation file for LinkList and ListNode class

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
#include "ListNode.cpp"


/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       Default Constructor for LinkList class
RETURNS:           
NOTES:             
------------------------------------------------------------------------------- */
template <class item>
LinkList<item>::LinkList()
{
    headPtr = nullptr;
    valueCount = 0;
}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       Destructor for LinkList class
RETURNS:           
NOTES:             
------------------------------------------------------------------------------- */
template <class item>
LinkList<item>::~LinkList()
{
    ListNode<item> *nodePtr;
    ListNode<item> *nextNode;

    nodePtr = headPtr;

    while (nodePtr != nullptr)
    {
        nextNode = nodePtr->next;
        delete nodePtr;
    }

    nodePtr = nextNode;
}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       
RETURNS:           
NOTES:             Place items into list, create a node and store referenced item,
                   copy reference in head (headPtr) to next field in node, store
                   reference to new node in head.
------------------------------------------------------------------------------- */
template <class item>
bool LinkList<item>::add1(const item &newEntry)
{
    // Add to beginning of chain: new node references rest of chain 
    // (headPtr is nullptr if chain is empty)

    ListNode<item> *newNodePtr = new ListNode<item>();
    newNodePtr->setValue(newEntry);
    newNodePtr->setNextValue(headPtr);                  // New node points to chain
    headPtr = newNodePtr;                               // New node is now first node
    valueCount++;

    return true;                                        // Method is always successful
}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       
RETURNS:           
NOTES:             Report on items in object, allows us to determine if the items were
                   added properly.
------------------------------------------------------------------------------- */
template <class item>
vector<item> LinkList<item>::toVector() const
{
    vector<item> listContents;
    ListNode<item> currentPtr = headPtr;
    int counter = 0;

    while ((currentPtr != nullptr) && (counter < valueCount))
    {
        listContents.push_back(currentPtr->getValue());
        currentPtr = currentPtr->getNextValue();
        counter++;
    }

    return listContents;
}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       
RETURNS:           
NOTES:             
------------------------------------------------------------------------------- */
template <class item>
bool LinkList<item>::remove(const item &anEntry)
{
    ListNode<item> *entryNodePtr = getPtrTo(anEntry);
    bool canRemoveItem = !isEmpty() && (entryNodePtr != nullptr);
    if (canRemoveItem)
    {
        // Copy data from first node to located node
        entryNodePtr->setValue(headPtr->getValue());
        // Disconnet first node
        ListNode<item> *nodeToDeletePtr = headPtr;
        headPtr = headPtr->getNextValue();
        // Return node to the system 
        nodeToDeletePtr->setNextValue(nullptr);
        delete nodeToDeletePtr;
        nodeToDeletePtr = nullptr;
        valueCount--;
    }

    return canRemoveItem;
}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       
RETURNS:           
NOTES:          Use the private helper method getPtrTo if the helper returns 
                nullptr, item is not in the bag. If the helper returns a 
                reference to a node, the item is in the bag. 
------------------------------------------------------------------------------- */
template <class item>
ListNode<item> *LinkList<item>::getPtrTo(const item &anEntry) const
{
    bool found = false;
    ListNode<item> *currentPtr = headPtr;
    while (!found && (currentPtr != nullptr))
    {
        if (anEntry == currentPtr->getValue())
        {
            found = true;
        }
        else 
        {
            currentPtr = currentPtr->getNextValue();
        }
    }

    return currentPtr;
}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       
RETURNS:           
NOTES:             
------------------------------------------------------------------------------- */
template <class item> 
bool LinkList<item>::contains(const item &anEntry) const
{
    return (getPtrTo(anEntry) != nullptr);
}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       
RETURNS:           
NOTES:             The method 'clear' can't simply set valueCount to 0, thereby 
                   ignoring all the entries in the linked chain. Because the nodes 
                   in the chain were allocated dynamically, 'clear' must deallocate
                   them.
------------------------------------------------------------------------------- */
template <class item>
void LinkList<item>::clear()
{
    ListNode<item> *nodeToDeletePtr = headPtr;

    while (headPtr != nullptr)
    {
        headPtr = headPtr->getNextValue();
        // Return node to the system
        nodeToDeletePtr->setNextValue(nullptr);
        delete nodeToDeletePtr;
        nodeToDeletePtr = headPtr;
    }

    valueCount = 0;
}