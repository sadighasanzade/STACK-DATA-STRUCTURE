here l created a Stack model using Array.

First we need to create a class with template.
{we need template because we don't know which type of data is going to be stored}

Then we added attributes that we need :
    size
    Array
    top

size is capacity of Stack (Array)
Array is our Stack storage
top is our top index it is -1 initilially and 
this index changes when new element inserted or removed
{since when Stack initilaized no data stored so index should be -1}

***************************************************

next we need public functions that stack needs :
    POP
    PEEK
    PUSH

    //utility
    isFull
    isEmpty
    displayStack

    //helper function
    removeAndReturnLastElement

*in POP function we delete last element and return deleted element as well as
*in PEEK function we return top element
*in PUSH method we add element to stack
*isEmpty returns if any element stored or not
*isFull returns if capacity is full or not
*displayStack prints all elements of stack

**removeAndReturnLastElement : this function iterates on Array and stores all elements 
in new Array except last one. Then keep last element in new variable as well.
Then we reAsign newArray to our Array and return lastElement which we stored in temporary variable




