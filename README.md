                                            Creating my own MyMalloc & MyFree functions:-

To make my own malloc file I had to create two files:-

	1. mylinkedlist.c
	
	2. mymalloc.h

"mylinkedlist.c" file contains implementation of linkedlist.
	It contains different functions like:-
	
		1.insert()- inserting elements in a node,
		
		2.removeFirstNode()- removing first element in the node and 
		
		3.display()- display's element in the node.
	
"mymalloc.h" file contains implementation of malloc and free function which helps in memory allocation and deletion. 
 	Mymalloc function, works same as malloc function in C whereas, in MyFree function, the first element in the linkedlist is deleted and then displayed.
	It contains different functions like:-
		
		1. initialize()- initializes block free memory,
		
		2. split()- is used to check block fitting size, 
		
		3. MyMalloc()- creates the size of block entered by user, 
		
		4. merge()- helps in giving link from one node to another, 
		
		5. MyFree()- is used to delete the node entered in the first position.
	
Commands for running the code:-
	
	gcc malloc.h
	
	gcc myimplementation.c -o myexe
	
	./myexe
	
