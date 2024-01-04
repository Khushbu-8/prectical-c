//Q.4 WAP to print all even numbers from a given 2D array using Pointer.
//output:
//	
//	Enter any number: 10
//	Even number is : 2 4 6 8 10

#include<stdio.h>



 void main(){
	int n,i;
	
	printf("Enter size of array:");
	scanf("%d",&n);
	
	int a[n];
	int *ptr[n];
	
	for(i=0;i<n;i++)
	{
	  printf("Enter a[%d]",i);
      scanf("%d",&a[i]);
      ptr[i]=&a[i];
	}
	
	printf("Even numbers from array:");
	for(i=0;i<n;i++){
		if(*ptr[i]%2==0){
			printf("%d,",*ptr[i]);
			
		}	
	}
	
	
}
