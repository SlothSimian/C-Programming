#include<stdio.h>
          
int main(){
    FILE *ptr;
    int num;
    printf("Enter the Integer you need the Table of\n");
    scanf("%d", &num);
    ptr = fopen("Table.txt", "w");
    for(int i = 0; i<10; i++){
        fprintf(ptr, "%d x %d = %d\n", num, i+1, num*(i+1));
    }
    fclose(ptr);

    printf("Successfully generated Table of %d in Table.txt\n", num );
    
    return 0;
}