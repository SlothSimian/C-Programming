//wap to take a string from user using %c and %s and prove that strings are equal
#include<stdio.h>
#include<string.h>          
int main(){ 
    char str1[20];
    char str2[20];
    char c;
    int i = 0;
    printf("Enter the value of first string\n");
    scanf("%s",&str1);
    printf("Enter the value of second string character by character\n");  
    while (c!='\n'){
        fflush(stdin);
        scanf("%c",&c);
        str2[i]= c;
        i++;
    }
    str2[i-1]='\0';
    printf("The value of first string is %s\n",str1);
    printf("The value of second string is %s\n",str2);
    printf("strcpm for these strings return %d\n",strcmp(str1, str2));
    
    return 0;
}