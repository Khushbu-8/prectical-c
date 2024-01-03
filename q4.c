//output:
//	
//	Enter any number: 10
//	Even number is : 2 4 6 8 10

#include<stdio.h>



 void main(){
 	
 	int row;
 	int col;
 	int i;
 	int j;
 	
 	printf("Enter row :");
 	scanf("%d",&row);
	printf("Enter col :");
 	scanf("%d",&col);
	  
 	int a[row][col];
 	int b[row][col];
    int c[row][col];
	 	
 	for(i=0; i<row; i++){
 		for (j=1;j<=col; j++){
 			printf("Enter a[%d][%d] :",i,j);
 			scanf("%d",&a[i][j]);
		 }
	 }

        for(i=0; i<row; i++){
 		for (j=1;j<=col; j++){
 			printf("Enter b[%d][%d] :",i,j);
 			scanf("%d",&b[i][j]);
		 }
	 }	 
	 	
 		printf("Even number is :");
 	for (i=0; i<=row; i++){
 	    for (j=0; j<=col; j++){
 	    		if(i%2==0){
 			printf("%d ",i);
		 }
		 }
	 }
 
 
 	
 }
