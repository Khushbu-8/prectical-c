//input

//enter any number 5
//0 1 2 3 5
#include<stdio.h>

void main() {
    
    FILE *febo;
    int i;
    int num;

   
    febo = fopen("febo.txt", "w");
    

    if (febo == NULL) {
        printf("can't open file\n");
        
    }
    printf("Enter any number :");
    scanf("%d",&num);
    
    for (i =0; i <= num; i) {
        fprintf(febo, "%d\n", i);
            i=i+2;
        }
    

   
    printf("Successfully added numbers to files\n");

}
