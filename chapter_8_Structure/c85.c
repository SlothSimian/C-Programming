//wap with structures to represent a bank account of a customer
#include<stdio.h>
#include<string.h>
struct BankAccount{
    int AcNumber;
    char name[20];
    float balance;
};
          
int main(){
    struct BankAccount b1;
    b1.AcNumber = 11000;
    strcpy(b1.name, "Jayant");
    b1.balance = 69000;

    printf("The account number of customer is %d\n",b1.AcNumber);
    printf("The name of customer is %s\n",b1.name);
    printf("The bank balance of customer is %.2f\n",b1.balance);
    


    return 0;
}