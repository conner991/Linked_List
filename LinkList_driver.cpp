/*------------------------------------------------------------------------------------
FILE NAME:		   LinkList_driver.cpp

DESCRIPTION:	   Driver file for the LinkList class

USAGE:			   ./LinkList_driver

COMPILER:		   GNU g++ compiler on Linux

NOTES:              

MODIFICATION HISTORY:

Author				             Date			    Version
---------------               ----------		 -------------
Conner Fissell		          02-08-2020		 1.0 - Started basic outline
------------------------------------------------------------------------------------*/
#include "LinkList.cpp"


// Prototypes
void menu1();
void createList();
void intLL();
void floatLL();
void stringLL();
void charLL();
void addFun();
void insertFun();
void deleteFun();
void displayFun();
/* -----------------------------------------------------------------------------
FUNCTION:          int main()
DESCRIPTION:       
RETURNS:           0
NOTES:             
------------------------------------------------------------------------------- */
int main()
{
    menu1();


    return 0;
}

/* -----------------------------------------------------------------------------
FUNCTION:          menu1()
DESCRIPTION:       
RETURNS:           
NOTES:             
------------------------------------------------------------------------------- */
void menu1()
{   
    char choice;

    while (choice != 'q')
    {
        

        cout << endl;
        cout << "------------------LINKED LIST BUILDER----------------------\n";
        cout << "                                                           \n";
        cout << "Welcome to the Linked List Builder, where you              \n";
        cout << "can build and manipulate any type of Linked List you want! \n";
        cout << "Hit a, b, c from the options below to get started:         \n";
        cout << "                                                           \n";
        cout << "a.) Create new Linked List                                 \n";
        cout << "q.) exit                                                   \n";

        cin >> choice;

        while ((choice != 'a') && (choice != 'q'))
        {
            cout << "\nInvalid choice. Try again.\n";
            cin >> choice;
        }


        if (choice == 'a')
        {
            createList();
        }

        

        else 
        {
            cout << "\nGoodbye!\n\n";
        }

    }
}

/* -----------------------------------------------------------------------------
FUNCTION:          createList()
DESCRIPTION:       
RETURNS:           
NOTES:             
------------------------------------------------------------------------------- */
void createList()
{
    int choice2;

    cout << "\nWhat type of Linked List do you want to create?\n";
    cout << "You can use integers, floating point numbers, single words or single\n";
    cout << "characters.\n\n";
    cout << "Type '1' for integers\n";
    cout << "2 for floating point\n";
    cout << "3 = single words\n";
    cout << "4 = characters\n";
    cout << "5 = quit to go back a menu\n\n";

    while (choice2 != 5)
    {   
        cout << "\nEnter choice for list\n\n";
        cin >> choice2;

        switch (choice2) 
        {
            case 1: intLL();
                break;
            case 2: floatLL();
                break;
            case 3: stringLL();
                break;
            case 4: charLL();
                break;
            default: 
                cout << "\nInvalid choice, try again.\n\n";
        }

    }
}



/* -----------------------------------------------------------------------------
FUNCTION:          intLL()
DESCRIPTION:       
RETURNS:           
NOTES:             
------------------------------------------------------------------------------- */
void intLL()
{   
    char choice3;
    int nodes;
    int data[10];
    int insert;
    bool isEmpty = 0;
    
    // LinkList<int> intList;

    cout << "\nStart your list!\n";
    cout << "How many nodes do you want in the list?\n";
    cout << "Must be between 1 and 9\n";
    cout << "WARNING!!! DOESNT ACTUALLY MAKE A LIST!\n";
    cout << "BEWARE OF INFINITE LOOP, SORRY :(\n\n";
    cin >> nodes;

    while ((nodes < 0) || (nodes > 9))
    {
        cout << "\nInvalid range. Try again.\n";
        cin >> nodes;
    }

    for (int i = 0; i < nodes; i++)
    {
        cout << "\nEnter " << nodes << " integers.\n";
        cin >> data[i];
        //intList.add1(data[i]);
        nodes -= (nodes - 1);
    }

    while (!isEmpty)
    {

        cout << "\n\nWhat do you want to do with the linked list?\n";
        cout << "You can insert nodes, delete nodes\n";
        cout << "and display the list of nodes.\n\n";
        cout << "Type 'a' to insert a node\n";
        cout << "b to delete a node\n";
        cout << "c = display the list\n";
        cout << "q = delete list and go back a menu\n\n";

        while (choice3 != 'q')
        {   
            cout << "\nEnter choice for list\n\n";
            cin >> choice3;

            switch (choice3) 
            {
                case 'a':   cout << "\nWhat number would you like to insert?\n";
                            cin >> insert;
                    break;
                case 'b': 
                    break;
                case 'c': 
                    break;
                case 'd': 
                    break;
                default: 
                    cout << "\nInvalid choice, try again.\n\n";
            }

        }
    }
    
}


/* -----------------------------------------------------------------------------
FUNCTION:          floatLL()
DESCRIPTION:       
RETURNS:           
NOTES:             
------------------------------------------------------------------------------- */
void floatLL()
{

    
}

/* -----------------------------------------------------------------------------
FUNCTION:          stringLL()
DESCRIPTION:       
RETURNS:           
NOTES:             
------------------------------------------------------------------------------- */
void stringLL()
{

}

/* -----------------------------------------------------------------------------
FUNCTION:          charLL()
DESCRIPTION:       
RETURNS:           
NOTES:             
------------------------------------------------------------------------------- */
void charLL()
{

}

/* -----------------------------------------------------------------------------
FUNCTION:         addFun() 
DESCRIPTION:       
RETURNS:           
NOTES:             
------------------------------------------------------------------------------- */
void addFun()
{

}