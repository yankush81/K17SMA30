# K17SMA30
Simulation Based Assignment Q-11 and 22
Ques. 11. Reena’s operating system uses an algorithm for deadlock avoidance to manage the allocation of resources say three namely A, B, and C to three processes P0, P1, and P2. Consider the following scenario as reference .user must enter the current state of system as given in this example :
Suppose P0 has 0,0,1 instances , P1 is having 3,2,0 instances and P2 occupies 2,1,1 instances of A,B,C resource respectively.
Also the maximum number of instances required for P0 is 8,4,3 and for p1 is 6,2,0 and finally for P2 there are 3,3,3 instances of resources A,B,C respectively. There are 3 instances of resource A, 2 instances of resource B and 2 instances of resource C available. Write a program to check whether Reena’s operating system is in a safe state or not in the following independent requests for additional resources in the
current state:
1.	Request1: P0 requests 0 instances of A and 0 instances of B and 2 instances of C.
2.	Request2: P1 requests for 2 instances of A, 0 instances of B and 0 instances of C.
All the request must be given by user as input.


Solution -->
Given :
Number of processes:
Number of Resouces:
Avail resource :

First i have find NEED:
            NEED=MAX-RESOURCE ALLOCATED;
And after each process is checked 
        if Avail>need
          then :Avail=avail+ALLOCATED RESOURCE;
And process have been proceed.



Ques. 22. Consider following and Generate a solution to find whether the system is in safe state or not?
Available	Processes	Allocation	Max
A	B	C	D		    A	B	C	D   	A	B	C	D
1	5	2	0	  P0	0	0	1	2   	0	0	1	2
	        P1	1	0	0	0	    1	7	5	0
	        P2	1	3	5	4	    2	3	5	6
	        P3	0	6	3	2	    0	6	5	2
	        P4	0	0	1	4   	0	6	5	6

Solution-->

same as above.
