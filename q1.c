//output:
//	
//	Enter any number: 10
//	Even number is : 2 4 6 8 10

#include<stdio.h>

int rang(int j){
	
	return j;
}


 void main(){
 	int n;
 	int i;
 	printf("Enter  any number :");
 	scanf("%d",&n);
 	
 		printf("Even number is :");
 	for (i=1; i<=n; i++){
 		if(i%2==0){
 			printf("%d ",i);
		 }
	 }
 	rang(i);
 
 	
 }
