//input:
//	
//	Enter ary size: 5
//a[0]=1
//a[1]=2
//a[2]=3
//a[3]=4
//a[4]=5

//output

//cube is : 1 8 27 64 125


//
#include<stdio.h>

void main ()
{

	int n;
	printf("Enter the size of array :- ");
	scanf("%d",&n);
	
	int a[n];
	int i;
	
	for(i=0;i<n;i++){
		printf("a[%d] => ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++){
		a[i] = a[i] * a[i] * a[i];
		printf("%d\t",a[i]);
	}
	
}
