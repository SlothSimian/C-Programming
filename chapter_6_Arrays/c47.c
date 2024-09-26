// wap to create a array to accept marks of 5 students
#include<stdio.h>
          
int main(){
    int student_marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the student %d marks :\n",i+1);
        scanf("%d", &student_marks[i]);
    }
    printf("*** The Marks Of All Student *** \n");
    for (int i = 0; i < 5; i++)
    {
        printf("The student %d marks is : %d \n", i+1, student_marks[i]);
        
    }

    return 0;
}