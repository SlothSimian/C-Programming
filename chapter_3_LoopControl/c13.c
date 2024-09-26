//increment operators (i++ = print first then increase) (++i = increase first then print)
#include<stdio.h>
int main()
{
    int i = 5;
    printf("the value of i after i++ is %d\n",i++);
    printf("the value after i++ is %d\n",++i);
    printf("the value of i is %d\n",i);
    return 0;
}