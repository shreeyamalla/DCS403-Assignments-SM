// SORTING
/*  Slection Sort & Bubble Sort
    Sorting Key(Sort key): columns used to sort in order, multiple column sorting is possible 
    Sorting is not limited to numbers only

    Can be sorted in: ascending & descending order
    numbers: 
    characters: ascii value
    string: lexiographical order (like in a dictionary)

    Two types of sorting
    Internal sorting: all data sorted remains in RAM memory
                    for small & medium sized datasets
    External sorting: only part of the sorted data remains in RAM, rest of the remains in secondary storage
                    for too large datasets

    Sort Stability
    Stable sort: if two records have the same key(), their input order is kept in the output 
                use when multi level sorting/ history retention is imp
    Unstable sort: does not guarantee relative order for same keys
                duplicate records appear 
    
    Selection sort: starts from 1st element
                repeatedly finds the smallest element from the unsorted part of the array
                and, puts it to 1st position
                basically, it picks 1st element & picks next small elemnt, then swaps their places
                only works for small datasets
                Time complexity: O(n^2): as first element is compared with everything else
                1 pass : only 1 swapping
    Bubble sort: two adjacent elements are compared and the smallest one of the two is swapped 
                in each pass, largest element is pushed to the end
                1 pass : whole array elemnt swapping once
    
    Insertion sort: builds sorted array one item at a time
                left side sorted part, right side unsorted part
                (not used much in real world)
    
*/

// Day 2: sorting wala coding questions ko analysis lekhne in assignemnt, basically explain code