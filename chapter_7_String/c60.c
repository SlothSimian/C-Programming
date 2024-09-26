//use of gets and puts for multi-worded string with spaces
#include<stdio.h>
          
int main(){
    char st[30];
    printf("Enter Your First And Last Name\n");
    gets(st);
    printf("Your Name is %s\n",st);

    puts(st);
    
    return 0;
}
