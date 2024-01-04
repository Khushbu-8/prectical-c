//Q.1 WAP to print all even numbers from a given range using UDF.
//input:
//	
//	Enter any number: 10
//output

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
