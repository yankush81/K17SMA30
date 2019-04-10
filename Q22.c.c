#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
// P, Q, R are the Process names here 
  
    int n, m, i, j, k; 
   char p[5]={'P','Q','R','S','T'};
    char r[4]={'A','B','C','D'};
    n = 5; // Number of processes 
    m = 4; // Number of resources 
    int alloc[5][4]={ { 0,0,1,2 }, //P   // Allocation Matrix 
                        { 1,0, 0, 0 }, // Q 
                        {1, 3, 5, 4 }, // R 
                        { 0,6,3,2 }, // S
                        { 0, 0, 1,4 } };//T
	int max[5][4]={ { 0, 0,1, 2 }, // P    // Allocation Matrix 
                        { 1, 7, 5,0 }, // Q 
                        {2,3,5,6} ,// R 
                        { 0,6,5,2 }, // S 
                        { 0,6,5,6 } };//T
	int avail[4]={1,5,2,0};

	//find Resource need
	 int need[5][4]; 
    for (i = 0; i < n; i++) { 
        for (j = 0; j < m; j++) {
            need[i][j] = max[i][j] - alloc[i][j];
       } 
	}
    	
		  for (i = 0; i < n; i++) { 
        for (j = 0; j < m; j++) {
		
			if(need[i][j]<0){
				printf("Process cannot be occur because allocated is greater than max resource");
			exit(0);
			} 
       } 
	}
    	  	printf("     |    ALLOCATE    |      MAX       |      NEED      |\n");
    	  	printf("=========================================================\n");
    	  		printf("     |%4c%4c%4c%4c|%4c%4c%4c%4c|%4c%4c%4c%4c|\n",r[0],r[1],r[2],r[3],r[0],r[1],r[2],r[3],r[0],r[1],r[2],r[3]);
	for(i=0;i<5;i++){
    	printf("%5c|%4d%4d%4d%4d|%4d%4d%4d%4d|%4d%4d%4d%4d|\n",p[i],alloc[i][0],alloc[i][1],alloc[i][2],alloc[i][3],max[i][0],max[i][1],max[i][2],max[i][3],need[i][0],need[i][1],need[i][2],need[i][3]);
		}
			
			
   
    int f[5]={0,0,0,0,0};
    int answer[n];
    int s=0;
    int y=0; 
    int c=0;
    for (k = 0; k < 5; k++) { 
        for (i = 0; i < n; i++) { 
            if (f[i] == 0) { 
  
                int flag = 0; 
                for (j = 0; j < m; j++) { 
                    if (need[i][j] > avail[j]) {
					
                        flag = 1; 
                    break; 
                } }
  
                if (flag == 0) { 
                    answer[s] = i;
					s++ ;
                    for (y = 0; y < m; y++) 
                        avail[y] += alloc[i][y]; 
                    f[i] = 1; 
                    c++;
                } 
            } 
        } 
    } 
  printf("Following is the SAFE Sequence\n"); 
    int h;
     for (i = 0; i < c ; i++) {
	 h=answer[i];
        printf(" %c ->", p[h]); 
 }
        printf("\n");
        if(c<n){
        	for(i=0;i<5;i++){
        		if(f[i]==0){
        				printf("%c process can not be processed",p[i]);
				}
			}
        
		}
}

