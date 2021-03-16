                                            Creating my own MyMalloc & MyFree functions:-

"mylinkedlist.c" file contains implementation of linkedlist.
  Here, mylinkedlist file contains inserting elements in a node, removing first element in the node and displaying elements in the node.
"mymalloc.h" file contains implementation of malloc and free function which is included in mylinkedlist file which helps in memory allocation and deletion. 
 Here mymalloc file contains both MyMalloc and MyFree functions.
 Mymalloc function, works same as malloc function in C whereas, in MyFree function, the first element in the linkedlist is deleted and then printed.

Commands for running the code:-
	gcc malloc.h
	gcc myimplementation.c -o myexe
	./myexe
	
