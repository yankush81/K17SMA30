#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
// P, Q, R are the Process names here 
  
    int n, m, i, j, k; 
   char p[3]={'P','Q','R'};
    char r[3]={'A','B','C'};
    n = 3; // Number of processes 
    m = 3; // Number of resources 
    int alloc[n][m];
    //Get the alloacted resources.
    printf("ENTER THE RESOURCE ALLOCATED FOR :\n");
    for(i=0;i<3;i++){
    	printf("PROCESS %c :\n",p[i]);
    	
		scanf("%d%d%d",&alloc[i][0],&alloc[i][1],&alloc[i][2]);
	}
	int max[n][m];
	//Get the max allocate resources
	printf("ENTER THE MAX RESOURCE ALLOCATE FOR :\n");
    for(i=0;i<3;i++){
    	printf("PROCESS %c :\n",p[i]);
    	
		scanf("%d%d%d",&max[i][0],&max[i][1],&max[i][2]);
	}
	int avail[m];
		printf("ENTER THE AVAILABLE FOR :\n");
    for(i=0;i<3;i++){
    	printf("RESOURCE %c :\n",r[i]);
    	
		scanf("%d",&avail[i]);
	}

	//find Resource need
	 int need[n][m]; 
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
    	  	printf("     |  ALLOCATE  |    MAX     |    NEED    |\n");
    	  	printf("=============================================\n");
    	  		printf("     |%4c%4c%4c|%4c%4c%4c|%4c%4c%4c|\n",r[0],r[1],r[2],r[0],r[1],r[2],r[0],r[1],r[2]);
	for(i=0;i<3;i++){
    	printf("%5c|%4d%4d%4d|%4d%4d%4d|%4d%4d%4d|\n",p[i],alloc[i][0],alloc[i][1],alloc[i][2],max[i][0],max[i][1],max[i][2],need[i][0],need[i][1],need[i][2]);
		}
			
			
   
    int f[3]={0,0,0};
    int answer[n];
    int s=0;
    int y=0; 
    int c=0;
    for (k = 0; k < 3; k++) { 
        for (i = 0; i < n; i++) { 
            if (f[i] == 0) { 
  
                int flag = 0; 
                for (j = 0; j < m; j++) { 
                    if (need[i][j] > avail[j]) {
					
                        flag = 1; 
                    break; 
                } }
  
                if (flag == 0) { 
                    answer[s++] = i; 
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
        	for(i=0;i<3;i++){
        		if(f[i]==0){
        				printf("%c process can not be processed",p[i]);
				}
			}
        
		}
}

