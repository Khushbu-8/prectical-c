//Q.3 WAP to find Fibonacci Series to n Numbers and Store it into textfile. 
//input

//enter any number 5
//output

//0 1 2 3 5
#include<stdio.h>

void main() {
    
    FILE *febo;
    
    int n1=0,n2=1,n3;
    int num;

   
    febo = fopen("febo.txt", "w");
    

    if (febo == NULL) {
        printf("can't open file\n");
        
    }
    printf("Enter any number :");
    scanf("%d",&num);
    
    printf("%d\n%d\n",n1,n2);
    fprintf(febo,"%d\n%d\n",n1,n2);
    num=num-2;

      while(num){
      n3=n1+n2;
      printf("%d\n",n3);
      fprintf(febo,"%d\n",n3);
      n1=n2;
      n2=n3;
	num=num-1;
}   
    printf("Successfully added numbers to files\n");

}


