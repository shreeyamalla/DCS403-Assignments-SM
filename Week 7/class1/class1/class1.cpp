// STACK & QUEUE

/* STACK : a linear data structure, follows LIFO(last in, first out) 
        last element inserted into the stack is the first one to be removed
    Main operations:
        push: adds to the top
        pop: removes top element from the stack
        peek/top : views top element 
    Eg: undo/redo operations

Stack Errors: Overflow & Underflow
    before push, check if space available : if no space, thats overflow
    before pop, check is stack is not empty : if empty, underflow (cannot pop)

Stack can be implemented using: Array & Linked lists

Array-Based Stack Representation
    use 1d array to store
    keep an index variable top which stores position of the topmost element 
    when stack is empty, top=-1

    Push huda: increment by 1 
    Pop huda: decrement by 1

    -1 , 0, 1 : yesari index by 1 baddai janxa

Coding Considerations:
    before push/ pop, check for overflow & underflow
    when array ko maxSize-1, this means the thingy is full

Time complexity: O(1), no namtter how big size of an array, it only is dependent upon the top element

Linked List Implementation
Linked list : need to study (slides)
*/

/* QUEUE : linear list where elements are:  
            insert at only one end, called rear
            del only from the other end, called front
        FIFO(first in, first out) principle]

    Array Implementation of Queue
    Variables used: 
        front: index of 1st item of the queue
        rear: index of last item added to the queue
    when queue empty, both front and rear values are -1
    insertion(enqueue) huda, rear values is incremented by 1 & said element is inserted at the new rear
    deletion(dequeue) huda, front position ma vayeko element is del & value of front is incremenented by 1
    In case of empty queue: rear & front (both) -1
                    when 1st element inserted, both become 0 (for this one time only)
*/




