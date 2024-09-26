//wap with structure capable of storing dates. write a function to compare dates
#include<stdio.h>
typedef struct Date{
    int date;
    int month;
    int year;
}date;  

void display(date d){
    printf("The date is: %d/%d/%d\n",d.date,d.month,d.year);
}  

int dateCMP(date d1, date d2){
    // Make decision based on year comparison
    if(d1.year>d2.year){
        return 1;
    }
    if(d1.year<d2.year){
        return -1;
    }
    // Make decision based on month comparison
    if(d1.month>d2.month){
        return 1;
    }
    if(d1.month<d2.month){
        return -1;
    }
    // Make decision based on date comparison
    if(d1.date>d2.date){
        return 1;
    }
    if(d1.date<d2.date){
        return -1;
    }
    return 0;
    
}
int main(){
    date d1 = {2, 10, 22};
    date d2 = {5, 14, 23};
    display(d1);
    display(d2);

    int a = dateCMP(d1, d2);
    printf("Date comparison function returns : %d",a);
    return 0;
}