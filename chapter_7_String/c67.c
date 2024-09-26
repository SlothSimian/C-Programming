/*write a function slice() to slice a string. it should change the original string
such that it is now sliced string. take m and n as starting and end position of slice*/
#include<stdio.h>
void slice(char *st, int m, int n){
    int i = 0;
    while ((m+i)<n){
        st[i] = st[i+m];
        i++;
    }
    st[i]='\0';
    
}          
int main(){
    char st[] = "Jayant";
    slice(st, 1, 5);
    printf("%s",st);
    return 0;
}