//string library function strcpy(target string, source string) using string.h header file
#include<stdio.h>
#include<string.h>          
int main(){
    char *st = "You";
    char st2 [45];
    strcpy(st2, st);
    puts(st2);//st2 now contains the data of source string st
    return 0;
}
