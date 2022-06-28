////////////////////////////////////////////////////////////////////////////////
// COMP1521 22T1 --- Assignment 2: `Allocator', a simple sub-allocator        //
// <https://www.cse.unsw.edu.au/~cs1521/22T1/assignments/ass2/index.html>     //
//                                                                            //
// 2021-04-06   v1.0    Team COMP1521 <cs1521 at cse.unsw.edu.au>             //
//                                                                            //
///////////////////// YOU DO NOT NEED TO MODIFY THIS FILE. /////////////////////


////////////////////////////// DO NOT CHANGE THIS FILE. //////////////////////////////
// THIS FILE IS NOT SUBMITTED AND WILL BE PROVIDED AS IS DURING TESTING AND MARKING //
////////////////////////////// DO NOT CHANGE THIS FILE. //////////////////////////////



#ifndef CS1521_ASSIGN2__MYHEAP_H
#define CS1521_ASSIGN2__MYHEAP_H

#include <stdint.h>

/** Initialise the Heap. */
int init_heap(uint32_t size);

/** Release resources associated with the heap. */
void free_heap(void);

/** Allocate a chunk of memory large enough to store `size' bytes. */
void *my_malloc(uint32_t size);

/** Deallocate a chunk of memory. */
void my_free(void *obj);

/** Convert a pointer to an offset in the heap. */
int64_t heap_offset(void *obj);

/** Dump the contents of the heap (for testing/debugging). */
void dump_heap(int verbosity);

#endif // !defined(CS1521_ASSIGN2__MYHEAP_H)


////////////////////////////// DO NOT CHANGE THIS FILE. //////////////////////////////
// THIS FILE IS NOT SUBMITTED AND WILL BE PROVIDED AS IS DURING TESTING AND MARKING //
////////////////////////////// DO NOT CHANGE THIS FILE. //////////////////////////////
