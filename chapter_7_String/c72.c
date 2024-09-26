//wap to check presence of a character in string
#include <stdio.h>
#include <string.h>
 
void check(char *s,char c)
{
    int i;
     for(i=0;s[i];i++)  {
    	if(s[i]==c){
		    printf("character '%c' found at location: %d\n ",c,i);
 
		}
        else{
            printf("Character not found\n");
        }
        
 	}	
	  
 }
int main()
{
 
    char s[1000],c;  
  
    printf("Enter  the string : ");
    gets(s);
    printf("Enter character to be searched: ");
    c=getchar();
    check(s,c);
    
	return 0;
 
     
     
}