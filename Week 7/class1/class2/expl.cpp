// CIRCULAR QUEUE
/* Problem with linear array queue: front of the array ma empty vayeni we couldn't insert values 
*/
/* Circular queuecoonects front and rear part of the array to form a circle
    so that we can use the empty spaces again
    Rear wrap around for insertion : when rear=0 in case of rear == maxsize - 1 
    Front wrap around for deltion : 
*/
/* DEQUE ("deck") : short for double ended queue 
            linear list where insertion&del occurs at both ends(front & rear)
            combines features of both stacks & queue

    PRIORITY QUEUE : every element has a priority
                highest priorit processed first
                in case of equal priority, uses FIFO
        (will be using STLC)
*/

/* LINKED LISTS : 3 types
            Linked lists
            Doubly linked lists
            Circular linked lists

    2 main ways to store a list in memory: array & linked lists
    Array: stores elements in contiguous memory location
        limitations: static fixed size & insert/del elements can be costly

    Linked list: stores elements as nodes with pointers/references to the next
                can grow/shrink dyanamically
                overcomes limitations of arrays

    SINGLE LINKED LIST: is made up of nodes
        each node has 2 parts: info part(stores actual data) & link part(stores address to the next node)

    Start pointer: points to first node in the list(data hudaina, address huncha)
        last node's link part is null(this indicates end of the list)
    
    Operations:
    Traversal
    Searching
    Insertion: can link to anywhere as it is not contiguous
*/